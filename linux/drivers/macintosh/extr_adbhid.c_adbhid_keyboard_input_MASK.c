
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int,unsigned char,int ) ;
 int FUNC_1 (char*,int,unsigned char,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static void
FUNC_2(unsigned char *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = (VAR_2[0] >> 4) & 0x0f;

 if (!VAR_1[VAR_5]) {
  FUNC_1("ADB HID on ID %d not yet registered, packet %#02x, %#02x, %#02x, %#02x\n",
         VAR_5, VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
  return;
 }


 if (VAR_3 != 3 || (VAR_2[0] & 3) != VAR_0)
  return;
 FUNC_0(VAR_5, VAR_2[1], 0);
 if (!(VAR_2[2] == 0xff || (VAR_2[2] == 0x7f && VAR_2[1] == 0x7f)))
  FUNC_0(VAR_5, VAR_2[2], 0);
}
