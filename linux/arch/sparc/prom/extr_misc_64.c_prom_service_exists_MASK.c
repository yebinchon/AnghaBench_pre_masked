
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
 unsigned long VAR_1[5];

 VAR_1[0] = (unsigned long) "test";
 VAR_1[1] = 1;
 VAR_1[2] = 1;
 VAR_1[3] = (unsigned long) VAR_0;
 VAR_1[4] = (unsigned long) -1;

 FUNC_0(VAR_1);

 if (VAR_1[4])
  return 0;
 return 1;
}
