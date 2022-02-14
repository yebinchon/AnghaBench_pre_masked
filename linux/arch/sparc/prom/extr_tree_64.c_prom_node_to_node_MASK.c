
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle ;


 int FUNC_0 (unsigned long*) ;

__attribute__((used)) static phandle FUNC_1(const char *VAR_0, phandle VAR_1)
{
 unsigned long VAR_2[5];

 VAR_2[0] = (unsigned long) VAR_0;
 VAR_2[1] = 1;
 VAR_2[2] = 1;
 VAR_2[3] = (unsigned int) VAR_1;
 VAR_2[4] = (unsigned long) -1;

 FUNC_0(VAR_2);

 return (phandle) VAR_2[4];
}
