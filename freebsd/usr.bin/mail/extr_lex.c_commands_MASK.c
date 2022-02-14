
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (char*,...) ;
 char* VAR_11 ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int VAR_12 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 () ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int * FUNC_10 (char*) ;

void
FUNC_11(void)
{
 int VAR_16, VAR_17 = 0;
 char VAR_18[VAR_0];

 if (!VAR_13) {
  if (FUNC_6(VAR_2, VAR_6) != VAR_6)
   (void)FUNC_6(VAR_2, VAR_9);
  if (FUNC_6(VAR_1, VAR_6) != VAR_6)
   (void)FUNC_6(VAR_1, VAR_7);
  (void)FUNC_6(VAR_3, VAR_15);
  (void)FUNC_6(VAR_5, VAR_15);
  (void)FUNC_6(VAR_4, VAR_15);
 }
 FUNC_5();
 for (;;) {




  if (!VAR_13 && FUNC_10("interactive") != ((void*)0)) {
   if ((FUNC_10("autoinc") != ((void*)0)) && (FUNC_2() > 0))
    FUNC_3("New mail has arrived.\n");
   VAR_12 = 1;
   FUNC_3("%s", VAR_11);
  }
  (void)FUNC_1(VAR_14);
  FUNC_7();




  VAR_16 = 0;
  for (;;) {
   if (FUNC_4(VAR_8, &VAR_18[VAR_16], VAR_0 - VAR_16) < 0) {
    if (VAR_16 == 0)
     VAR_16 = -1;
    break;
   }
   if ((VAR_16 = FUNC_8(VAR_18)) == 0)
    break;
   VAR_16--;
   if (VAR_18[VAR_16] != '\\')
    break;
   VAR_18[VAR_16++] = ' ';
  }
  VAR_12 = 0;
  if (VAR_16 < 0) {

   if (VAR_10)
    break;
   if (VAR_13) {
    FUNC_9();
    continue;
   }
   if (FUNC_10("interactive") != ((void*)0) &&
       FUNC_10("ignoreeof") != ((void*)0) &&
       ++VAR_17 < 25) {
    FUNC_3("Use \"quit\" to quit.\n");
    continue;
   }
   break;
  }
  VAR_17 = 0;
  if (FUNC_0(VAR_18, 0))
   break;
 }
}
