
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (long,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_6)
{
 static uid_t VAR_7 = -1;
 static int VAR_8 = -1;
 static long VAR_9;
 gid_t *VAR_10;


 if (VAR_2 != VAR_0 || (VAR_5 != (uid_t)-1 &&
     VAR_7 == (uid_t)-1 && (VAR_7 = FUNC_2()) != 0)) {
  FUNC_6("%s", VAR_6);
  return;
 }


 if (VAR_3 != (gid_t)-1 && VAR_8 == -1 &&
     VAR_7 == (uid_t)-1 && (VAR_7 = FUNC_2()) != 0) {
  VAR_9 = FUNC_5(VAR_1) + 1;
  if ((VAR_10 = FUNC_4(sizeof(gid_t) * VAR_9)) == ((void*)0))
   FUNC_0(1, "malloc");
  VAR_8 = FUNC_3(VAR_9, VAR_10);
  while (--VAR_8 >= 0 && VAR_3 != VAR_10[VAR_8]);
  FUNC_1(VAR_10);
  if (VAR_8 < 0) {
   FUNC_7("you are not a member of group %s", VAR_4);
   return;
  }
 }
 FUNC_6("%s", VAR_6);
}
