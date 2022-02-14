
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int swap ;
struct kvm_swap {scalar_t__ ksw_used; scalar_t__ ksw_total; } ;
struct TYPE_5__ {int memActive; int memWire; int kd; } ;
struct TYPE_4__ {int totalMem; int buffersMem; int cachedMem; int usedMem; int totalSwap; int usedSwap; scalar_t__ sharedMem; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ DragonFlyBSDProcessList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct kvm_swap*,int,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int*,size_t*,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(ProcessList* VAR_6) {
   DragonFlyBSDProcessList* VAR_7 = (DragonFlyBSDProcessList*) VAR_6;







   size_t VAR_8 = sizeof(VAR_6->totalMem);





   FUNC_1(VAR_0, 2, &(VAR_6->totalMem), &VAR_8, ((void*)0), 0);
   VAR_6->totalMem /= 1024;

   FUNC_1(VAR_2, 4, &(VAR_7->memActive), &VAR_8, ((void*)0), 0);
   VAR_7->memActive *= VAR_5;

   FUNC_1(VAR_4, 4, &(VAR_7->memWire), &VAR_8, ((void*)0), 0);
   VAR_7->memWire *= VAR_5;

   FUNC_1(VAR_1, 2, &(VAR_6->buffersMem), &VAR_8, ((void*)0), 0);
   VAR_6->buffersMem /= 1024;

   FUNC_1(VAR_3, 4, &(VAR_6->cachedMem), &VAR_8, ((void*)0), 0);
   VAR_6->cachedMem *= VAR_5;
   VAR_6->usedMem = VAR_7->memActive + VAR_7->memWire;







   struct kvm_swap VAR_9[16];
   int VAR_10 = FUNC_0(VAR_7->kd, VAR_9, sizeof(VAR_9)/sizeof(VAR_9[0]), 0);
   VAR_6->totalSwap = 0;
   VAR_6->usedSwap = 0;
   for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
      VAR_6->totalSwap += VAR_9[VAR_11].ksw_total;
      VAR_6->usedSwap += VAR_9[VAR_11].ksw_used;
   }
   VAR_6->totalSwap *= VAR_5;
   VAR_6->usedSwap *= VAR_5;

   VAR_6->sharedMem = 0;
}
