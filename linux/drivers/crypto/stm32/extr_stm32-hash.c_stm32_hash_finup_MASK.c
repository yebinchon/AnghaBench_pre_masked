
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_request_ctx {int flags; } ;
struct stm32_hash_dev {scalar_t__ dma_lch; } ;
struct stm32_hash_ctx {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stm32_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 struct stm32_hash_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct ahash_request*) ;
 scalar_t__ FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct ahash_request*) ;
 struct stm32_hash_dev* FUNC_5 (struct stm32_hash_ctx*) ;
 int FUNC_6 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_7(struct ahash_request *VAR_4)
{
 struct stm32_hash_request_ctx *VAR_5 = FUNC_0(VAR_4);
 struct stm32_hash_ctx *VAR_6 = FUNC_1(FUNC_2(VAR_4));
 struct stm32_hash_dev *VAR_7 = FUNC_5(VAR_6);
 int VAR_8, VAR_9;

 VAR_5->flags |= VAR_3;

 if (VAR_7->dma_lch && FUNC_3(VAR_4))
  VAR_5->flags &= ~VAR_2;

 VAR_8 = FUNC_6(VAR_4);

 if (VAR_8 == -VAR_1 || VAR_8 == -VAR_0)
  return VAR_8;





 VAR_9 = FUNC_4(VAR_4);

 return VAR_8 ?: VAR_9;
}
