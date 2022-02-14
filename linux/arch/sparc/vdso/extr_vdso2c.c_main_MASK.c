
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (void*,size_t,void*,size_t,int *,char*) ;
 int FUNC_4 (char*,void**,size_t*,int ) ;
 int FUNC_5 (void*,size_t) ;
 char* VAR_1 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;

int FUNC_12(int VAR_2, char **VAR_3)
{
 size_t VAR_4, VAR_5;
 void *VAR_6, *VAR_7;
 FILE *VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11;

 if (VAR_2 != 4) {
  FUNC_6("Usage: vdso2c RAW_INPUT STRIPPED_INPUT OUTPUT\n");
  return 1;
 }





 VAR_9 = FUNC_9(VAR_3[3]);
 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11 >= 3 && !FUNC_8(VAR_9 + VAR_11 - 3, ".so")) {
  VAR_9 = ((void*)0);
 } else {
  VAR_10 = FUNC_11(VAR_9, '/');
  if (VAR_10)
   VAR_9 = VAR_10 + 1;
  VAR_10 = FUNC_7(VAR_9, '.');
  if (VAR_10)
   *VAR_10 = '\0';
  for (VAR_10 = VAR_9; *VAR_10; VAR_10++)
   if (*VAR_10 == '-')
    *VAR_10 = '_';
 }

 FUNC_4(VAR_3[1], &VAR_6, &VAR_4, VAR_0);
 FUNC_4(VAR_3[2], &VAR_7, &VAR_5, VAR_0);

 VAR_1 = VAR_3[3];
 VAR_8 = FUNC_2(VAR_1, "w");
 if (!VAR_8)
  FUNC_0(1, "%s", VAR_3[2]);

 FUNC_3(VAR_6, VAR_4, VAR_7, VAR_5, VAR_8, VAR_9);

 FUNC_5(VAR_6, VAR_4);
 FUNC_5(VAR_7, VAR_5);
 FUNC_1(VAR_8);

 return 0;
}
