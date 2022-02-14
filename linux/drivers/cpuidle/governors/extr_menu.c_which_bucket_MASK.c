
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_1, unsigned long VAR_2)
{
 int VAR_3 = 0;







 if (VAR_2)
  VAR_3 = VAR_0/2;

 if (VAR_1 < 10)
  return VAR_3;
 if (VAR_1 < 100)
  return VAR_3 + 1;
 if (VAR_1 < 1000)
  return VAR_3 + 2;
 if (VAR_1 < 10000)
  return VAR_3 + 3;
 if (VAR_1 < 100000)
  return VAR_3 + 4;
 return VAR_3 + 5;
}
