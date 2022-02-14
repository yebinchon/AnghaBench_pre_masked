
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

char *FUNC_1(char *VAR_0) {
 char *VAR_1, *VAR_2, *VAR_3 = 0;

 for (VAR_2 = VAR_1 = VAR_0; *VAR_1; VAR_1++)
  if (*VAR_1 == '/' || *VAR_1 == '\\') {
   VAR_2 = VAR_1 + 1;
   VAR_3 = 0;
  } else if (*VAR_1 == '.')
   VAR_3 = VAR_1;
 VAR_1 = FUNC_0(VAR_2);
 if (VAR_3)
  VAR_1[VAR_3-VAR_2] = 0;
 return VAR_1;
}
