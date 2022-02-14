
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int tfm; } ;
struct ghash_desc_ctx {int key; } ;
struct ghash_ctx {int key; } ;


 int VAR_0 ;
 struct ghash_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ghash_desc_ctx*,int ,int) ;
 struct ghash_desc_ctx* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_1)
{
 struct ghash_desc_ctx *VAR_2 = FUNC_3(VAR_1);
 struct ghash_ctx *VAR_3 = FUNC_0(VAR_1->tfm);

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 FUNC_1(VAR_2->key, VAR_3->key, VAR_0);

 return 0;
}
