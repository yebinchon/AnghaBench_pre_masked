
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct ghash_desc_ctx {int bytes; int * buffer; } ;
struct ghash_ctx {int shash; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int const*,unsigned int,int *) ;
 struct ghash_ctx* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int,int) ;
 struct ghash_desc_ctx* FUNC_6 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_7(struct shash_desc *VAR_1,
    const u8 *VAR_2, unsigned int VAR_3)
{
 struct ghash_desc_ctx *VAR_4 = FUNC_6(VAR_1);
 struct ghash_ctx *VAR_5 = FUNC_2(VAR_1->tfm);
 u8 *VAR_6 = VAR_4->buffer;

 FUNC_3();
 if (VAR_4->bytes) {
  int VAR_7 = FUNC_5(VAR_3, VAR_4->bytes);
  u8 *VAR_8 = VAR_6 + (VAR_0 - VAR_4->bytes);

  VAR_4->bytes -= VAR_7;
  VAR_3 -= VAR_7;

  while (VAR_7--)
   *VAR_8++ ^= *VAR_2++;

  if (!VAR_4->bytes)
   FUNC_0(VAR_6, &VAR_5->shash);
 }

 FUNC_1(VAR_6, VAR_2, VAR_3, &VAR_5->shash);
 FUNC_4();

 if (VAR_3 & 0xf) {
  VAR_2 += VAR_3 - (VAR_3 & 0xf);
  VAR_3 &= 0xf;
  VAR_4->bytes = VAR_0 - VAR_3;
  while (VAR_3--)
   *VAR_6++ ^= *VAR_2++;
 }

 return 0;
}
