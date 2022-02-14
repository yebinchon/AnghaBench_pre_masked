
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct ghash_desc_ctx {int icv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ghash_desc_ctx*) ;
 int FUNC_1 (int *,int ,int ) ;
 struct ghash_desc_ctx* FUNC_2 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_3(struct shash_desc *VAR_1, u8 *VAR_2)
{
 struct ghash_desc_ctx *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  FUNC_1(VAR_2, VAR_3->icv, VAR_0);
 return VAR_4;
}
