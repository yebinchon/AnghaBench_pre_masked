
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static int FUNC_0(unsigned VAR_6)
{
 if (VAR_6 >= VAR_5)
  return -VAR_0;

 if (VAR_6 < 8)
  return VAR_2 - VAR_6;
 if (VAR_6 < 16)
  return VAR_4 - VAR_6 + 8;
 if (VAR_6 < 20)
  return VAR_1 - VAR_6 + 16;

 return VAR_3 - VAR_6 + 20;
}
