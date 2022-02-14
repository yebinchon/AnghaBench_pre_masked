
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int ) ;
 struct arglist* FUNC_1 (char*) ;
 int FUNC_2 (int,struct arglist*) ;
 int FUNC_3 (char*,int*,char**,char**) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, char **VAR_4)
{
 int VAR_5, VAR_6;
 char *VAR_7;
 struct arglist *VAR_8;

 VAR_5 = FUNC_3(VAR_3, &VAR_6, &VAR_7, VAR_4);
 if (VAR_5 != 0)
  return VAR_5;






 VAR_7 = FUNC_0(VAR_7, VAR_2);
 if (VAR_7 == ((void*)0)) {
  *VAR_4 = "vector_config failed to strdup string";
  return -VAR_1;
 }

 VAR_8 = FUNC_1(VAR_7);

 if (VAR_8 == ((void*)0)) {
  *VAR_4 = "vector_config failed to parse parameters";
  return -VAR_0;
 }

 FUNC_2(VAR_6, VAR_8);
 return 0;
}
