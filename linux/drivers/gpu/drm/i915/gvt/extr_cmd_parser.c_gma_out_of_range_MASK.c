
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline bool FUNC_0(unsigned long VAR_0,
  unsigned long VAR_1, unsigned int VAR_2)
{
 if (VAR_2 >= VAR_1)
  return (VAR_0 < VAR_1) || (VAR_0 > VAR_2);
 else
  return (VAR_0 > VAR_2) && (VAR_0 < VAR_1);
}
