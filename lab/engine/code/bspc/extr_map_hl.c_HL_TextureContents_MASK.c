
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;

int FUNC_1(char *VAR_4)
{
 if (!FUNC_0 (VAR_4, "sky",3))
  return VAR_2;

 if (!FUNC_0(VAR_4+1,"!lava",5))
  return VAR_0;

 if (!FUNC_0(VAR_4+1,"!slime",6))
  return VAR_1;
 if (VAR_4[0] == '!')
  return VAR_3;
 return VAR_2;
}
