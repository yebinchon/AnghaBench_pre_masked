
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

void FUNC_3(unsigned char *VAR_0, char *VAR_1)
{
 unsigned int VAR_2[6];
 int VAR_3;

 if (FUNC_2(VAR_1, "%x:%x:%x:%x:%x:%x",
     &VAR_2[0], &VAR_2[1], &VAR_2[2],
     &VAR_2[3], &VAR_2[4], &VAR_2[5]) != 6) {
     FUNC_1("can't parse mac %s\n", VAR_1);
     FUNC_0(1);
 }

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
  *VAR_0++ = (unsigned char) VAR_2[VAR_3];
}
