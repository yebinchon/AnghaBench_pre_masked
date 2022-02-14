
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6()
{
 struct stat VAR_7;



 if (FUNC_3(VAR_0, &VAR_7) < VAR_3 && VAR_6 == VAR_1) {
  FUNC_4("%s", VAR_0);
  if (VAR_3 == FUNC_2(VAR_0, 0700)) {
   FUNC_5("%s: created", VAR_0);
   FUNC_3(VAR_0, &VAR_7);
  } else {
   FUNC_1(VAR_2, "%s: mkdir", VAR_0);
  }
 }
 if (!(VAR_7.st_mode & VAR_5))
  FUNC_1(VAR_2, "'%s' is not a directory, bailing out", VAR_0);
 if (FUNC_0(VAR_0) < VAR_3)
  FUNC_1(VAR_2, "cannot chdir(%s), bailing out", VAR_0);



 if (FUNC_3(VAR_4, &VAR_7) < VAR_3 && VAR_6 == VAR_1) {
  FUNC_4("%s", VAR_4);
  if (VAR_3 == FUNC_2(VAR_4, 0700)) {
   FUNC_5("%s: created", VAR_4);
   FUNC_3(VAR_4, &VAR_7);
  } else {
   FUNC_1(VAR_2, "%s: mkdir", VAR_4);
  }
 }
 if (!(VAR_7.st_mode & VAR_5))
  FUNC_1(VAR_2, "'%s' is not a directory, bailing out", VAR_4);
}
