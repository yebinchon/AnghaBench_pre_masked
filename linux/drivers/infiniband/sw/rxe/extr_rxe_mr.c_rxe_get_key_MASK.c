
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static u8 FUNC_0(void)
{
 static u32 VAR_0 = 1;

 VAR_0 = VAR_0 << 1;

 VAR_0 |= (0 != (VAR_0 & 0x100)) ^ (0 != (VAR_0 & 0x10))
  ^ (0 != (VAR_0 & 0x80)) ^ (0 != (VAR_0 & 0x40));

 VAR_0 &= 0xff;

 return VAR_0;
}
