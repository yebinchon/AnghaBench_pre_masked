
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_ctx {TYPE_1__* ops; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int) ;} ;
struct TYPE_2__ {int (* cleanup ) (struct crypto_async_request*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct crypto_async_request*) ;
 int FUNC_3 (struct crypto_async_request*,int) ;

__attribute__((used)) static inline void
FUNC_4(struct mv_cesa_ctx *VAR_0, struct crypto_async_request *VAR_1,
       int VAR_2)
{
 VAR_0->ops->cleanup(VAR_1);
 FUNC_0();
 VAR_1->complete(VAR_1, VAR_2);
 FUNC_1();
}
