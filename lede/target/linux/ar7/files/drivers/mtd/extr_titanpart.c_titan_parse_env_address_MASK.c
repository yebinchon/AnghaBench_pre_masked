
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,...) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int *,int ) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_0, unsigned int *VAR_1,
    unsigned int *VAR_2)
{
 char VAR_3[30];
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 char * VAR_7;

 VAR_4 = FUNC_1(VAR_0);
 if(!VAR_4){
  FUNC_0("titan: invalid env name, %s.\n", VAR_0);
  return -1;
 }
 FUNC_3(VAR_3, VAR_4, 30);
 VAR_3[29]=0;
 VAR_7 = VAR_3;

 VAR_5 = FUNC_4(&VAR_7, ",");
 VAR_6 = FUNC_4(&VAR_7, ",");
 if ((VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0))) {
  FUNC_0("titan: Couldn't tokenize %s start,end.\n", VAR_3);
  return -1;
 }

 *VAR_1 = (unsigned int) FUNC_2(VAR_5, ((void*)0), 0);
 *VAR_2 = (unsigned int) FUNC_2(VAR_6, ((void*)0), 0);
 if((!*VAR_1) || (!*VAR_2)) {
  FUNC_0("titan: Unable to convert :%s: :%s: into start,end values.\n",
    VAR_0, VAR_3);
  return -1;
 }
 *VAR_1 &= 0x0fffffff;
 *VAR_2 &= 0x0fffffff;
 return 0;
}
