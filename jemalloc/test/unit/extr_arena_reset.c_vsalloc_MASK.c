
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef scalar_t__ szind_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int *,uintptr_t,int,int **,scalar_t__*) ;
 size_t FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static size_t
FUNC_4(tsdn_t *VAR_3, const void *VAR_4) {
 rtree_ctx_t VAR_5;
 rtree_ctx_t *VAR_6 = FUNC_3(VAR_3, &VAR_5);

 extent_t *VAR_7;
 szind_t VAR_8;
 if (FUNC_1(VAR_3, &VAR_2, VAR_6,
     (uintptr_t)VAR_4, 0, &VAR_7, &VAR_8)) {
  return 0;
 }

 if (VAR_7 == ((void*)0)) {
  return 0;
 }
 if (FUNC_0(VAR_7) != VAR_1) {
  return 0;
 }

 if (VAR_8 == VAR_0) {
  return 0;
 }

 return FUNC_2(VAR_8);
}
