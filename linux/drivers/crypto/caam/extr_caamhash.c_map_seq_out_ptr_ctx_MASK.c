
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct caam_hash_state {int ctx_dma_len; scalar_t__ ctx_dma; int caam_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int,int ) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*,int ,int,int ) ;
 scalar_t__ FUNC_3 (struct device*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_4(u32 *VAR_2, struct device *VAR_3,
          struct caam_hash_state *VAR_4,
          int VAR_5)
{
 VAR_4->ctx_dma_len = VAR_5;
 VAR_4->ctx_dma = FUNC_2(VAR_3, VAR_4->caam_ctx,
     VAR_5, VAR_0);
 if (FUNC_3(VAR_3, VAR_4->ctx_dma)) {
  FUNC_1(VAR_3, "unable to map ctx\n");
  VAR_4->ctx_dma = 0;
  return -VAR_1;
 }

 FUNC_0(VAR_2, VAR_4->ctx_dma, VAR_5, 0);

 return 0;
}
