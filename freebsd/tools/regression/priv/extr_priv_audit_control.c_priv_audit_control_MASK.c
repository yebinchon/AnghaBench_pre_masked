
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
typedef int policy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,long*,int) ;
 int FUNC_1 (char*,int,int,int ) ;

void
FUNC_2(int VAR_3, int VAR_4, struct test *VAR_5)
{
 long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, &VAR_6, sizeof(VAR_6));
 if (VAR_3 && VAR_4)
  FUNC_1("priv_audit_control(asroot, injail)", VAR_7, -1,
      VAR_1);
 if (VAR_3 && !VAR_4)
  FUNC_1("priv_audit_control(asroot, !injail)", VAR_7, 0, 0);
 if (!VAR_3 && VAR_4)
  FUNC_1("priv_audit_control(!asroot, injail)", VAR_7, -1,
      VAR_1);
 if (!VAR_3 && !VAR_4)
  FUNC_1("priv_audit_control(!asroot, !injail)", VAR_7, -1,
      VAR_2);
}
