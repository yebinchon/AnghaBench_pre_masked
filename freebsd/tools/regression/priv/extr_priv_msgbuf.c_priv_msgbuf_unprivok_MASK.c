
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int ,int *,size_t*,int *,int ) ;

void
FUNC_2(int VAR_1, int VAR_2, struct test *VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, ((void*)0), &VAR_4, ((void*)0), 0);
 if (VAR_1 && VAR_2)
  FUNC_0("priv_msgbuf_unprivok(asroot, injail)", VAR_5, 0, 0);
 if (VAR_1 && !VAR_2)
  FUNC_0("priv_msgbuf_unprivok(asroot, !injail)", VAR_5, 0, 0);
 if (!VAR_1 && VAR_2)
  FUNC_0("priv_msgbuf_unprivok(!asroot, injail)", VAR_5, 0, 0);
 if (!VAR_1 && !VAR_2)
  FUNC_0("priv_msgbuf_unprivok(!asroot, !injail)", VAR_5, 0, 0);
}
