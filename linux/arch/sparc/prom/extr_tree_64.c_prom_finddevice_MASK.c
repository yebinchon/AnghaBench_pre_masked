
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle ;


 int FUNC_0 (unsigned long*) ;

phandle FUNC_1(const char *VAR_0)
{
 unsigned long VAR_1[5];

 if (!VAR_0)
  return 0;
 VAR_1[0] = (unsigned long) "finddevice";
 VAR_1[1] = 1;
 VAR_1[2] = 1;
 VAR_1[3] = (unsigned long) VAR_0;
 VAR_1[4] = (unsigned long) -1;

 FUNC_0(VAR_1);

 return (int) VAR_1[4];
}
