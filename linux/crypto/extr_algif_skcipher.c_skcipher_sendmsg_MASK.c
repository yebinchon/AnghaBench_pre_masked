
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct msghdr {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct alg_sock {struct crypto_skcipher* private; struct sock* parent; } ;


 int FUNC_0 (struct socket*,struct msghdr*,size_t,unsigned int) ;
 struct alg_sock* FUNC_1 (struct sock*) ;
 unsigned int FUNC_2 (struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_0, struct msghdr *VAR_1,
       size_t VAR_2)
{
 struct sock *VAR_3 = VAR_0->sk;
 struct alg_sock *VAR_4 = FUNC_1(VAR_3);
 struct sock *VAR_5 = VAR_4->parent;
 struct alg_sock *VAR_6 = FUNC_1(VAR_5);
 struct crypto_skcipher *VAR_7 = VAR_6->private;
 unsigned VAR_8 = FUNC_2(VAR_7);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_8);
}
