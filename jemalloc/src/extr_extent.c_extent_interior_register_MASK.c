
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int szind_t ;
typedef int rtree_ctx_t ;
typedef int extent_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int *,uintptr_t,int *,int ,int) ;

__attribute__((used)) static void
FUNC_5(tsdn_t *VAR_2, rtree_ctx_t *VAR_3, extent_t *VAR_4,
    szind_t VAR_5) {
 FUNC_0(FUNC_3(VAR_4));


 for (size_t VAR_6 = 1; VAR_6 < (FUNC_2(VAR_4) >> VAR_0) - 1; VAR_6++) {
  FUNC_4(VAR_2, &VAR_1, VAR_3,
      (uintptr_t)FUNC_1(VAR_4) + (uintptr_t)(VAR_6 <<
      VAR_0), VAR_4, VAR_5, 1);
 }
}
