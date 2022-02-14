
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uid_t ;
struct userconf {int min_uid; int max_uid; scalar_t__ reuse_uids; } ;
struct passwd {scalar_t__ pw_uid; } ;
struct bitmap {int dummy; } ;
typedef scalar_t__ intmax_t ;
struct TYPE_2__ {scalar_t__ checkduplicate; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct passwd* FUNC_1 () ;
 struct passwd* FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 struct bitmap FUNC_4 (int) ;
 int FUNC_5 (struct bitmap*) ;
 scalar_t__ FUNC_6 (struct bitmap*) ;
 scalar_t__ FUNC_7 (struct bitmap*) ;
 int FUNC_8 (struct bitmap*,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static uid_t
FUNC_10(struct userconf * VAR_3, intmax_t VAR_4)
{
 struct passwd *VAR_5;
 struct bitmap VAR_6;
 uid_t VAR_7 = (uid_t) - 1;




 if (VAR_4 >= 0) {
  VAR_7 = (uid_t) VAR_4;

  if ((VAR_5 = FUNC_2(VAR_7)) != ((void*)0) && VAR_2.checkduplicate)
   FUNC_9(VAR_0, "uid `%ju' has already been allocated",
       (uintmax_t)VAR_5->pw_uid);
  return (VAR_7);
 }





 if (VAR_3->min_uid >= VAR_3->max_uid) {

  VAR_3->min_uid = 1000;
  VAR_3->max_uid = 32000;
 }
 VAR_6 = FUNC_4(VAR_3->max_uid - VAR_3->min_uid + 1);




 FUNC_3();
 while ((VAR_5 = FUNC_1()) != ((void*)0))
  if (VAR_5->pw_uid >= (uid_t) VAR_3->min_uid && VAR_5->pw_uid <= (uid_t) VAR_3->max_uid)
   FUNC_8(&VAR_6, VAR_5->pw_uid - VAR_3->min_uid);
 FUNC_0();




 if (VAR_3->reuse_uids || (VAR_7 = (uid_t) (FUNC_7(&VAR_6) + VAR_3->min_uid + 1)) > VAR_3->max_uid)
  VAR_7 = (uid_t) (FUNC_6(&VAR_6) + VAR_3->min_uid);




 if (VAR_7 < VAR_3->min_uid || VAR_7 > VAR_3->max_uid)
  FUNC_9(VAR_1, "unable to allocate a new uid - range fully used");
 FUNC_5(&VAR_6);
 return (VAR_7);
}
