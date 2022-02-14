
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(size_t *VAR_1, size_t VAR_2)
{
 if (VAR_0 - *VAR_1 < VAR_2) {
  *VAR_1 = (size_t)-1;
  return 0;
 }

 *VAR_1 = *VAR_1 + VAR_2;
 return 1;
}
