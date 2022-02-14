
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char wint_t ;
typedef char wchar_t ;
struct TYPE_3__ {int cnt; char* name; int * fp; struct TYPE_3__* next; } ;
typedef TYPE_1__ LIST ;


 char VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int * FUNC_1 (char*,char*) ;
 char FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (char) ;
 int * VAR_3 ;

__attribute__((used)) static int
FUNC_5(char **VAR_4)
{
 LIST *VAR_5;
 int VAR_6;
 wint_t VAR_7;
 wchar_t VAR_8;
 char *VAR_9;
 LIST *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 for (VAR_6 = 0, VAR_10 = VAR_11 = ((void*)0); (VAR_9 = *VAR_4); ++VAR_4, ++VAR_6) {
  if ((VAR_5 = FUNC_3(sizeof(LIST))) == ((void*)0))
   FUNC_0(1, ((void*)0));
  if (VAR_9[0] == '-' && !VAR_9[1])
   VAR_5->fp = VAR_3;
  else if (!(VAR_5->fp = FUNC_1(VAR_9, "r")))
   FUNC_0(1, "%s", VAR_9);
  VAR_5->next = ((void*)0);
  VAR_5->cnt = VAR_6;
  VAR_5->name = VAR_9;
  if (!VAR_10)
   VAR_10 = VAR_11 = VAR_5;
  else {
   VAR_11->next = VAR_5;
   VAR_11 = VAR_5;
  }
 }

 for (VAR_12 = VAR_6; VAR_12;) {
  for (VAR_13 = 0, VAR_5 = VAR_10; VAR_5; VAR_5 = VAR_5->next) {
   if (!VAR_5->fp) {
    if (VAR_13 && VAR_5->cnt &&
        (VAR_8 = VAR_1[(VAR_5->cnt - 1) % VAR_2]))
     FUNC_4(VAR_8);
    continue;
   }
   if ((VAR_7 = FUNC_2(VAR_5->fp)) == VAR_0) {
    if (!--VAR_12)
     break;
    VAR_5->fp = ((void*)0);
    if (VAR_13 && VAR_5->cnt &&
        (VAR_8 = VAR_1[(VAR_5->cnt - 1) % VAR_2]))
     FUNC_4(VAR_8);
    continue;
   }




   if (!VAR_13) {
    VAR_13 = 1;
    for (VAR_6 = 0; VAR_6 < VAR_5->cnt; ++VAR_6)
     if ((VAR_8 = VAR_1[VAR_6 % VAR_2]))
      FUNC_4(VAR_8);
   } else if ((VAR_8 = VAR_1[(VAR_5->cnt - 1) % VAR_2]))
    FUNC_4(VAR_8);
   if (VAR_7 == '\n')
    continue;
   do {
    FUNC_4(VAR_7);
   } while ((VAR_7 = FUNC_2(VAR_5->fp)) != VAR_0 && VAR_7 != '\n');
  }
  if (VAR_13)
   FUNC_4('\n');
 }

 return (0);
}
