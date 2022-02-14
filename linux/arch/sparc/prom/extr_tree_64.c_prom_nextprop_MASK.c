
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;
typedef scalar_t__ phandle ;


 int FUNC_0 (unsigned long*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char const*) ;

char *FUNC_2(phandle VAR_1, const char *VAR_2, char *VAR_3)
{
 unsigned long VAR_4[7];
 char VAR_5[32];

 if ((s32)VAR_1 == -1) {
  *VAR_3 = 0;
  return VAR_3;
 }
 if (VAR_2 == VAR_3) {
  FUNC_1 (VAR_5, VAR_2);
  VAR_2 = VAR_5;
 }

 VAR_4[0] = (unsigned long) VAR_0;
 VAR_4[1] = 3;
 VAR_4[2] = 1;
 VAR_4[3] = (unsigned int) VAR_1;
 VAR_4[4] = (unsigned long) VAR_2;
 VAR_4[5] = (unsigned long) VAR_3;
 VAR_4[6] = (unsigned long) -1;

 FUNC_0(VAR_4);

 return VAR_3;
}
