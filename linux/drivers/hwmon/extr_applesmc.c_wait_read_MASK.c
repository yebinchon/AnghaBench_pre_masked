
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void)
{
 u8 VAR_4;
 int VAR_5;
 for (VAR_5 = VAR_2; VAR_5 < VAR_1; VAR_5 <<= 1) {
  FUNC_2(VAR_5);
  VAR_4 = FUNC_0(VAR_0);

  if (VAR_4 & 0x01)
   return 0;
 }

 FUNC_1("wait_read() fail: 0x%02x\n", VAR_4);
 return -VAR_3;
}
