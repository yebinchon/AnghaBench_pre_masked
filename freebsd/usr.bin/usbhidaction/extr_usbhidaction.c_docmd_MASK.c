
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {char* action; char const* name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,size_t,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (char*,char**,int) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;

void
FUNC_7(struct command *VAR_2, int VAR_3, const char *VAR_4, int VAR_5, char **VAR_6)
{
 char VAR_7[VAR_0], *VAR_8, *VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12;

 for (VAR_8 = VAR_2->action, VAR_9 = VAR_7; *VAR_8 && VAR_9 < &VAR_7[VAR_0-1]; ) {
  if (*VAR_8 == '$') {
   VAR_8++;
   VAR_10 = &VAR_7[VAR_0-1] - VAR_9;
   if (FUNC_0(*VAR_8)) {
    VAR_11 = FUNC_5(VAR_8, &VAR_8, 10) - 1;
    if (VAR_11 >= 0 && VAR_11 < VAR_5) {
     FUNC_4(VAR_9, VAR_6[VAR_11], VAR_10);
     VAR_9 += FUNC_3(VAR_9);
    }
   } else if (*VAR_8 == 'V') {
    VAR_8++;
    FUNC_2(VAR_9, VAR_10, "%d", VAR_3);
    VAR_9 += FUNC_3(VAR_9);
   } else if (*VAR_8 == 'N') {
    VAR_8++;
    FUNC_4(VAR_9, VAR_2->name, VAR_10);
    VAR_9 += FUNC_3(VAR_9);
   } else if (*VAR_8 == 'H') {
    VAR_8++;
    FUNC_4(VAR_9, VAR_4, VAR_10);
    VAR_9 += FUNC_3(VAR_9);
   } else if (*VAR_8) {
    *VAR_9++ = *VAR_8++;
   }
  } else {
   *VAR_9++ = *VAR_8++;
  }
 }
 *VAR_9 = 0;

 if (VAR_1)
  FUNC_1("system '%s'\n", VAR_7);
 VAR_12 = FUNC_6(VAR_7);
 if (VAR_1 > 1 && VAR_12)
  FUNC_1("return code = 0x%x\n", VAR_12);
}
