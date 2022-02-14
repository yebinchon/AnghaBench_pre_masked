
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_ahash {int dummy; } ;
struct ahash_request_priv {int flags; scalar_t__ ubuf; struct ahash_request* data; int complete; int result; } ;
struct TYPE_2__ {int flags; struct ahash_request* data; int complete; } ;
struct ahash_request {struct ahash_request_priv* priv; TYPE_1__ base; int result; } ;
typedef int crypto_completion_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned long) ;
 unsigned long FUNC_2 (struct crypto_ahash*) ;
 unsigned int FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 struct ahash_request_priv* FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_4, crypto_completion_t VAR_5)
{
 struct crypto_ahash *VAR_6 = FUNC_4(VAR_4);
 unsigned long VAR_7 = FUNC_2(VAR_6);
 unsigned int VAR_8 = FUNC_3(VAR_6);
 struct ahash_request_priv *VAR_9;

 VAR_9 = FUNC_5(sizeof(*VAR_9) + FUNC_1(VAR_8, VAR_7),
         (VAR_4->base.flags & VAR_0) ?
         VAR_3 : VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->result = VAR_4->result;
 VAR_9->complete = VAR_4->base.complete;
 VAR_9->data = VAR_4->base.data;
 VAR_9->flags = VAR_4->base.flags;







 VAR_4->result = FUNC_0((u8 *)VAR_9->ubuf, VAR_7 + 1);
 VAR_4->base.complete = VAR_5;
 VAR_4->base.data = VAR_4;
 VAR_4->priv = VAR_9;

 return 0;
}
