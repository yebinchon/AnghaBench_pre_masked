
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int ,int) ;

int FUNC_3(int VAR_2, char *VAR_3)
{
 static char VAR_4[2+2+6];
 static char *VAR_5 = 0;
 int VAR_6;

 if (!VAR_5) {
  FUNC_2(VAR_4, 0, sizeof(VAR_4));
  VAR_4[0] |= VAR_1 | VAR_0;
  VAR_5 = &VAR_4[4];
 }

 FUNC_1(VAR_5, VAR_3, 6);

 VAR_6 = FUNC_0(VAR_2, VAR_4, sizeof(VAR_4));
 return VAR_6;
}
