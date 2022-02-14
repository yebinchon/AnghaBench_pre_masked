
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x_master_passwd {int pw_fields; int pw_expire; int pw_shell; int pw_dir; int pw_gecos; int pw_class; int pw_change; int pw_gid; int pw_uid; int pw_passwd; int pw_name; } ;
struct passwd {int pw_fields; int pw_expire; int pw_shell; int pw_dir; int pw_gecos; int pw_class; int pw_change; int pw_gid; int pw_uid; int pw_passwd; int pw_name; } ;



__attribute__((used)) static void
FUNC_0(struct x_master_passwd *VAR_0, struct passwd *VAR_1)
{
 VAR_1->pw_name = VAR_0->pw_name;
 VAR_1->pw_passwd = VAR_0->pw_passwd;
 VAR_1->pw_uid = VAR_0->pw_uid;
 VAR_1->pw_gid = VAR_0->pw_gid;
 VAR_1->pw_change = VAR_0->pw_change;
 VAR_1->pw_class = VAR_0->pw_class;
 VAR_1->pw_gecos = VAR_0->pw_gecos;
 VAR_1->pw_dir = VAR_0->pw_dir;
 VAR_1->pw_shell = VAR_0->pw_shell;
 VAR_1->pw_expire = VAR_0->pw_expire;
 VAR_1->pw_fields = VAR_0->pw_fields;
}
