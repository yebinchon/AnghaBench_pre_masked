
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int mode_t ;
typedef int gid_t ;


 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int,char*,char const*,...) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

void
FUNC_5(const char *VAR_0, char *VAR_1, uid_t VAR_2, gid_t VAR_3, mode_t VAR_4)
{

 FUNC_4(VAR_1, "/tmp/priv.XXXXXXXXXXX");
 if (FUNC_3(VAR_1) == ((void*)0))
  FUNC_2(-1, "test %s: mkdtemp", VAR_0);

 if (FUNC_1(VAR_1, VAR_2, VAR_3) < 0)
  FUNC_2(-1, "test %s: chown(%s, %d, %d)", VAR_0, VAR_1, VAR_2,
      VAR_3);

 if (FUNC_0(VAR_1, VAR_4) < 0)
  FUNC_2(-1, "test %s: chmod(%s, 0%o)", VAR_0, VAR_1, VAR_4);
}
