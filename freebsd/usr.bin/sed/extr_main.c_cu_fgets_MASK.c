
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int string_ident ;
struct TYPE_2__ {char* s; struct TYPE_2__* next; int type; } ;
typedef int FILE ;




 int FUNC_0 () ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,int,int *) ;
 char* VAR_0 ;
 int * FUNC_5 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (char*,int,char*,char*) ;
 int FUNC_7 (int ,char*) ;

char *
FUNC_8(char *VAR_4, int VAR_5, int *VAR_6)
{
 static enum {ST_EOF, ST_FILE, ST_STRING} VAR_7 = ST_EOF;
 static FILE *VAR_8;
 static char *VAR_9;
 static char VAR_10[30];
 char *VAR_11;

again:
 switch (VAR_7) {
 case ST_EOF:
  if (VAR_3 == ((void*)0)) {
   if (VAR_6 != ((void*)0))
    *VAR_6 = 0;
   return (((void*)0));
  }
  VAR_1 = 0;
  switch (VAR_3->type) {
  case 129:
   if ((VAR_8 = FUNC_5(VAR_3->s, "r")) == ((void*)0))
    FUNC_1(1, "%s", VAR_3->s);
   VAR_0 = VAR_3->s;
   VAR_7 = ST_FILE;
   goto again;
  case 128:
   if (((size_t)FUNC_6(VAR_10,
       sizeof(VAR_10), "\"%s\"", VAR_3->s)) >=
       sizeof(VAR_10) - 1)
    (void)FUNC_7(VAR_10 +
        sizeof(VAR_10) - 6, " ...\"");
   VAR_0 = VAR_10;
   VAR_9 = VAR_3->s;
   VAR_7 = ST_STRING;
   goto again;
  default:
   FUNC_0();
  }
 case ST_FILE:
  if ((VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_8)) != ((void*)0)) {
   VAR_1++;
   if (VAR_1 == 1 && VAR_4[0] == '#' && VAR_4[1] == 'n')
    VAR_2 = 1;
   if (VAR_6 != ((void*)0))
    *VAR_6 = !FUNC_3(VAR_8);
   return (VAR_11);
  }
  VAR_3 = VAR_3->next;
  (void)FUNC_2(VAR_8);
  VAR_7 = ST_EOF;
  goto again;
 case ST_STRING:
  if (VAR_1 == 0 && VAR_9[0] == '#' && VAR_9[1] == 'n')
   VAR_2 = 1;
  VAR_11 = VAR_4;
  for (;;) {
   if (VAR_5-- <= 1) {
    *VAR_11 = '\0';
    VAR_1++;
    if (VAR_6 != ((void*)0))
     *VAR_6 = 1;
    return (VAR_4);
   }
   switch (*VAR_9) {
   case '\0':
    VAR_7 = ST_EOF;
    if (VAR_9 == VAR_3->s) {
     VAR_3 = VAR_3->next;
     goto again;
    } else {
     VAR_3 = VAR_3->next;
     *VAR_11 = '\0';
     VAR_1++;
     if (VAR_6 != ((void*)0))
      *VAR_6 = 0;
     return (VAR_4);
    }
   case '\n':
    *VAR_11++ = '\n';
    *VAR_11 = '\0';
    VAR_9++;
    VAR_1++;
    if (VAR_6 != ((void*)0))
     *VAR_6 = 0;
    return (VAR_4);
   default:
    *VAR_11++ = *VAR_9++;
   }
  }
 }

 return (((void*)0));
}
