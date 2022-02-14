
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
struct hmac_ctx {int hash; } ;


 int FUNC_0 (struct shash_desc*,void const*) ;
 struct hmac_ctx* FUNC_1 (int ) ;
 struct shash_desc* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_0, const void *VAR_1)
{
 struct shash_desc *VAR_2 = FUNC_2(VAR_0);
 struct hmac_ctx *VAR_3 = FUNC_1(VAR_0->tfm);

 VAR_2->tfm = VAR_3->hash;

 return FUNC_0(VAR_2, VAR_1);
}
