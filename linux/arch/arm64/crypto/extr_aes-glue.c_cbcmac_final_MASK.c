
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct mac_tfm_ctx {int key; } ;
struct mac_desc_ctx {scalar_t__ len; int dg; } ;


 int VAR_0 ;
 struct mac_tfm_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int ,int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 struct mac_desc_ctx* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_1, u8 *VAR_2)
{
 struct mac_tfm_ctx *VAR_3 = FUNC_0(VAR_1->tfm);
 struct mac_desc_ctx *VAR_4 = FUNC_3(VAR_1);

 FUNC_1(&VAR_3->key, ((void*)0), 0, VAR_4->dg, (VAR_4->len != 0), 0);

 FUNC_2(VAR_2, VAR_4->dg, VAR_0);

 return 0;
}
