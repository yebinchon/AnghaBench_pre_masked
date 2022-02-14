
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ctx {struct device* dev; } ;
struct talitos_ahash_req_ctx {int first; unsigned int hw_context_size; int hw_context; scalar_t__ swinit; scalar_t__ nbuf; scalar_t__ buf_idx; } ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct talitos_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 struct talitos_ctx* FUNC_1 (struct crypto_ahash*) ;
 scalar_t__ FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct device*,int ,unsigned int,int ) ;
 int FUNC_5 (struct device*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_4)
{
 struct crypto_ahash *VAR_5 = FUNC_3(VAR_4);
 struct talitos_ctx *VAR_6 = FUNC_1(VAR_5);
 struct device *VAR_7 = VAR_6->dev;
 struct talitos_ahash_req_ctx *VAR_8 = FUNC_0(VAR_4);
 unsigned int VAR_9;
 dma_addr_t VAR_10;


 VAR_8->buf_idx = 0;
 VAR_8->nbuf = 0;
 VAR_8->first = 1;
 VAR_8->swinit = 0;
 VAR_9 = (FUNC_2(VAR_5) <= VAR_1)
   ? VAR_2
   : VAR_3;
 VAR_8->hw_context_size = VAR_9;

 VAR_10 = FUNC_4(VAR_7, VAR_8->hw_context, VAR_8->hw_context_size,
        VAR_0);
 FUNC_5(VAR_7, VAR_10, VAR_8->hw_context_size, VAR_0);

 return 0;
}
