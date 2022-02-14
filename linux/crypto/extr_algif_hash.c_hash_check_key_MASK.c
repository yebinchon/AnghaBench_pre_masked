
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct alg_sock {int refcnt; struct crypto_ahash* private; struct sock* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct alg_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_3)
{
 int VAR_4 = 0;
 struct sock *VAR_5;
 struct alg_sock *VAR_6;
 struct crypto_ahash *VAR_7;
 struct sock *VAR_8 = VAR_3->sk;
 struct alg_sock *VAR_9 = FUNC_0(VAR_8);

 FUNC_2(VAR_8);
 if (VAR_9->refcnt)
  goto unlock_child;

 VAR_5 = VAR_9->parent;
 VAR_6 = FUNC_0(VAR_9->parent);
 VAR_7 = VAR_6->private;

 VAR_4 = -VAR_1;
 FUNC_3(VAR_5, VAR_2);
 if (FUNC_1(VAR_7) & VAR_0)
  goto unlock;

 if (!VAR_6->refcnt++)
  FUNC_5(VAR_5);

 VAR_9->refcnt = 1;
 FUNC_6(VAR_5);

 VAR_4 = 0;

unlock:
 FUNC_4(VAR_5);
unlock_child:
 FUNC_4(VAR_8);

 return VAR_4;
}
