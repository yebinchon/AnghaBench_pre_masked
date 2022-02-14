
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int szind_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
struct TYPE_5__ {int extent_grow_mtx; int eset_retained; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,TYPE_1__*,int **,size_t,size_t,size_t,int,int ,int*,int*) ;
 int * FUNC_3 (int *,TYPE_1__*,int **,int *,void*,size_t,size_t,size_t,int,int ,int*,int*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static extent_t *
FUNC_7(tsdn_t *VAR_2, arena_t *VAR_3,
    extent_hooks_t **VAR_4, void *VAR_5, size_t VAR_6, size_t VAR_7,
    size_t VAR_8, bool VAR_9, szind_t VAR_10, bool *VAR_11, bool *VAR_12) {
 FUNC_0(VAR_6 != 0);
 FUNC_0(VAR_8 != 0);

 FUNC_5(VAR_2, &VAR_3->extent_grow_mtx);

 extent_t *VAR_13 = FUNC_3(VAR_2, VAR_3, VAR_4,
     &VAR_3->eset_retained, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12, 1);
 if (VAR_13 != ((void*)0)) {
  FUNC_6(VAR_2, &VAR_3->extent_grow_mtx);
  if (VAR_0) {
   FUNC_1(VAR_2, VAR_13);
  }
 } else if (VAR_1 && VAR_5 == ((void*)0)) {
  VAR_13 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6,
      VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

 } else {
  FUNC_6(VAR_2, &VAR_3->extent_grow_mtx);
 }
 FUNC_4(VAR_2, &VAR_3->extent_grow_mtx);

 return VAR_13;
}
