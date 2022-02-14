
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_3)
{
 int VAR_4;





 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_0(VAR_0, VAR_2);
  FUNC_1();
  if (VAR_3 & 1) {
   FUNC_2(VAR_1, VAR_2);
  } else {
   FUNC_0(VAR_1, VAR_2);
  }

  FUNC_1();
  FUNC_3(2);
  FUNC_2(VAR_0, VAR_2);
  FUNC_1();
  FUNC_3(1);
  VAR_3 >>= 1;
 }
}
