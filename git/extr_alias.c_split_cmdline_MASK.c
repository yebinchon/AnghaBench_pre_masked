
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**,int) ;
 int FUNC_1 (char const**,int,int) ;
 int FUNC_2 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char) ;

int FUNC_4(char *VAR_2, const char ***VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0, VAR_7 = 16;
 char VAR_8 = 0;

 FUNC_0(*VAR_3, VAR_7);


 (*VAR_3)[VAR_6++] = VAR_2;
 for (VAR_4 = VAR_5 = 0; VAR_2[VAR_4];) {
  char VAR_9 = VAR_2[VAR_4];
  if (!VAR_8 && FUNC_3(VAR_9)) {
   VAR_2[VAR_5++] = 0;
   while (VAR_2[++VAR_4]
     && FUNC_3(VAR_2[VAR_4]))
    ;
   FUNC_1(*VAR_3, VAR_6 + 1, VAR_7);
   (*VAR_3)[VAR_6++] = VAR_2 + VAR_5;
  } else if (!VAR_8 && (VAR_9 == '\'' || VAR_9 == '"')) {
   VAR_8 = VAR_9;
   VAR_4++;
  } else if (VAR_9 == VAR_8) {
   VAR_8 = 0;
   VAR_4++;
  } else {
   if (VAR_9 == '\\' && VAR_8 != '\'') {
    VAR_4++;
    VAR_9 = VAR_2[VAR_4];
    if (!VAR_9) {
     FUNC_2(*VAR_3);
     return -VAR_0;
    }
   }
   VAR_2[VAR_5++] = VAR_9;
   VAR_4++;
  }
 }

 VAR_2[VAR_5] = 0;

 if (VAR_8) {
  FUNC_2(*VAR_3);
  return -VAR_1;
 }

 FUNC_1(*VAR_3, VAR_6 + 1, VAR_7);
 (*VAR_3)[VAR_6] = ((void*)0);

 return VAR_6;
}
