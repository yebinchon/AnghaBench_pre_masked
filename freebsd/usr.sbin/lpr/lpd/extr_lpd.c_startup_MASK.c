
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char* printer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct printer*) ;
 int FUNC_1 (struct printer*,int*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct printer*,int*) ;
 int FUNC_6 (struct printer*) ;
 int FUNC_7 (int ,char*,char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 int VAR_3, VAR_4, VAR_5;
 struct printer VAR_6, *VAR_7 = &VAR_6;

 VAR_5 = FUNC_1(VAR_7, &VAR_4);
 if (VAR_4)
  goto errloop;
 while (VAR_5) {
  if (FUNC_0(VAR_7) <= 0) {
   goto next;
  }
  if (VAR_2)
   FUNC_7(VAR_0, "lpd startup: work for %s",
       VAR_7->printer);
  if ((VAR_3 = FUNC_2()) < 0) {
   FUNC_7(VAR_1, "lpd startup: cannot fork for %s",
       VAR_7->printer);
   FUNC_4(0);
  }
  if (VAR_3 == 0) {
   FUNC_3();
   FUNC_6(VAR_7);

  }
  do {
next:
   VAR_5 = FUNC_5(VAR_7, &VAR_4);
errloop:
   if (VAR_4)
    FUNC_7(VAR_1,
        "lpd startup: printcap entry for %s has errors, skipping",
        VAR_7->printer ? VAR_7->printer : "<noname?>");
  } while (VAR_5 && VAR_4);
 }
}
