
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iproc_ctx_s {TYPE_1__* shash; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int result; } ;
struct TYPE_3__ {int tfm; } ;


 int FUNC_0 (struct ahash_request*) ;
 struct iproc_ctx_s* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct iproc_ctx_s*) ;

__attribute__((used)) static int FUNC_7(struct ahash_request *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_2(VAR_0);
 struct iproc_ctx_s *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (FUNC_6(VAR_2)) {





  VAR_3 = FUNC_4(VAR_2->shash, VAR_0->result);


  FUNC_3(VAR_2->shash->tfm);
  FUNC_5(VAR_2->shash);

 } else {

  VAR_3 = FUNC_0(VAR_0);
 }

 return VAR_3;
}
