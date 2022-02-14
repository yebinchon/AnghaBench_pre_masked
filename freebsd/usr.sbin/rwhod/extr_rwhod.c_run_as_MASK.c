
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; } ;
struct group {int gr_gid; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct group* FUNC_1 (int ) ;
 struct passwd* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

void
FUNC_4(uid_t *VAR_3, gid_t *VAR_4)
{
 struct passwd *VAR_5;
 struct group *VAR_6;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_0, "getpwnam(%s): %m", VAR_2);
  FUNC_0(1);
 }
 *VAR_3 = VAR_5->pw_uid;

 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_0, "getgrnam(%s): %m", VAR_1);
  FUNC_0(1);
 }
 *VAR_4 = VAR_6->gr_gid;
}
