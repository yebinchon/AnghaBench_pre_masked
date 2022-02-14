
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chcr_hctx_per_wr {int dummy; } ;
struct chcr_ahash_req_ctx {int hctx_wr; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct chcr_ahash_req_ctx *VAR_0)
{
 FUNC_0(&VAR_0->hctx_wr, 0, sizeof(struct chcr_hctx_per_wr));
}
