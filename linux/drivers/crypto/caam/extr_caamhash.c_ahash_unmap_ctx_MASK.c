
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct caam_hash_state {scalar_t__ ctx_dma; int ctx_dma_len; } ;
struct ahash_request {int dummy; } ;
struct ahash_edesc {int dummy; } ;


 struct caam_hash_state* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct device*,struct ahash_edesc*,struct ahash_request*,int) ;
 int FUNC_2 (struct device*,scalar_t__,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct device *VAR_0,
   struct ahash_edesc *VAR_1,
   struct ahash_request *VAR_2, int VAR_3, u32 VAR_4)
{
 struct caam_hash_state *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->ctx_dma) {
  FUNC_2(VAR_0, VAR_5->ctx_dma, VAR_5->ctx_dma_len, VAR_4);
  VAR_5->ctx_dma = 0;
 }
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
