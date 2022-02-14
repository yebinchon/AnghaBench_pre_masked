
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static long FUNC_3(u32 VAR_0)
{
 u32 VAR_1 = VAR_0, VAR_2 = VAR_0 + 0x08;
 u8 VAR_3, VAR_4, VAR_5, VAR_6;
 long VAR_7 = 0, VAR_8;
 int VAR_9 = 3;

 do {
  VAR_8 = VAR_7;


  FUNC_2(0x20, VAR_1 + 0x01);
  VAR_3 = FUNC_1(VAR_1 + 0x03);
  FUNC_2(0x21, VAR_1 + 0x01);
  VAR_4 = FUNC_1(VAR_1 + 0x03);
  FUNC_2(0x20, VAR_2 + 0x01);
  VAR_5 = FUNC_1(VAR_2 + 0x03);
  FUNC_2(0x21, VAR_2 + 0x01);
  VAR_6 = FUNC_1(VAR_2 + 0x03);

  VAR_7 = (VAR_6 << 23) | (VAR_5 << 15) | (VAR_4 << 8) | VAR_3;






 } while (VAR_9-- && (((VAR_8 ^ VAR_7) & 0x3fff8000) || VAR_8 < VAR_7));

 FUNC_0("cnt0[%02X] cnt1[%02X] cnt2[%02X] cnt3[%02X]\n",
    VAR_3, VAR_4, VAR_5, VAR_6);

 return VAR_7;
}
