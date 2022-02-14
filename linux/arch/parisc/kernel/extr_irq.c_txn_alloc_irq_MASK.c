
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *,int *) ;

int FUNC_1(unsigned int VAR_2)
{
 int VAR_3;


 for (VAR_3 = VAR_0 + 1; VAR_3 <= VAR_1; VAR_3++) {
  if (FUNC_0(VAR_3, ((void*)0), ((void*)0)) < 0)
   continue;
  if ((VAR_3 - VAR_0) >= (1 << VAR_2))
   continue;
  return VAR_3;
 }


 return -1;
}
