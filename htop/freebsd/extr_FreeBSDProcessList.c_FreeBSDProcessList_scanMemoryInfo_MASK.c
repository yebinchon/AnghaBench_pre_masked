
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int swap ;
struct kvm_swap {scalar_t__ ksw_used; scalar_t__ ksw_total; } ;
struct TYPE_5__ {int memActive; int memWire; int memZfsArc; int kd; scalar_t__ zfsArcEnabled; } ;
struct TYPE_4__ {int totalMem; int buffersMem; int cachedMem; int usedMem; int totalSwap; int usedSwap; scalar_t__ sharedMem; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ FreeBSDProcessList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct kvm_swap*,int,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int,int*,size_t*,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(ProcessList* VAR_7) {
   FreeBSDProcessList* VAR_8 = (FreeBSDProcessList*) VAR_7;
   size_t VAR_9 = sizeof(VAR_7->totalMem);





   FUNC_1(VAR_0, 2, &(VAR_7->totalMem), &VAR_9, ((void*)0), 0);
   VAR_7->totalMem /= 1024;

   FUNC_1(VAR_3, 4, &(VAR_8->memActive), &VAR_9, ((void*)0), 0);
   VAR_8->memActive *= VAR_6;

   FUNC_1(VAR_5, 4, &(VAR_8->memWire), &VAR_9, ((void*)0), 0);
   VAR_8->memWire *= VAR_6;

   FUNC_1(VAR_2, 2, &(VAR_7->buffersMem), &VAR_9, ((void*)0), 0);
   VAR_7->buffersMem /= 1024;

   FUNC_1(VAR_4, 4, &(VAR_7->cachedMem), &VAR_9, ((void*)0), 0);
   VAR_7->cachedMem *= VAR_6;

   if (VAR_8->zfsArcEnabled) {
      VAR_9 = sizeof(VAR_8->memZfsArc);
      FUNC_1(VAR_1, 5, &(VAR_8->memZfsArc), &VAR_9 , ((void*)0), 0);
      VAR_8->memZfsArc /= 1024;
      VAR_8->memWire -= VAR_8->memZfsArc;
      VAR_7->cachedMem += VAR_8->memZfsArc;


   }

   VAR_7->usedMem = VAR_8->memActive + VAR_8->memWire;







   struct kvm_swap VAR_10[16];
   int VAR_11 = FUNC_0(VAR_8->kd, VAR_10, sizeof(VAR_10)/sizeof(VAR_10[0]), 0);
   VAR_7->totalSwap = 0;
   VAR_7->usedSwap = 0;
   for (int VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
      VAR_7->totalSwap += VAR_10[VAR_12].ksw_total;
      VAR_7->usedSwap += VAR_10[VAR_12].ksw_used;
   }
   VAR_7->totalSwap *= VAR_6;
   VAR_7->usedSwap *= VAR_6;

   VAR_7->sharedMem = 0;
}
