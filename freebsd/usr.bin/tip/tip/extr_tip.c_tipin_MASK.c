
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_11 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(void)
{
 int VAR_12 = 1;
 int VAR_13;
 char VAR_14;
 if (FUNC_1(FUNC_12(VAR_8))) {
  FUNC_10(1);
  FUNC_9();
 }

 while (1) {
  VAR_13 = FUNC_4();
  if (VAR_13 == VAR_0)
   return;
  VAR_13 = VAR_13 & VAR_9;
  if ((VAR_13 == FUNC_2(FUNC_12(VAR_2))) && VAR_12) {
   if (!VAR_11) {
    VAR_13 = FUNC_3();
    if (VAR_13 == VAR_0)
     return;
    if (VAR_13 == 0)
     continue;
   }
  } else if (!VAR_10 && VAR_13 == FUNC_2(FUNC_12(VAR_7))) {
   FUNC_8(FUNC_12(VAR_6), !FUNC_1(FUNC_12(VAR_6)));
   continue;
  } else if (VAR_13 == '\r') {
   VAR_12 = 1;
   VAR_14 = VAR_13;
   FUNC_6(VAR_3, &VAR_14, 1);
   if (FUNC_1(FUNC_12(VAR_5)))
    FUNC_7("\r\n");
   continue;
  } else if (!VAR_10 && VAR_13 == FUNC_2(FUNC_12(VAR_4)))
   VAR_13 = FUNC_4();
   if (VAR_13 == VAR_0)
    return;
   VAR_13 = VAR_13 & VAR_9;
  VAR_12 = FUNC_0(VAR_13, FUNC_12(VAR_1));
  if (FUNC_1(FUNC_12(VAR_6)) && FUNC_5(VAR_13))
   VAR_13 = FUNC_11(VAR_13);
  VAR_14 = VAR_13;
  FUNC_6(VAR_3, &VAR_14, 1);
  if (FUNC_1(FUNC_12(VAR_5)))
   FUNC_7("%c", VAR_14);
 }
}
