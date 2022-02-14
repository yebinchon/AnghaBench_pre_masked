
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, int VAR_2)
{
 unsigned long VAR_3[7];
 int VAR_4;

 VAR_3[0] = (unsigned long) "write";
 VAR_3[1] = 3;
 VAR_3[2] = 1;
 VAR_3[3] = (unsigned int) VAR_0;
 VAR_3[4] = (unsigned long) VAR_1;
 VAR_3[5] = (unsigned int) VAR_2;
 VAR_3[6] = (unsigned long) -1;

 FUNC_0(VAR_3);

 VAR_4 = (int) VAR_3[6];
 if (VAR_4 < 0)
  return -1;
 return VAR_4;
}
