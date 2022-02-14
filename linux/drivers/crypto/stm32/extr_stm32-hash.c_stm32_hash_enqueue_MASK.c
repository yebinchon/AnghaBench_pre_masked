
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_hash_request_ctx {unsigned int op; } ;
struct stm32_hash_dev {int dummy; } ;
struct stm32_hash_ctx {struct stm32_hash_dev* hdev; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; } ;


 struct stm32_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 struct stm32_hash_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct stm32_hash_dev*,struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0, unsigned int VAR_1)
{
 struct stm32_hash_request_ctx *VAR_2 = FUNC_0(VAR_0);
 struct stm32_hash_ctx *VAR_3 = FUNC_1(VAR_0->base.tfm);
 struct stm32_hash_dev *VAR_4 = VAR_3->hdev;

 VAR_2->op = VAR_1;

 return FUNC_2(VAR_4, VAR_0);
}
