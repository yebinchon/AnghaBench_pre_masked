
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_list_t ;
typedef int extent_hooks_t ;
typedef int eset_t ;
typedef int arena_t ;
struct TYPE_4__ {int purging; int mtx; } ;
typedef TYPE_1__ arena_decay_t ;


 int VAR_0 ;
 size_t FUNC_0 (int *,int *,int **,TYPE_1__*,int *,int,int *,int) ;
 size_t FUNC_1 (int *,int *,int **,int *,size_t,size_t,int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_10(tsdn_t *VAR_1, arena_t *VAR_2, arena_decay_t *VAR_3,
    eset_t *VAR_4, bool VAR_5, size_t VAR_6, size_t VAR_7,
    bool VAR_8) {
 FUNC_9(FUNC_8(VAR_1),
     VAR_0, 1);
 FUNC_5(VAR_1, &VAR_3->mtx);

 if (VAR_3->purging || VAR_7 == 0) {
  return;
 }
 VAR_3->purging = 1;
 FUNC_7(VAR_1, &VAR_3->mtx);

 extent_hooks_t *VAR_9 = FUNC_3(VAR_2);

 extent_list_t VAR_10;
 FUNC_4(&VAR_10);

 size_t VAR_11 = FUNC_1(VAR_1, VAR_2, &VAR_9, VAR_4,
     VAR_6, VAR_7, &VAR_10);
 if (VAR_11 != 0) {
  size_t VAR_12 = FUNC_0(VAR_1, VAR_2,
      &VAR_9, VAR_3, VAR_4, VAR_5, &VAR_10,
      VAR_8);
  FUNC_2(VAR_12 == VAR_11);
 }

 FUNC_6(VAR_1, &VAR_3->mtx);
 VAR_3->purging = 0;
}
