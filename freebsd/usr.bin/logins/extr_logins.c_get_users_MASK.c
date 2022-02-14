
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct passwd {int pw_expire; int pw_shell; int pw_dir; int pw_gecos; int pw_class; int pw_change; int pw_gid; int pw_uid; int pw_passwd; int pw_name; } ;
struct TYPE_4__ {scalar_t__ pw_selected; int pw_expire; void* pw_shell; void* pw_dir; void* pw_gecos; void* pw_class; int pw_change; int pw_gid; int pw_uid; void* pw_passwd; void* pw_name; } ;


 int FUNC_0 () ;
 struct passwd* FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct passwd *VAR_3;

 FUNC_2();
 for (;;) {
  if (VAR_0 == VAR_2) {
   VAR_2 += VAR_2 ? VAR_2 : 128;
   VAR_1 = FUNC_3(VAR_1, VAR_2 * sizeof *VAR_1);
  }
  if ((VAR_3 = FUNC_1()) == ((void*)0))
   break;
  VAR_1[VAR_0].pw_name = FUNC_4(VAR_3->pw_name);
  VAR_1[VAR_0].pw_passwd = FUNC_4(VAR_3->pw_passwd);
  VAR_1[VAR_0].pw_uid = VAR_3->pw_uid;
  VAR_1[VAR_0].pw_gid = VAR_3->pw_gid;
  VAR_1[VAR_0].pw_change = VAR_3->pw_change;
  VAR_1[VAR_0].pw_class = FUNC_4(VAR_3->pw_class);
  VAR_1[VAR_0].pw_gecos = FUNC_4(VAR_3->pw_gecos);
  VAR_1[VAR_0].pw_dir = FUNC_4(VAR_3->pw_dir);
  VAR_1[VAR_0].pw_shell = FUNC_4(VAR_3->pw_shell);
  VAR_1[VAR_0].pw_expire = VAR_3->pw_expire;
  VAR_1[VAR_0].pw_selected = 0;
  VAR_0++;
 }
 FUNC_0();
}
