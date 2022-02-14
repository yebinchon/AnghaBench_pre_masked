
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,size_t,int *) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (size_t,int ,int ) ;

char *
FUNC_3(char *VAR_2, size_t VAR_3)
{
 char *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3 + 1, VAR_0, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3 + 1, ((void*)0));
 if (VAR_5) {
  FUNC_1(VAR_4, VAR_0);
  return (((void*)0));
 }
 return VAR_4;
}
