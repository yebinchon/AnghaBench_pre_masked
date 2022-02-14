
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(u16 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  if (VAR_1 & 0x8000)
   VAR_1 = VAR_1 ^ VAR_0;
  VAR_1 = VAR_1 << 1;
 }
 return (u8)(VAR_1 >> 8);
}
