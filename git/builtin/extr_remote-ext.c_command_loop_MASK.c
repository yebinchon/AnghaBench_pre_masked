
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (char) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int FUNC_12(const char *VAR_4)
{
 char VAR_5[VAR_0];

 while (1) {
  size_t VAR_6;
  if (!FUNC_4(VAR_5, VAR_0 - 1, VAR_2)) {
   if (FUNC_2(VAR_2))
    FUNC_0("Command input error");
   FUNC_1(0);
  }

  VAR_6 = FUNC_10(VAR_5);
  while (VAR_6 > 0 && FUNC_6(VAR_5[VAR_6 - 1]))
   VAR_5[--VAR_6] = 0;

  if (!FUNC_9(VAR_5, "capabilities")) {
   FUNC_7("*connect\n\n");
   FUNC_3(VAR_3);
  } else if (!FUNC_11(VAR_5, "connect ", 8)) {
   FUNC_7("\n");
   FUNC_3(VAR_3);
   return FUNC_8(VAR_4, VAR_5 + 8);
  } else {
   FUNC_5(VAR_1, "Bad command");
   return 1;
  }
 }
}
