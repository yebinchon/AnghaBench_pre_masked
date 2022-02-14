
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
 if (VAR_2 && VAR_1 > (VAR_0 - VAR_3) / VAR_2)
  return 0;
 return VAR_3 + VAR_1 * VAR_2;
}
