
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int rtree_leaf_elm_t ;
typedef int lock_result_t ;
typedef int extent_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int *,int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int) ;

__attribute__((used)) static lock_result_t
FUNC_4(tsdn_t *VAR_4, rtree_leaf_elm_t *VAR_5,
    extent_t **VAR_6, bool VAR_7) {
 extent_t *VAR_8 = FUNC_2(VAR_4, &VAR_0,
     VAR_5, 1);


 if (VAR_8 == ((void*)0) || (VAR_7 && FUNC_3(VAR_4,
     &VAR_0, VAR_5, 1))) {
  return VAR_2;
 }





 FUNC_0(VAR_4, VAR_8);
 extent_t *VAR_9 = FUNC_2(VAR_4,
     &VAR_0, VAR_5, 1);

 if (VAR_8 == VAR_9) {
  *VAR_6 = VAR_8;
  return VAR_3;
 } else {
  FUNC_1(VAR_4, VAR_8);
  return VAR_1;
 }
}
