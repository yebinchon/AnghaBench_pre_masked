
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_destruct; } ;
struct crypto_skcipher {int dummy; } ;
struct alg_sock {struct af_alg_ctx* private; } ;
struct af_alg_ctx {unsigned int len; int wait; scalar_t__ enc; scalar_t__ merge; scalar_t__ more; int rcvused; scalar_t__ used; int tsgl_list; void* iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct alg_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (void*,int ,unsigned int) ;
 int VAR_2 ;
 int FUNC_6 (struct sock*,struct af_alg_ctx*,unsigned int) ;
 void* FUNC_7 (struct sock*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_3, struct sock *VAR_4)
{
 struct af_alg_ctx *VAR_5;
 struct alg_sock *VAR_6 = FUNC_1(VAR_4);
 struct crypto_skcipher *VAR_7 = VAR_3;
 unsigned int VAR_8 = sizeof(*VAR_5);

 VAR_5 = FUNC_7(VAR_4, VAR_8, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->iv = FUNC_7(VAR_4, FUNC_4(VAR_7),
          VAR_1);
 if (!VAR_5->iv) {
  FUNC_6(VAR_4, VAR_5, VAR_8);
  return -VAR_0;
 }

 FUNC_5(VAR_5->iv, 0, FUNC_4(VAR_7));

 FUNC_0(&VAR_5->tsgl_list);
 VAR_5->len = VAR_8;
 VAR_5->used = 0;
 FUNC_2(&VAR_5->rcvused, 0);
 VAR_5->more = 0;
 VAR_5->merge = 0;
 VAR_5->enc = 0;
 FUNC_3(&VAR_5->wait);

 VAR_6->private = VAR_5;

 VAR_4->sk_destruct = VAR_2;

 return 0;
}
