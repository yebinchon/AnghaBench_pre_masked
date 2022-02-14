
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int gids ;
typedef int gid_t ;


 int FUNC_0 (int,char*,char const*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, uid_t VAR_1, gid_t VAR_2)
{
 gid_t VAR_3[1] = { VAR_2 };

 if (FUNC_1(VAR_2) < 0)
  FUNC_0(-1, "test %s: setegid(%d)", VAR_0, VAR_2);
 if (FUNC_2(sizeof(VAR_3)/sizeof(gid_t), VAR_3) < 0)
  FUNC_0(-1, "test %s: setgroups(%d)", VAR_0, VAR_2);
 if (FUNC_3(VAR_1) < 0)
  FUNC_0(-1, "test %s: seteuid(%d)", VAR_0, VAR_1);
}
