
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;


 int FUNC_0 (struct edid*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct edid *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;
 char VAR_4[13];

 if (VAR_2 <= 0)
  return;

 VAR_3 = FUNC_2(FUNC_0(VAR_0, VAR_4), VAR_2 - 1);
 FUNC_1(VAR_1, VAR_4, VAR_3);
 VAR_1[VAR_3] = '\0';
}
