
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline long long FUNC_0(unsigned long long VAR_0,
  unsigned long long VAR_1, int VAR_2)
{
 if (VAR_2 >= 64)
  return VAR_0 >> (VAR_2 - 64);
 return (VAR_0 << (64 - VAR_2)) | (VAR_1 >> VAR_2);
}
