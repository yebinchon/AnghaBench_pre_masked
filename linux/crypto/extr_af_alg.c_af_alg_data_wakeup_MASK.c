
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int wait; } ;
struct sock {int sk_wq; } ;
struct alg_sock {struct af_alg_ctx* private; } ;
struct af_alg_ctx {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct alg_sock* FUNC_0 (struct sock*) ;
 struct socket_wq* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_5 (struct socket_wq*) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_5)
{
 struct alg_sock *VAR_6 = FUNC_0(VAR_5);
 struct af_alg_ctx *VAR_7 = VAR_6->private;
 struct socket_wq *VAR_8;

 if (!VAR_7->used)
  return;

 FUNC_2();
 VAR_8 = FUNC_1(VAR_5->sk_wq);
 if (FUNC_5(VAR_8))
  FUNC_6(&VAR_8->wait, VAR_0 |
          VAR_2 |
          VAR_1);
 FUNC_4(VAR_5, VAR_4, VAR_3);
 FUNC_3();
}
