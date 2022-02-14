
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sec_request {int dummy; } ;
struct sec_alg_tfm_ctx {TYPE_1__* queue; int backlog; int lock; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_4__ {int havesoftqueue; int queuelock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct sec_alg_tfm_ctx* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct crypto_skcipher*,int) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct crypto_skcipher *VAR_0)
{
 struct sec_alg_tfm_ctx *VAR_1 = FUNC_3(VAR_0);

 FUNC_5(&VAR_1->lock);
 FUNC_0(&VAR_1->backlog);
 FUNC_4(VAR_0, sizeof(struct sec_request));

 VAR_1->queue = FUNC_6();
 if (FUNC_1(VAR_1->queue))
  return FUNC_2(VAR_1->queue);

 FUNC_5(&VAR_1->queue->queuelock);
 VAR_1->queue->havesoftqueue = 0;

 return 0;
}
