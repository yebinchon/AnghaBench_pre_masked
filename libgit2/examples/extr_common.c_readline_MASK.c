
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(char **VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 char *VAR_7 = ((void*)0);

 VAR_1 = 0;

 while ((VAR_3 = FUNC_1()) != VAR_0) {
  if (VAR_5 == VAR_6) {
   VAR_6 += 16;

   if ((VAR_7 = FUNC_2(VAR_7, VAR_6)) == ((void*)0)) {
    VAR_4 = -1;
    goto error;
   }
  }

  if (VAR_3 == '\n')
   break;

  VAR_7[VAR_5++] = VAR_3;
 }

 if (VAR_1 != 0) {
  VAR_4 = -1;
  goto error;
 }

 VAR_7[VAR_5] = '\0';
 *VAR_2 = VAR_7;
 VAR_7 = ((void*)0);
 VAR_4 = VAR_5;
error:
 FUNC_0(VAR_7);
 return VAR_4;
}
