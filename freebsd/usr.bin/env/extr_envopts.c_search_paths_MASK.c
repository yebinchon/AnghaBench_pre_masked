
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int candidate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char const*,char*) ;
 int VAR_4 ;
 int * FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char**,char*) ;

void
FUNC_7(char *VAR_5, char **VAR_6)
{
        char VAR_7[VAR_1];
        const char *VAR_8;
 char *VAR_9, *VAR_10;


 VAR_9 = *VAR_6;
 if (FUNC_4(VAR_9, '/') != ((void*)0))
  return;

 if (VAR_2 > 1) {
  FUNC_1(VAR_4, "#env Searching:\t'%s'\n", VAR_5);
  FUNC_1(VAR_4, "#env  for file:\t'%s'\n", VAR_9);
 }

 VAR_10 = ((void*)0);
        while ((VAR_8 = FUNC_6(&VAR_5, ":")) != ((void*)0)) {
                if (*VAR_8 == '\0')
                        VAR_8 = ".";
                if (FUNC_3(VAR_7, sizeof(VAR_7), "%s/%s", VAR_8,
                    VAR_9) >= (int)sizeof(VAR_7))
                        continue;
                if (FUNC_2(VAR_7)) {
                        VAR_10 = VAR_7;
   break;
                }
        }

 if (VAR_10 == ((void*)0)) {
  VAR_3 = VAR_0;
  FUNC_0(127, "%s", VAR_9);
 }
 *VAR_6 = FUNC_5(VAR_7);
}
