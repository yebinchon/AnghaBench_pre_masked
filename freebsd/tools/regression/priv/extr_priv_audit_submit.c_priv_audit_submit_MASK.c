
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
typedef int record ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,int,int ) ;

void
FUNC_3(int VAR_4, int VAR_5, struct test *VAR_6)
{
 char VAR_7[VAR_3+10];
 int VAR_8;

 FUNC_1(VAR_7, sizeof(VAR_7));
 VAR_8 = FUNC_0(VAR_7, sizeof(VAR_7));
 if (VAR_4 && VAR_5)
  FUNC_2("priv_audit_submit(asroot, injail)", VAR_8, -1,
      VAR_1);
 if (VAR_4 && !VAR_5)
  FUNC_2("priv_audit_submit(asroot, !injail)", VAR_8, -1,
      VAR_0);
 if (!VAR_4 && VAR_5)
  FUNC_2("priv_audit_submit(!asroot, injail)", VAR_8, -1,
      VAR_1);
 if (!VAR_4 && !VAR_5)
  FUNC_2("priv_audit_submit(!asroot, !injail)", VAR_8, -1,
      VAR_2);
}
