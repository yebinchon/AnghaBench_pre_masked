
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
typedef int eset_t ;
typedef int arena_t ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int *,int **,int *,int *,int *,int*,int) ;

__attribute__((used)) static bool
FUNC_4(tsdn_t *VAR_1, arena_t *VAR_2,
    extent_hooks_t **VAR_3, rtree_ctx_t *VAR_4, eset_t *VAR_5,
    extent_t *VAR_6) {
 FUNC_2(VAR_6, VAR_0);
 bool VAR_7;
 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, &VAR_7, 0);
 FUNC_2(VAR_6, FUNC_1(VAR_5));

 if (!VAR_7) {
  return 1;
 }
 FUNC_0(VAR_1, VAR_5, VAR_6);
 return 0;
}
