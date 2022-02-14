
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

unsigned int FUNC_0(const char *VAR_5, const char *VAR_6)
{
 if (!VAR_5 || VAR_5 >= VAR_6)
  return VAR_1;
 else if (*VAR_5 == '"')
  return VAR_3;
 else if (*VAR_5 == '{')
  return VAR_2;
 else if (*VAR_5 == '[')
  return VAR_0;

 return VAR_4;
}
