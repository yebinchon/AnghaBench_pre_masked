
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_request_ctx {int flags; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stm32_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int ) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_2)
{
 struct stm32_hash_request_ctx *VAR_3 = FUNC_0(VAR_2);

 VAR_3->flags |= VAR_0;

 return FUNC_1(VAR_2, VAR_1);
}
