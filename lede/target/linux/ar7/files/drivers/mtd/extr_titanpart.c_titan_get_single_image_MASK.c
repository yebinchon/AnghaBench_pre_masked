
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char**,char*) ;
 int FUNC_4 (char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(char *VAR_0, unsigned int *VAR_1,
    unsigned int *VAR_2)
{
 char *VAR_3;
 char *VAR_4;
 char *VAR_5;
 char VAR_6[30];
 char * VAR_7;

 if(!VAR_0 || !VAR_1 || !VAR_2)
  return -1;

 VAR_3 = FUNC_1(VAR_0);
 if(!VAR_3){
  FUNC_0("titan: %s variable not found.\n", VAR_0);
  return -1;
 }

 VAR_7 = VAR_6;

 FUNC_2(VAR_6, VAR_3, 30);
 VAR_6[29]=0;

 VAR_5=FUNC_3(&VAR_7, "\"");
 VAR_4=FUNC_3(&VAR_7, "\"");
 if(!VAR_5 || !VAR_4){
  FUNC_0("titan: invalid bootcfg format, %s.\n", VAR_6);
  return -1;
 }


 return FUNC_4(VAR_4, VAR_1, VAR_2);
}
