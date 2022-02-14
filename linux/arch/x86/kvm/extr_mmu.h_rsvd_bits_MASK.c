
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;



__attribute__((used)) static inline u64 FUNC_0(int VAR_0, int VAR_1)
{
 if (VAR_1 < VAR_0)
  return 0;

 return ((1ULL << (VAR_1 - VAR_0 + 1)) - 1) << VAR_0;
}
