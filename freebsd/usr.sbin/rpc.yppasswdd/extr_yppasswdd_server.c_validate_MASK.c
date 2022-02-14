
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct x_passwd {char* pw_name; int pw_passwd; int pw_gecos; int pw_shell; scalar_t__ pw_gid; scalar_t__ pw_uid; } ;
struct passwd {scalar_t__ pw_uid; scalar_t__ pw_gid; int pw_name; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct passwd *VAR_1, struct x_passwd *VAR_2)
{

 if (VAR_2->pw_name[0] == '+' || VAR_2->pw_name[0] == '-') {
  FUNC_2("client tried to modify an NIS entry");
  return(1);
 }

 if ((uid_t)VAR_2->pw_uid != VAR_1->pw_uid) {
  FUNC_2("UID mismatch: client says user %s has UID %d",
    VAR_2->pw_name, VAR_2->pw_uid);
  FUNC_2("database says user %s has UID %d", VAR_1->pw_name,
    VAR_1->pw_uid);
  return(1);
 }

 if ((gid_t)VAR_2->pw_gid != VAR_1->pw_gid) {
  FUNC_2("GID mismatch: client says user %s has GID %d",
    VAR_2->pw_name, VAR_2->pw_gid);
  FUNC_2("database says user %s has GID %d", VAR_1->pw_name,
    VAR_1->pw_gid);
  return(1);
 }





 if (!VAR_0 && !FUNC_0(VAR_2->pw_shell)) {
  FUNC_2("%s is not a valid shell", VAR_2->pw_shell);
  return(1);
 }

 if (!VAR_0 && FUNC_1(VAR_2->pw_shell)) {
  FUNC_2("specified shell contains invalid characters");
  return(1);
 }

 if (FUNC_1(VAR_2->pw_gecos)) {
  FUNC_2("specified gecos field contains invalid characters");
  return(1);
 }

 if (FUNC_1(VAR_2->pw_passwd)) {
  FUNC_2("specified password contains invalid characters");
  return(1);
 }
 return(0);
}
