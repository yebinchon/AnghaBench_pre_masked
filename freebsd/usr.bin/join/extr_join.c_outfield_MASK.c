
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* wint_t ;
typedef size_t u_long ;
struct TYPE_3__ {size_t fieldcnt; char** fields; } ;
typedef TYPE_1__ LINE ;


 char* VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void
FUNC_3(LINE *VAR_4, u_long VAR_5, int VAR_6)
{
 if (VAR_1++)
  (void)FUNC_2("%lc", (wint_t)*VAR_3);
 if (!FUNC_1(VAR_2)) {
  if (VAR_4->fieldcnt <= VAR_5 || VAR_6) {
   if (VAR_0 != ((void*)0))
    (void)FUNC_2("%s", VAR_0);
  } else {
   if (*VAR_4->fields[VAR_5] == '\0')
    return;
   (void)FUNC_2("%s", VAR_4->fields[VAR_5]);
  }
 }
 if (FUNC_1(VAR_2))
  FUNC_0(1, "stdout");
}
