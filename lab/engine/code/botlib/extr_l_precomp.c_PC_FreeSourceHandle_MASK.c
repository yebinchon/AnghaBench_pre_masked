
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;

int FUNC_1(int VAR_4)
{
 if (VAR_4 < 1 || VAR_4 >= VAR_0)
  return VAR_1;
 if (!VAR_3[VAR_4])
  return VAR_1;

 FUNC_0(VAR_3[VAR_4]);
 VAR_3[VAR_4] = ((void*)0);
 return VAR_2;
}
