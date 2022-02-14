
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; scalar_t__ skipped; scalar_t__ failed; int (* f ) (TYPE_1__*) ;int returnNowBuf; struct TYPE_5__* next; } ;
typedef TYPE_1__ testingT ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

int FUNC_5(void)
{
 testingT *VAR_2;
 int VAR_3;
 const char *VAR_4;


 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, "warning: no tests to run\n");

  return 0;
 }

 VAR_3 = 0;
 for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
  FUNC_1("=== RUN   %s\n", VAR_2->name);
  if (FUNC_3(VAR_2->returnNowBuf) == 0)
   (*(VAR_2->f))(VAR_2);
  FUNC_2(VAR_2);
  VAR_4 = "PASS";
  if (VAR_2->failed) {
   VAR_4 = "FAIL";
   VAR_3 = 1;
  } else if (VAR_2->skipped)

   VAR_4 = "SKIP";
  FUNC_1("--- %s: %s (%s)\n", VAR_4, VAR_2->name, "TODO");
 }

 if (VAR_3) {
  FUNC_1("FAIL\n");
  return 1;
 }
 FUNC_1("PASS\n");
 return 0;
}
