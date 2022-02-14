
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_user_data; } ;
struct chtls_sock {struct sock* sk; } ;


 int VAR_0 ;
 int FUNC_0 (struct chtls_sock*,int ) ;
 int FUNC_1 (struct chtls_sock*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct chtls_sock *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;

 if (FUNC_2(VAR_2->sk_user_data &&
       !FUNC_0(VAR_1, VAR_0)))
  FUNC_1(VAR_1, VAR_0);
}
