
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int atomic_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int VAR_0 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(u8 *VAR_2, u8 VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0);
 atomic_t *VAR_5 = FUNC_6(&VAR_1);


 if (VAR_4 == -1 || FUNC_5())
  return;


 FUNC_3(VAR_5);


 if (FUNC_4(VAR_5) == 1 && FUNC_9(VAR_4)) {
  FUNC_7(VAR_4);
 } else if (FUNC_0(*VAR_2) == VAR_3) {

  FUNC_8(VAR_4);
 }

 FUNC_2(VAR_5);
}
