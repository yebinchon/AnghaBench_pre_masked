
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (FUNC_0(VAR_2) == VAR_1)
   return VAR_2;

 FUNC_1("Couldn't find cpu id for hartid [%d]\n", VAR_1);
 return VAR_2;
}
