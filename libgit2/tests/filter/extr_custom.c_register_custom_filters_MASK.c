
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 static int VAR_3 = 0;

 if (!VAR_3) {
  FUNC_0(FUNC_4(
   "bitflip", FUNC_1(), VAR_0));

  FUNC_0(FUNC_4(
   "reverse", FUNC_3("+reverse"),
   VAR_2));


  FUNC_0(FUNC_4(
   "pre-reverse",
   FUNC_3("+prereverse"),
   VAR_1));

  FUNC_0(FUNC_4(
   "erroneous",
   FUNC_2("+erroneous"),
   VAR_1));

  VAR_3 = 1;
 }
}
