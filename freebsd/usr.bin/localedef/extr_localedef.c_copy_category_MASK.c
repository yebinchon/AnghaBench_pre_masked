
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int srcpath ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int,char*,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_10 (char*,char) ;
 char* FUNC_11 (int ) ;
 int VAR_6 ;

void
FUNC_12(char *VAR_7)
{
 char VAR_8[VAR_0];
 int VAR_9;

 (void) FUNC_9(VAR_8, sizeof (VAR_8), "%s/%s",
     VAR_7, FUNC_2());
 VAR_9 = FUNC_0(VAR_8, VAR_1);
 if ((VAR_9 != 0) && (FUNC_10(VAR_8, '/') == ((void*)0))) {

  (void) FUNC_9(VAR_8, sizeof (VAR_8),
      "/usr/lib/locale/%s/%s", VAR_7, FUNC_2());
  VAR_9 = FUNC_0(VAR_8, VAR_1);
 }

 if (VAR_9 != 0) {
  FUNC_5(VAR_4,"source locale data unavailable: %s", VAR_7);
  return;
 }

 if (VAR_6 > 1) {
  (void) FUNC_8("Copying category %s from %s: ",
      FUNC_2(), VAR_7);
  (void) FUNC_4(VAR_5);
 }


 if (!VAR_2)
  (void) FUNC_7(FUNC_3(FUNC_1()), 0755);

 if (FUNC_6(VAR_8, FUNC_1()) != 0) {
  FUNC_5(VAR_4,"unable to copy locale data: %s",
   FUNC_11(VAR_3));
  return;
 }
 if (VAR_6 > 1) {
  (void) FUNC_8("done.\n");
 }
}
