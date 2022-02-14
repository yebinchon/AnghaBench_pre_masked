
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int arena_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int *,int ) ;
 int * FUNC_2 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

arena_t *
FUNC_8(tsd_t *VAR_1) {

 if (VAR_0 == 0) {
  FUNC_5(!FUNC_6());
 }

 arena_t *VAR_2 = FUNC_2(FUNC_7(VAR_1), VAR_0, 0);
 if (VAR_2 == ((void*)0)) {

  FUNC_5(VAR_0 != 0);
  VAR_2 = FUNC_2(FUNC_7(VAR_1), VAR_0, 1);
  if (VAR_2 == ((void*)0)) {
   return ((void*)0);
  }






  if (FUNC_0() > 0) {
   FUNC_1(FUNC_7(VAR_1), VAR_2, 0);
  }
  if (FUNC_3() > 0) {
   FUNC_4(FUNC_7(VAR_1), VAR_2, 0);
  }
 }

 return VAR_2;
}
