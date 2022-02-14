
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char*,char const*,...) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__) ;

int
FUNC_11(const char *VAR_7, const char *VAR_8)
{
 int VAR_9;
 ssize_t VAR_10;



 if (FUNC_8(VAR_8, "-")) {




  VAR_9 = FUNC_3(VAR_7, VAR_1);
  if (VAR_9 < 0)
   FUNC_4("internal error, can't reopen %s", VAR_7);
  while ((VAR_10 = FUNC_5(VAR_9, VAR_3, VAR_4)) > 0)
   if (FUNC_10(VAR_2, VAR_3, VAR_10) != VAR_10)
    FUNC_4("write failed");
  FUNC_1(VAR_9);
  return 0;
 }
 if (FUNC_0(VAR_8) < 0) {
  FUNC_7("Can't backup %s, output is in %s: %s\n", VAR_8, VAR_7,
      FUNC_9(VAR_6));
  return -1;
 }




 if (FUNC_6(VAR_7, VAR_8) < 0) {
  if (VAR_6 != VAR_0 || FUNC_2(VAR_7, VAR_8) < 0) {
   FUNC_7("Can't create %s, output is in %s: %s\n",
       VAR_8, VAR_7, FUNC_9(VAR_6));
   return -1;
  }
 }
 return 0;
}
