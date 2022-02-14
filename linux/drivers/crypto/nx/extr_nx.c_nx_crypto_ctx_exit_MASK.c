
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_crypto_ctx {int * out_sg; int * in_sg; int * csbcpb_aead; int * csbcpb; int kmem; } ;
struct crypto_tfm {int dummy; } ;


 struct nx_crypto_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct nx_crypto_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->kmem);
 VAR_1->csbcpb = ((void*)0);
 VAR_1->csbcpb_aead = ((void*)0);
 VAR_1->in_sg = ((void*)0);
 VAR_1->out_sg = ((void*)0);
}
