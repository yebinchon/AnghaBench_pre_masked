
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u32 VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3,
          u32 VAR_4, u32 VAR_5)
{
 return ((VAR_0 & ((1 << 4) - 1)) << 28) |
  ((VAR_1 & 1) << 27) |
  ((VAR_2 & ((1 << 3) - 1)) << 24) |
  ((VAR_3 & ((1 << 8) - 1)) << 16) |
  ((VAR_4 & ((1 << 8) - 1)) << 8) |
  (VAR_5 & 1);
}
