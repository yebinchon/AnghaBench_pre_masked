
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s32 ;



__attribute__((used)) static inline u32 FUNC_0(const u8 *VAR_0)
{
 return (s32)((VAR_0[0] | VAR_0[1] << 8 | VAR_0[2] << 16) << 8) >> 8;
}
