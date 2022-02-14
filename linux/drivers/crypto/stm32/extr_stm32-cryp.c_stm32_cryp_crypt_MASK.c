
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_cryp_reqctx {unsigned long mode; } ;
struct stm32_cryp_ctx {int dummy; } ;
struct stm32_cryp {int engine; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 struct stm32_cryp_reqctx* FUNC_0 (struct ablkcipher_request*) ;
 struct stm32_cryp_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (int ,struct ablkcipher_request*) ;
 struct stm32_cryp* FUNC_4 (struct stm32_cryp_ctx*) ;

__attribute__((used)) static int FUNC_5(struct ablkcipher_request *VAR_1, unsigned long VAR_2)
{
 struct stm32_cryp_ctx *VAR_3 = FUNC_1(
   FUNC_2(VAR_1));
 struct stm32_cryp_reqctx *VAR_4 = FUNC_0(VAR_1);
 struct stm32_cryp *VAR_5 = FUNC_4(VAR_3);

 if (!VAR_5)
  return -VAR_0;

 VAR_4->mode = VAR_2;

 return FUNC_3(VAR_5->engine, VAR_1);
}
