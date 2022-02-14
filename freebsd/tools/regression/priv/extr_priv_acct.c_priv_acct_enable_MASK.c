
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int ) ;
 int VAR_1 ;

void
FUNC_2(int VAR_2, int VAR_3, struct test *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_2 && VAR_3)
  FUNC_1("priv_acct_enable(root, jail)", VAR_5, -1, VAR_0);
 if (VAR_2 && !VAR_3)
  FUNC_1("priv_acct_enable(root, !jail)", VAR_5, 0, 0);
 if (!VAR_2 && VAR_3)
  FUNC_1("priv_acct_enable(!root, jail)", VAR_5, -1, VAR_0);
 if (!VAR_2 && !VAR_3)
  FUNC_1("priv_acct_enable(!root, !jail)", VAR_5, -1, VAR_0);
}
