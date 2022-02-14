
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_export_state {int nbuf; int to_hash_later; int last; int first; int swinit; int buf; int hw_context; } ;
struct talitos_ctx {struct device* dev; } ;
struct talitos_ahash_req_ctx {size_t buf_idx; int nbuf; int to_hash_later; int last; int first; int swinit; int * buf; int hw_context_size; int hw_context; } ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct talitos_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 struct talitos_ctx* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_1, void *VAR_2)
{
 struct talitos_ahash_req_ctx *VAR_3 = FUNC_0(VAR_1);
 struct talitos_export_state *VAR_4 = VAR_2;
 struct crypto_ahash *VAR_5 = FUNC_2(VAR_1);
 struct talitos_ctx *VAR_6 = FUNC_1(VAR_5);
 struct device *VAR_7 = VAR_6->dev;
 dma_addr_t VAR_8;

 VAR_8 = FUNC_3(VAR_7, VAR_3->hw_context, VAR_3->hw_context_size,
        VAR_0);
 FUNC_4(VAR_7, VAR_8, VAR_3->hw_context_size, VAR_0);

 FUNC_5(VAR_4->hw_context, VAR_3->hw_context,
        VAR_3->hw_context_size);
 FUNC_5(VAR_4->buf, VAR_3->buf[VAR_3->buf_idx], VAR_3->nbuf);
 VAR_4->swinit = VAR_3->swinit;
 VAR_4->first = VAR_3->first;
 VAR_4->last = VAR_3->last;
 VAR_4->to_hash_later = VAR_3->to_hash_later;
 VAR_4->nbuf = VAR_3->nbuf;

 return 0;
}
