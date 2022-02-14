
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_async_request {struct ahash_request* data; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct ahash_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct ahash_request *VAR_3 = VAR_1->data;

 if (VAR_2 == -VAR_0) {
  FUNC_0(VAR_3);
  return;
 }
 FUNC_1(VAR_3, VAR_2);


 VAR_3->base.complete(&VAR_3->base, VAR_2);
}
