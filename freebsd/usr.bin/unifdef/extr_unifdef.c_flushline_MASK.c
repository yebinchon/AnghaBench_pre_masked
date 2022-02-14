
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 size_t FUNC_4 (char*,char*) ;
 scalar_t__ VAR_12 ;
 char* VAR_13 ;

__attribute__((used)) static void
FUNC_5(bool VAR_14)
{
 if (VAR_12)
  return;
 if (VAR_14 ^ VAR_5) {
  bool VAR_15 = VAR_13[FUNC_4(VAR_13, " \t\r\n")] == '\0';
  if (VAR_15 && VAR_4 && VAR_2 != VAR_3) {
   VAR_7 += 1;
   VAR_2 += 1;
  } else {
   if (VAR_9 && VAR_7 > 0)
    FUNC_3();
   if (FUNC_2(VAR_13, VAR_11) == VAR_0)
    FUNC_0();
   VAR_7 = 0;
   VAR_3 = VAR_2 = VAR_15 ? VAR_2 + 1 : 0;
  }
 } else {
  if (VAR_8 && FUNC_2(VAR_10, VAR_11) == VAR_0)
   FUNC_0();
  VAR_1 = 1;
  VAR_7 += 1;
  VAR_2 = 0;
 }
 if (VAR_6 && FUNC_1(VAR_11) == VAR_0)
  FUNC_0();
}
