
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(u8 VAR_5, u16 VAR_6)
{
 u8 VAR_7;
 int VAR_8;

 FUNC_1(VAR_5, VAR_6);
 for (VAR_8 = VAR_2; VAR_8 < VAR_1; VAR_8 <<= 1) {
  FUNC_3(VAR_8);
  VAR_7 = FUNC_0(VAR_0);

  if (VAR_7 & 0x02)
   continue;

  if (VAR_7 & 0x04)
   return 0;

  if (VAR_8 << 1 == VAR_1)
   break;

  FUNC_3(VAR_3);
  FUNC_1(VAR_5, VAR_6);
 }

 FUNC_2("send_byte(0x%02x, 0x%04x) fail: 0x%02x\n", VAR_5, VAR_6, VAR_7);
 return -VAR_4;
}
