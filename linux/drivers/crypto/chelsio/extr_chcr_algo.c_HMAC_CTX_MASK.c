
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hmac_ctx {int dummy; } ;
struct chcr_context {TYPE_1__* crypto_ctx; } ;
struct TYPE_2__ {struct hmac_ctx* hmacctx; } ;



__attribute__((used)) static inline struct hmac_ctx *FUNC_0(struct chcr_context *VAR_0)
{
 return VAR_0->crypto_ctx->hmacctx;
}
