
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int off_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_2(off_t VAR_0, off_t VAR_1, FILE *VAR_2)
{
 int VAR_3;
 off_t VAR_4;
 char VAR_5[8];
 int VAR_6;

 VAR_4 = VAR_0 - VAR_1/2;
 if (VAR_0 == 0 && VAR_1 == 0)
  VAR_3 = 0;
 else if (VAR_4 < 0)




  VAR_3 = -999;
 else {




  while (VAR_0 > 0x100000) {
   VAR_4 >>= 1;
   VAR_0 >>= 1;
  }
  if (VAR_0 != 0)
   VAR_3 = ((u_int)VAR_4 * 2000) / (u_int)VAR_0 - 1000;
  else
   VAR_3 = 0;
 }

 VAR_6 = FUNC_1(VAR_5, sizeof VAR_5, "%2.2d.", VAR_3);

 VAR_5[VAR_6 - 1] = VAR_5[VAR_6 - 2];
 VAR_5[VAR_6 - 2] = '.';
 FUNC_0(VAR_2, "%5s%%", VAR_5);
}
