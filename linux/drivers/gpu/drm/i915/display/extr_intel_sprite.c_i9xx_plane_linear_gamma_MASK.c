
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static void FUNC_0(u16 VAR_0[8])
{

 static const u8 VAR_1[8] = { 0, 1, 2, 4, 8, 16, 24, 32 };
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_0[VAR_2] = (VAR_1[VAR_2] << 8) / 32;
}
