
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char* printer; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct printer*,int*) ;
 int FUNC_2 (struct printer*) ;
 int FUNC_3 (struct printer*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct printer*,int*) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_3, VAR_4;
 struct printer VAR_5, *VAR_6 = &VAR_5;

 FUNC_3(VAR_6);
 FUNC_0("---->Getting printers .....");
 VAR_4 = FUNC_1(VAR_6, &VAR_3);
 if (VAR_3)
  goto errloop;

 while (VAR_4) {
  do {
   FUNC_0("---->Got printer %s", VAR_6->printer);

   FUNC_2(VAR_6);
   VAR_4 = FUNC_5(VAR_6, &VAR_3);
errloop:
   if (VAR_3)
    FUNC_6(VAR_0,
        "hrPrinterTable: printcap entry for %s "
        "has errors, skipping",
        VAR_6->printer ? VAR_6->printer : "<noname?>");
  } while (VAR_4 && VAR_3);
 }

 FUNC_4();
 VAR_1 = VAR_2;
}
