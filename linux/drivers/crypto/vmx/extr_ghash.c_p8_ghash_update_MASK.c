
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct p8_ghash_desc_ctx {int bytes; scalar_t__ buffer; } ;
struct p8_ghash_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct p8_ghash_ctx*,struct p8_ghash_desc_ctx*) ;
 int FUNC_1 (struct p8_ghash_ctx*,struct p8_ghash_desc_ctx*,int const*,unsigned int) ;
 int FUNC_2 (int ) ;
 struct p8_ghash_ctx* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int const*,unsigned int) ;
 struct p8_ghash_desc_ctx* FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_1,
      const u8 *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 struct p8_ghash_ctx *VAR_5 = FUNC_3(FUNC_2(VAR_1->tfm));
 struct p8_ghash_desc_ctx *VAR_6 = FUNC_5(VAR_1);

 if (VAR_6->bytes) {
  if (VAR_6->bytes + VAR_3 < VAR_0) {
   FUNC_4(VAR_6->buffer + VAR_6->bytes, VAR_2,
    VAR_3);
   VAR_6->bytes += VAR_3;
   return 0;
  }
  FUNC_4(VAR_6->buffer + VAR_6->bytes, VAR_2,
   VAR_0 - VAR_6->bytes);

  FUNC_0(VAR_5, VAR_6);

  VAR_2 += VAR_0 - VAR_6->bytes;
  VAR_3 -= VAR_0 - VAR_6->bytes;
  VAR_6->bytes = 0;
 }
 VAR_4 = VAR_3 & ~(VAR_0 - 1);
 if (VAR_4) {
  FUNC_1(VAR_5, VAR_6, VAR_2, VAR_4);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
 }
 if (VAR_3) {
  FUNC_4(VAR_6->buffer, VAR_2, VAR_3);
  VAR_6->bytes = VAR_3;
 }
 return 0;
}
