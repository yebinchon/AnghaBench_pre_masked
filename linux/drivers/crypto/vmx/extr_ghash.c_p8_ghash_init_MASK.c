
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct p8_ghash_desc_ctx {int shash; scalar_t__ bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct p8_ghash_desc_ctx* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_1)
{
 struct p8_ghash_desc_ctx *VAR_2 = FUNC_1(VAR_1);

 VAR_2->bytes = 0;
 FUNC_0(VAR_2->shash, 0, VAR_0);
 return 0;
}
