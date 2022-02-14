
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmac_tfm_ctx {int polykey; } ;
struct vmac_desc_ctx {int first_block_processed; scalar_t__ nonce_size; int polytmp; scalar_t__ partial_size; } ;
struct shash_desc {int tfm; } ;


 struct vmac_tfm_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct vmac_desc_ctx* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0)
{
 const struct vmac_tfm_ctx *VAR_1 = FUNC_0(VAR_0->tfm);
 struct vmac_desc_ctx *VAR_2 = FUNC_2(VAR_0);

 VAR_2->partial_size = 0;
 VAR_2->first_block_processed = 0;
 FUNC_1(VAR_2->polytmp, VAR_1->polykey, sizeof(VAR_2->polytmp));
 VAR_2->nonce_size = 0;
 return 0;
}
