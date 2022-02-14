
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int mode_t ;
typedef int gid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*,...) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;

void
FUNC_6(const char *VAR_0, char *VAR_1, uid_t VAR_2, gid_t VAR_3, mode_t VAR_4)
{
 int VAR_5;

 FUNC_5(VAR_1, "/tmp/priv.XXXXXXXXXXX");
 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5 < 0)
  FUNC_1(-1, "test %s: mkstemp", VAR_0);

 if (FUNC_3(VAR_5, VAR_2, VAR_3) < 0)
  FUNC_1(-1, "test %s: fchown(%s, %d, %d)", VAR_0, VAR_1, VAR_2,
      VAR_3);

 if (FUNC_2(VAR_5, VAR_4) < 0)
  FUNC_1(-1, "test %s: chmod(%s, 0%o)", VAR_0, VAR_1, VAR_4);

 FUNC_0(VAR_5);
}
