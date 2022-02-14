
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle ;


 int FUNC_0 (unsigned long*) ;

int FUNC_1(phandle VAR_0, const char *VAR_1)
{
 unsigned long VAR_2[6];

 if (!VAR_0 || !VAR_1)
  return -1;

 VAR_2[0] = (unsigned long) "getproplen";
 VAR_2[1] = 2;
 VAR_2[2] = 1;
 VAR_2[3] = (unsigned int) VAR_0;
 VAR_2[4] = (unsigned long) VAR_1;
 VAR_2[5] = (unsigned long) -1;

 FUNC_0(VAR_2);

 return (int) VAR_2[5];
}
