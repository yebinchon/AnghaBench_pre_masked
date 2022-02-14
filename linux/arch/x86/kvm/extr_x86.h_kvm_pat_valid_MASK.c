
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static inline bool FUNC_0(u64 VAR_0)
{
 if (VAR_0 & 0xF8F8F8F8F8F8F8F8ull)
  return 0;

 return (VAR_0 | ((VAR_0 & 0x0202020202020202ull) << 1)) == VAR_0;
}
