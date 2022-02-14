
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char**,int ,int) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;

int
FUNC_4(char *VAR_2, char *VAR_3, char *VAR_4[])
{
 int VAR_5 = 0;
 size_t VAR_6;
 char *VAR_7;
 char **VAR_8 = &VAR_3;
 int VAR_9;

 FUNC_1(VAR_4, 0, VAR_0 * sizeof(void *));

 if (VAR_2 == ((void*)0)) {

  return 0;
 }

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 == 0) {

  return 0;
 }

 if (VAR_6 >= VAR_1) {

  VAR_6 = VAR_1-1;
 }

 FUNC_0(VAR_3, VAR_2, VAR_6);
 VAR_3[VAR_6] = '\0';

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_7 = FUNC_3(VAR_8, ":");
  if (VAR_7 == ((void*)0)) {
   break;
  }





  VAR_4[VAR_9] = VAR_7;
  VAR_5++;
 }

 return VAR_5;
}
