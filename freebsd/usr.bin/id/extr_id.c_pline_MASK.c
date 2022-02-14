
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; char* pw_passwd; int pw_uid; int pw_gid; char* pw_class; int pw_shell; int pw_dir; int pw_gecos; scalar_t__ pw_expire; scalar_t__ pw_change; } ;


 int FUNC_0 (int,char*) ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,char*,int,int,char*,long,long,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct passwd *VAR_0)
{

 if (!VAR_0) {
  if ((VAR_0 = FUNC_1(FUNC_2())) == ((void*)0))
   FUNC_0(1, "getpwuid");
 }

 (void)FUNC_3("%s:%s:%d:%d:%s:%ld:%ld:%s:%s:%s\n", VAR_0->pw_name,
   VAR_0->pw_passwd, VAR_0->pw_uid, VAR_0->pw_gid, VAR_0->pw_class,
   (long)VAR_0->pw_change, (long)VAR_0->pw_expire, VAR_0->pw_gecos,
   VAR_0->pw_dir, VAR_0->pw_shell);
}
