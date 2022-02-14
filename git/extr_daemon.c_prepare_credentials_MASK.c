
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct group {int gr_gid; } ;
struct credentials {int gid; TYPE_1__* pass; } ;
struct TYPE_2__ {int pw_gid; } ;


 int FUNC_0 (char*,char const*) ;
 struct group* FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (char const*) ;

__attribute__((used)) static struct credentials *FUNC_3(const char *VAR_0,
    const char *VAR_1)
{
 static struct credentials VAR_2;

 VAR_2.pass = FUNC_2(VAR_0);
 if (!VAR_2.pass)
  FUNC_0("user not found - %s", VAR_0);

 if (!VAR_1)
  VAR_2.gid = VAR_2.pass->pw_gid;
 else {
  struct group *VAR_3 = FUNC_1(VAR_1);
  if (!VAR_3)
   FUNC_0("group not found - %s", VAR_1);

  VAR_2.gid = VAR_3->gr_gid;
 }

 return &VAR_2;
}
