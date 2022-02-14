
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_5__ {int curregs; int nrequests; int nmalloc; } ;
struct TYPE_6__ {int lock; TYPE_1__ stats; int * slabcur; } ;
typedef TYPE_2__ bin_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int) ;
 TYPE_2__* FUNC_1 (int *,int *,size_t,unsigned int*) ;
 void* FUNC_2 (int *,int *,TYPE_2__*,size_t,unsigned int) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int *,int *) ;
 int FUNC_5 (int) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (void*,int ,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_9 (size_t) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void *
FUNC_11(tsdn_t *VAR_6, arena_t *VAR_7, szind_t VAR_8, bool VAR_9) {
 void *VAR_10;
 bin_t *VAR_11;
 size_t VAR_12;
 extent_t *VAR_13;

 FUNC_5(VAR_8 < VAR_0);
 VAR_12 = FUNC_9(VAR_8);
 unsigned VAR_14;
 VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_8, &VAR_14);

 if ((VAR_13 = VAR_11->slabcur) != ((void*)0) && FUNC_6(VAR_13) > 0) {
  VAR_10 = FUNC_4(VAR_13, &VAR_1[VAR_8]);
 } else {
  VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_11, VAR_8, VAR_14);
 }

 if (VAR_10 == ((void*)0)) {
  FUNC_7(VAR_6, &VAR_11->lock);
  return ((void*)0);
 }

 if (VAR_3) {
  VAR_11->stats.nmalloc++;
  VAR_11->stats.nrequests++;
  VAR_11->stats.curregs++;
 }

 FUNC_7(VAR_6, &VAR_11->lock);

 if (!VAR_9) {
  if (VAR_2) {
   if (FUNC_10(VAR_4)) {
    FUNC_0(VAR_10,
        &VAR_1[VAR_8], 0);
   } else if (FUNC_10(VAR_5)) {
    FUNC_8(VAR_10, 0, VAR_12);
   }
  }
 } else {
  if (VAR_2 && FUNC_10(VAR_4)) {
   FUNC_0(VAR_10, &VAR_1[VAR_8],
       1);
  }
  FUNC_8(VAR_10, 0, VAR_12);
 }

 FUNC_3(VAR_6, VAR_7);
 return VAR_10;
}
