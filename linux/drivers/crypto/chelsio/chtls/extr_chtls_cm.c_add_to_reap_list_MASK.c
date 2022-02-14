
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct chtls_sock* sk_user_data; } ;
struct chtls_sock {struct sock* passive_reap_next; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct sock* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_3)
{
 struct chtls_sock *VAR_4 = VAR_3->sk_user_data;

 FUNC_2();
 FUNC_0(VAR_3);
 FUNC_4(VAR_3);

 FUNC_6(&VAR_1);
 VAR_4->passive_reap_next = VAR_0;
 VAR_0 = VAR_3;
 if (!VAR_4->passive_reap_next)
  FUNC_5(&VAR_2);
 FUNC_7(&VAR_1);
 FUNC_1(VAR_3);
 FUNC_3();
}
