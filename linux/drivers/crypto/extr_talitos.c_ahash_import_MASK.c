
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_export_state {unsigned int nbuf; int to_hash_later; int last; int first; int swinit; int buf; int hw_context; } ;
struct talitos_ctx {struct device* dev; } ;
struct talitos_ahash_req_ctx {unsigned int hw_context_size; unsigned int nbuf; int hw_context; int to_hash_later; int last; int first; int swinit; int * buf; } ;
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
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (struct talitos_ahash_req_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct ahash_request *VAR_4, const void *VAR_5)
{
 struct talitos_ahash_req_ctx *VAR_6 = FUNC_0(VAR_4);
 struct crypto_ahash *VAR_7 = FUNC_3(VAR_4);
 struct talitos_ctx *VAR_8 = FUNC_1(VAR_7);
 struct device *VAR_9 = VAR_8->dev;
 const struct talitos_export_state *VAR_10 = VAR_5;
 unsigned int VAR_11;
 dma_addr_t VAR_12;

 FUNC_7(VAR_6, 0, sizeof(*VAR_6));
 VAR_11 = (FUNC_2(VAR_7) <= VAR_1)
   ? VAR_2
   : VAR_3;
 VAR_6->hw_context_size = VAR_11;
 FUNC_6(VAR_6->hw_context, VAR_10->hw_context, VAR_11);
 FUNC_6(VAR_6->buf[0], VAR_10->buf, VAR_10->nbuf);
 VAR_6->swinit = VAR_10->swinit;
 VAR_6->first = VAR_10->first;
 VAR_6->last = VAR_10->last;
 VAR_6->to_hash_later = VAR_10->to_hash_later;
 VAR_6->nbuf = VAR_10->nbuf;

 VAR_12 = FUNC_4(VAR_9, VAR_6->hw_context, VAR_6->hw_context_size,
        VAR_0);
 FUNC_5(VAR_9, VAR_12, VAR_6->hw_context_size, VAR_0);

 return 0;
}
