
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(int VAR_3, int VAR_4, struct test *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_0, VAR_2);
 if (VAR_7 < 0)
  VAR_6 = -1;
 else
  VAR_6 = 0;
 if (VAR_3 && VAR_4)
  FUNC_1("priv_io(asroot, injail)", VAR_6, -1, VAR_1);
 if (VAR_3 && !VAR_4)
  FUNC_1("priv_io(asroot, !injail)", VAR_6, 0, 0);
 if (!VAR_3 && VAR_4)
  FUNC_1("priv_io(!asroot, injail)", VAR_6, -1, VAR_1);
 if (!VAR_3 && !VAR_4)
  FUNC_1("priv_io(!asroot, !injail)", VAR_6, -1, VAR_1);
 if (VAR_7 != -1)
  FUNC_0(VAR_7);
}
