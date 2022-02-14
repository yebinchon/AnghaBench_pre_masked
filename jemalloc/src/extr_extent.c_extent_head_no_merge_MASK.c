
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extent_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_4(extent_t *VAR_2, extent_t *VAR_3) {
 FUNC_0(FUNC_1(VAR_2) < FUNC_1(VAR_3));





 if (VAR_0) {
  return 0;
 }
 if (!VAR_1) {
  return 1;
 }

 if (FUNC_2(VAR_3)) {




  FUNC_0(FUNC_3(VAR_2, VAR_3) != 0);
  return 1;
 }
 FUNC_0(FUNC_3(VAR_2, VAR_3) == 0);

 return 0;
}
