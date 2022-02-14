
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u32 VAR_0)
{
 return (0x9669 >> (0xF & (VAR_0 ^
  (VAR_0 >> 4) ^ (VAR_0 >> 8) ^ (VAR_0 >> 12) ^
  (VAR_0 >> 16) ^ ((VAR_0) >> 20) ^ (VAR_0 >> 24) ^
  (VAR_0 >> 28)))) & 1;
}
