
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static inline u16 FUNC_0(const u8 *VAR_0)
{
 return 3 + ((VAR_0[1] & 0x0f) << 8) + VAR_0[2];
}
