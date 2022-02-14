
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int rtree_leaf_elm_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_0 ;
 int * FUNC_3 (int *,int *,int *,uintptr_t,int,int) ;

__attribute__((used)) static bool
FUNC_4(tsdn_t *VAR_1, rtree_ctx_t *VAR_2,
    const extent_t *VAR_3, bool VAR_4, bool VAR_5,
    rtree_leaf_elm_t **VAR_6, rtree_leaf_elm_t **VAR_7) {
 *VAR_6 = FUNC_3(VAR_1, &VAR_0, VAR_2,
     (uintptr_t)FUNC_1(VAR_3), VAR_4, VAR_5);
 if (!VAR_4 && *VAR_6 == ((void*)0)) {
  return 1;
 }
 FUNC_0(*VAR_6 != ((void*)0));

 *VAR_7 = FUNC_3(VAR_1, &VAR_0, VAR_2,
     (uintptr_t)FUNC_2(VAR_3), VAR_4, VAR_5);
 if (!VAR_4 && *VAR_7 == ((void*)0)) {
  return 1;
 }
 FUNC_0(*VAR_7 != ((void*)0));

 return 0;
}
