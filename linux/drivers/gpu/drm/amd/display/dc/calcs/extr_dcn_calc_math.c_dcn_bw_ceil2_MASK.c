
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const,float const) ;

float FUNC_1(const float VAR_0, const float VAR_1)
{
 float VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_1 == 0)
  return 0;
 return VAR_2 + 0.00001 >= VAR_0 ? VAR_0 : VAR_2 + VAR_1;
}
