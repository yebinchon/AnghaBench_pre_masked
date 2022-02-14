
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline u8 FUNC_0(u8 VAR_0, int VAR_1, int VAR_2)
{
 return (VAR_0 & (~(0x3 << (VAR_1 << 1)))) |
  ((VAR_2 & 0x3) << (VAR_1 << 1));
}
