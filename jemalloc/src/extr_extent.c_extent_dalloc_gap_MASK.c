
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
typedef int arena_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int **,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(tsdn_t *VAR_2, arena_t *VAR_3, extent_t *VAR_4) {
 extent_hooks_t *VAR_5 = VAR_0;

 FUNC_4(FUNC_3(VAR_2),
     VAR_1, 0);

 if (FUNC_2(VAR_2, VAR_4)) {
  FUNC_0(VAR_2, VAR_3, VAR_4);
  return;
 }
 FUNC_1(VAR_2, VAR_3, &VAR_5, VAR_4);
}
