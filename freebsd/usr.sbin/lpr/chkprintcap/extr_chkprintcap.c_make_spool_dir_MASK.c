
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct printer {char* spool_dir; scalar_t__ daemon_user; int printer; } ;
struct group {scalar_t__ gr_gid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*) ;
 struct group* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (struct printer const*,struct stat*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_9(const struct printer *VAR_4)
{
 char *VAR_5 = VAR_4->spool_dir;
 struct group *VAR_6;
 struct stat VAR_7;

 if (FUNC_5(VAR_5, VAR_1 | VAR_2) < 0) {
  VAR_3++;
  FUNC_8("%s: mkdir %s", VAR_4->printer, VAR_5);
  return;
 }
 VAR_6 = FUNC_4("daemon");
 if (VAR_6 == ((void*)0))
  FUNC_3(++VAR_3, "cannot locate daemon group");

 if (FUNC_1(VAR_5, VAR_4->daemon_user, VAR_6->gr_gid) < 0) {
  ++VAR_3;
  FUNC_8("%s: cannot change ownership to %ld:%ld", VAR_5,
       (long)VAR_4->daemon_user, (long)VAR_6->gr_gid);
  return;
 }

 if (FUNC_0(VAR_5, VAR_0) < 0) {
  ++VAR_3;
  FUNC_8("%s: cannot change mode to %lo", VAR_5, (long)VAR_0);
  return;
 }
 if (FUNC_7(VAR_5, &VAR_7) < 0)
  FUNC_2(++VAR_3, "stat: %s", VAR_5);

 FUNC_6(VAR_4, &VAR_7);
}
