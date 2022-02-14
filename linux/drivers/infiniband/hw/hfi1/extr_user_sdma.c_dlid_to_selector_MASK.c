
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static u8 FUNC_1(u16 VAR_0)
{
 static u8 VAR_1[256];
 static int VAR_2;
 static u8 VAR_3;
 int VAR_4;

 if (!VAR_2) {
  FUNC_0(VAR_1, 0xFF, 256);
  VAR_2 = 1;
 }

 VAR_4 = ((VAR_0 >> 8) ^ VAR_0) & 0xFF;
 if (VAR_1[VAR_4] == 0xFF) {
  VAR_1[VAR_4] = VAR_3;
  VAR_3 = (VAR_3 + 1) & 0x7F;
 }

 return VAR_1[VAR_4];
}
