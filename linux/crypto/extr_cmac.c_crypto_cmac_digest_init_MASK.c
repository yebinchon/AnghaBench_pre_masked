
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct cmac_desc_ctx {scalar_t__ len; scalar_t__ ctx; } ;


 int * FUNC_0 (void*,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 struct cmac_desc_ctx* FUNC_4 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_0)
{
 unsigned long VAR_1 = FUNC_1(VAR_0->tfm);
 struct cmac_desc_ctx *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = FUNC_2(VAR_0->tfm);
 u8 *VAR_4 = FUNC_0((void *)VAR_2->ctx, VAR_1 + 1) + VAR_3;

 VAR_2->len = 0;
 FUNC_3(VAR_4, 0, VAR_3);

 return 0;
}
