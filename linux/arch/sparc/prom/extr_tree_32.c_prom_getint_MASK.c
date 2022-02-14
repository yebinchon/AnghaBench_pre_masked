
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle ;


 int FUNC_0 (int ,char*,char*,int) ;

int FUNC_1(phandle VAR_0, char *VAR_1)
{
 static int VAR_2;

 if(FUNC_0(VAR_0, VAR_1, (char *) &VAR_2, sizeof(int)) != -1)
  return VAR_2;

 return -1;
}
