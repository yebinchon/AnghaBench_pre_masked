
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int const u16 ;



__attribute__((used)) static inline u16 FUNC_0(const uint32_t VAR_0)
{
 return (((VAR_0 >> 3) & 0x001f) |
  ((VAR_0 >> 5) & 0x07e0) |
  ((VAR_0 >> 8) & 0xf800));
}
