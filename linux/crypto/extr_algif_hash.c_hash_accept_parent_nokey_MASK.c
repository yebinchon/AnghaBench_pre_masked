
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_destruct; } ;
struct hash_ctx {unsigned int len; int wait; int req; scalar_t__ more; int * result; } ;
struct crypto_ahash {int dummy; } ;
struct alg_sock {struct hash_ctx* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int *,struct crypto_ahash*) ;
 struct alg_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct crypto_ahash*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct hash_ctx* FUNC_5 (struct sock*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_5, struct sock *VAR_6)
{
 struct crypto_ahash *VAR_7 = VAR_5;
 struct alg_sock *VAR_8 = FUNC_2(VAR_6);
 struct hash_ctx *VAR_9;
 unsigned int VAR_10 = sizeof(*VAR_9) + FUNC_3(VAR_7);

 VAR_9 = FUNC_5(VAR_6, VAR_10, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->result = ((void*)0);
 VAR_9->len = VAR_10;
 VAR_9->more = 0;
 FUNC_4(&VAR_9->wait);

 VAR_8->private = VAR_9;

 FUNC_1(&VAR_9->req, VAR_7);
 FUNC_0(&VAR_9->req, VAR_0,
       VAR_3, &VAR_9->wait);

 VAR_6->sk_destruct = VAR_4;

 return 0;
}
