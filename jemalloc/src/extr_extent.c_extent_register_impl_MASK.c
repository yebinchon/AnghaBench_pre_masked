
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_leaf_elm_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int,int,int **,int **) ;
 int FUNC_4 (int *,int *,int *,int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,int *) ;

__attribute__((used)) static bool
FUNC_9(tsdn_t *VAR_1, extent_t *VAR_2, bool VAR_3) {
 rtree_ctx_t VAR_4;
 rtree_ctx_t *VAR_5 = FUNC_8(VAR_1, &VAR_4);
 rtree_leaf_elm_t *VAR_6, *VAR_7;





 FUNC_2(VAR_1, VAR_2);

 if (FUNC_3(VAR_1, VAR_5, VAR_2, 0, 1,
     &VAR_6, &VAR_7)) {
  FUNC_7(VAR_1, VAR_2);
  return 1;
 }

 szind_t VAR_8 = FUNC_6(VAR_2);
 bool VAR_9 = FUNC_5(VAR_2);
 FUNC_4(VAR_1, VAR_6, VAR_7, VAR_2, VAR_8, VAR_9);
 if (VAR_9) {
  FUNC_1(VAR_1, VAR_5, VAR_2, VAR_8);
 }

 FUNC_7(VAR_1, VAR_2);

 if (VAR_0 && VAR_3) {
  FUNC_0(VAR_1, VAR_2);
 }

 return 0;
}
