
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
struct sha1_hmac_ctx {int keylen; int key; scalar_t__ dbn; } ;


 struct sha1_hmac_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0)
{
    struct sha1_hmac_ctx *VAR_1 = FUNC_0(VAR_0->tfm);


    VAR_1->dbn = 0;
    FUNC_1(VAR_1->key, VAR_1->keylen);

    return 0;
}
