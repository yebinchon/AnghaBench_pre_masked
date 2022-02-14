
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const int (*VAR_1)[2], int VAR_2,
          int VAR_3, int VAR_4)
{
 while (VAR_2-- > 0)
  if (VAR_3 == VAR_1[VAR_2][0] && VAR_4 == VAR_1[VAR_2][1])
   return VAR_2;

 return -VAR_0;
}
