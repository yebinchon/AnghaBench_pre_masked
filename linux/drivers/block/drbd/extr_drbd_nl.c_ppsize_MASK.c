
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int units ;


 int FUNC_0 (char*,char*,unsigned int,char) ;

char *FUNC_1(char *VAR_0, unsigned long long VAR_1)
{


 static char VAR_2[] = { 'K', 'M', 'G', 'T', 'P', 'E' };
 int VAR_3 = 0;
 while (VAR_1 >= 10000 && VAR_3 < sizeof(VAR_2)-1) {

  VAR_1 = (VAR_1 >> 10) + !!(VAR_1 & (1<<9));
  VAR_3++;
 }
 FUNC_0(VAR_0, "%u %cB", (unsigned)VAR_1, VAR_2[VAR_3]);

 return VAR_0;
}
