
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct chtls_sock {int txq; } ;


 int FUNC_0 (struct chtls_sock*,int) ;
 struct chtls_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct chtls_sock *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_2(&VAR_1->txq) == 1)
  FUNC_0(VAR_1, 1);
}
