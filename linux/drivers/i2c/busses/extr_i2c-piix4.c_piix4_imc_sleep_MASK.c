
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_4 = VAR_3;

 if (!FUNC_3(VAR_2, 2, "smbus_kerncz_imc"))
  return -VAR_0;


 FUNC_1(0x82, 0x00);

 FUNC_1(0x83, 0xB4);

 FUNC_1(0x80, 0x96);

 while (VAR_4--) {
  if (FUNC_0(0x82) == 0xfa) {
   FUNC_2(VAR_2, 2);
   return 0;
  }
  FUNC_4(1000, 2000);
 }

 FUNC_2(VAR_2, 2);
 return -VAR_1;
}
