
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_async_request {struct ahash_request* data; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;int flags; } ;
struct ahash_request {TYPE_1__ base; scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahash_request*,int) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct crypto_async_request *VAR_2, int VAR_3)
{
 struct ahash_request *VAR_4 = VAR_2->data;

 if (VAR_3 == -VAR_1) {
  FUNC_1(VAR_4);
  return;
 }

 VAR_4->base.flags &= ~VAR_0;

 VAR_3 = FUNC_0(VAR_4, VAR_3);
 if (VAR_4->priv)
  return;

 VAR_4->base.complete(&VAR_4->base, VAR_3);
}
