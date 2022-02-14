
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct p8_ghash_desc_ctx {int bytes; int shash; scalar_t__* buffer; } ;
struct p8_ghash_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct p8_ghash_ctx*,struct p8_ghash_desc_ctx*) ;
 int FUNC_1 (int ) ;
 struct p8_ghash_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 struct p8_ghash_desc_ctx* FUNC_4 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_1, u8 *VAR_2)
{
 int VAR_3;
 struct p8_ghash_ctx *VAR_4 = FUNC_2(FUNC_1(VAR_1->tfm));
 struct p8_ghash_desc_ctx *VAR_5 = FUNC_4(VAR_1);

 if (VAR_5->bytes) {
  for (VAR_3 = VAR_5->bytes; VAR_3 < VAR_0; VAR_3++)
   VAR_5->buffer[VAR_3] = 0;
  FUNC_0(VAR_4, VAR_5);
  VAR_5->bytes = 0;
 }
 FUNC_3(VAR_2, VAR_5->shash, VAR_0);
 return 0;
}
