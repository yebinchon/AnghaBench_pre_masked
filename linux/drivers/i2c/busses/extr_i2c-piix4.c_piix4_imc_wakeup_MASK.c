
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_2 = VAR_1;

 if (!FUNC_3(VAR_0, 2, "smbus_kerncz_imc"))
  return;


 FUNC_1(0x82, 0x00);

 FUNC_1(0x83, 0xB5);

 FUNC_1(0x80, 0x96);

 while (VAR_2--) {
  if (FUNC_0(0x82) == 0xfa)
   break;
  FUNC_4(1000, 2000);
 }

 FUNC_2(VAR_0, 2);
}
