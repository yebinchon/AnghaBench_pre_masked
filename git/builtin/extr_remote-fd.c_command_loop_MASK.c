
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int ) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (char*,char*) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static void FUNC_10(int VAR_3, int VAR_4)
{
 char VAR_5[VAR_0];

 while (1) {
  size_t VAR_6;
  if (!FUNC_4(VAR_5, VAR_0 - 1, VAR_1)) {
   if (FUNC_2(VAR_1))
    FUNC_1("Input error");
   return;
  }

  VAR_6 = FUNC_8(VAR_5);
  while (VAR_6 > 0 && FUNC_5(VAR_5[VAR_6 - 1]))
   VAR_5[--VAR_6] = 0;

  if (!FUNC_7(VAR_5, "capabilities")) {
   FUNC_6("*connect\n\n");
   FUNC_3(VAR_2);
  } else if (!FUNC_9(VAR_5, "connect ", 8)) {
   FUNC_6("\n");
   FUNC_3(VAR_2);
   if (FUNC_0(VAR_3,
    VAR_4))
    FUNC_1("Copying data between file descriptors failed");
   return;
  } else {
   FUNC_1("Bad command: %s", VAR_5);
  }
 }
}
