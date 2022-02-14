
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int dummy; } ;
typedef int namebuf ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (char*,struct message*) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (char*) ;
 int * FUNC_3 (struct message*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*,int) ;
 size_t FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,char) ;

char *
FUNC_10(struct message *VAR_1, int VAR_2)
{
 char VAR_3[VAR_0];
 char VAR_4[VAR_0];
 char *VAR_5, *VAR_6;
 FILE *VAR_7;
 int VAR_8 = 1;

 if ((VAR_5 = FUNC_0("from", VAR_1)) != ((void*)0))
  return (VAR_5);
 if (VAR_2 == 0 && (VAR_5 = FUNC_0("sender", VAR_1)) != ((void*)0))
  return (VAR_5);
 VAR_7 = FUNC_3(VAR_1);
 VAR_3[0] = '\0';
 if (FUNC_1(VAR_7, VAR_4, VAR_0) < 0)
  return (FUNC_2(VAR_3));
newname:
 for (VAR_5 = VAR_4; *VAR_5 != '\0' && *VAR_5 != ' '; VAR_5++)
  ;
 for (; *VAR_5 == ' ' || *VAR_5 == '\t'; VAR_5++)
  ;
 for (VAR_6 = &VAR_3[FUNC_7(VAR_3)];
     *VAR_5 != '\0' && *VAR_5 != ' ' && *VAR_5 != '\t' &&
     VAR_6 < VAR_3 + VAR_0 - 1;)
  *VAR_6++ = *VAR_5++;
 *VAR_6 = '\0';
 if (FUNC_1(VAR_7, VAR_4, VAR_0) < 0)
  return (FUNC_2(VAR_3));
 if ((VAR_5 = FUNC_5(VAR_4, 'F')) == ((void*)0))
  return (FUNC_2(VAR_3));
 if (FUNC_8(VAR_5, "From", 4) != 0)
  return (FUNC_2(VAR_3));
 while ((VAR_5 = FUNC_5(VAR_5, 'r')) != ((void*)0)) {
  if (FUNC_8(VAR_5, "remote", 6) == 0) {
   if ((VAR_5 = FUNC_5(VAR_5, 'f')) == ((void*)0))
    break;
   if (FUNC_8(VAR_5, "from", 4) != 0)
    break;
   if ((VAR_5 = FUNC_5(VAR_5, ' ')) == ((void*)0))
    break;
   VAR_5++;
   if (VAR_8) {
    VAR_6 = VAR_3;
    VAR_8 = 0;
   } else
    VAR_6 = FUNC_9(VAR_3, '!') + 1;
   FUNC_6(VAR_6, VAR_5, sizeof(VAR_3) - (VAR_6 - VAR_3) - 1);
   FUNC_4(VAR_3, "!");
   goto newname;
  }
  VAR_5++;
 }
 return (FUNC_2(VAR_3));
}
