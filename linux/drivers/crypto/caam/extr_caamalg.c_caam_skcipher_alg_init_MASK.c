
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cra_ctxsize; int cra_flags; int cra_priority; int cra_module; } ;
struct skcipher_alg {int exit; int init; TYPE_1__ base; } ;
struct caam_skcipher_alg {struct skcipher_alg skcipher; } ;
struct caam_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct caam_skcipher_alg *VAR_6)
{
 struct skcipher_alg *VAR_7 = &VAR_6->skcipher;

 VAR_7->base.cra_module = VAR_3;
 VAR_7->base.cra_priority = VAR_0;
 VAR_7->base.cra_ctxsize = sizeof(struct caam_ctx);
 VAR_7->base.cra_flags = VAR_1 | VAR_2;

 VAR_7->init = VAR_5;
 VAR_7->exit = VAR_4;
}
