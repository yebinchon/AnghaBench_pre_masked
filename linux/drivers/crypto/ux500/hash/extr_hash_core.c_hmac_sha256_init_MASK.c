
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oper_mode; int algorithm; int data_format; } ;
struct hash_ctx {int digestsize; TYPE_1__ config; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hash_ctx* FUNC_0 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_4)
{
 struct crypto_ahash *VAR_5 = FUNC_1(VAR_4);
 struct hash_ctx *VAR_6 = FUNC_0(VAR_5);

 VAR_6->config.data_format = VAR_1;
 VAR_6->config.algorithm = VAR_0;
 VAR_6->config.oper_mode = VAR_2;
 VAR_6->digestsize = VAR_3;

 return FUNC_2(VAR_4);
}
