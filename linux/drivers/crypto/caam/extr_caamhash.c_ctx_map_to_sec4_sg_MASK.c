
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sec4_sg_entry {int dummy; } ;
struct device {int dummy; } ;
struct caam_hash_state {int ctx_dma_len; scalar_t__ ctx_dma; int caam_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,int ,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,scalar_t__) ;
 int FUNC_3 (struct sec4_sg_entry*,scalar_t__,int,int ) ;

__attribute__((used)) static inline int FUNC_4(struct device *VAR_1,
         struct caam_hash_state *VAR_2, int VAR_3,
         struct sec4_sg_entry *VAR_4, u32 VAR_5)
{
 VAR_2->ctx_dma_len = VAR_3;
 VAR_2->ctx_dma = FUNC_1(VAR_1, VAR_2->caam_ctx, VAR_3, VAR_5);
 if (FUNC_2(VAR_1, VAR_2->ctx_dma)) {
  FUNC_0(VAR_1, "unable to map ctx\n");
  VAR_2->ctx_dma = 0;
  return -VAR_0;
 }

 FUNC_3(VAR_4, VAR_2->ctx_dma, VAR_3, 0);

 return 0;
}
