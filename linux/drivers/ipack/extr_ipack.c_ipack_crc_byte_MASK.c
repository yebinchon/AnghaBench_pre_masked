
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u16 VAR_0, u8 VAR_1)
{
 int VAR_2;

 VAR_0 ^= VAR_1 << 8;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  VAR_0 = (VAR_0 << 1) ^ ((VAR_0 & 0x8000) ? 0x1021 : 0);
 return VAR_0;
}
