
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_3, int *VAR_4)
{
 int VAR_5 = FUNC_2("get-power-level");
 int VAR_6;

 if (VAR_5 == VAR_2)
  return -VAR_0;

 while ((VAR_6 = FUNC_0(VAR_5, 1, 2, VAR_4, VAR_3)) == VAR_1)
  FUNC_3(1);

 if (VAR_6 < 0)
  return FUNC_1(VAR_6);
 return VAR_6;
}
