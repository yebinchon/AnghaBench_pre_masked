
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct shash_desc {int dummy; } ;
struct ghash_desc_ctx {int bytes; int const* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ghash_desc_ctx*,int const*,unsigned int) ;
 int FUNC_1 (int const*,int const*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,int) ;
 struct ghash_desc_ctx* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_2,
    const u8 *VAR_3, unsigned int VAR_4)
{
 struct ghash_desc_ctx *VAR_5 = FUNC_3(VAR_2);
 unsigned int VAR_6;
 u8 *VAR_7 = VAR_5->buffer;

 if (VAR_5->bytes) {
  u8 *VAR_8 = VAR_7 + (VAR_1 - VAR_5->bytes);

  VAR_6 = FUNC_2(VAR_4, VAR_5->bytes);
  VAR_5->bytes -= VAR_6;
  VAR_4 -= VAR_6;

  FUNC_1(VAR_8, VAR_3, VAR_6);
  VAR_3 += VAR_6;

  if (!VAR_5->bytes) {
   FUNC_0(VAR_0, VAR_5, VAR_7,
       VAR_1);
  }
 }

 VAR_6 = VAR_4 & ~(VAR_1 - 1);
 if (VAR_6) {
  FUNC_0(VAR_0, VAR_5, VAR_3, VAR_6);
  VAR_3 += VAR_6;
  VAR_4 -= VAR_6;
 }

 if (VAR_4) {
  VAR_5->bytes = VAR_1 - VAR_4;
  FUNC_1(VAR_7, VAR_3, VAR_4);
 }

 return 0;
}
