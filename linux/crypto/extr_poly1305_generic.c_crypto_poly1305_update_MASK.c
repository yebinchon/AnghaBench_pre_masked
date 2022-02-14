
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct poly1305_desc_ctx {unsigned int buflen; int const* buf; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int const*,int const*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct poly1305_desc_ctx*,int const*,unsigned int,int) ;
 struct poly1305_desc_ctx* FUNC_4 (struct shash_desc*) ;
 scalar_t__ FUNC_5 (unsigned int) ;

int FUNC_6(struct shash_desc *VAR_1,
      const u8 *VAR_2, unsigned int VAR_3)
{
 struct poly1305_desc_ctx *VAR_4 = FUNC_4(VAR_1);
 unsigned int VAR_5;

 if (FUNC_5(VAR_4->buflen)) {
  VAR_5 = FUNC_2(VAR_3, VAR_0 - VAR_4->buflen);
  FUNC_1(VAR_4->buf + VAR_4->buflen, VAR_2, VAR_5);
  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;
  VAR_4->buflen += VAR_5;

  if (VAR_4->buflen == VAR_0) {
   FUNC_3(VAR_4, VAR_4->buf,
     VAR_0, 1 << 24);
   VAR_4->buflen = 0;
  }
 }

 if (FUNC_0(VAR_3 >= VAR_0)) {
  FUNC_3(VAR_4, VAR_2, VAR_3, 1 << 24);
  VAR_2 += VAR_3 - (VAR_3 % VAR_0);
  VAR_3 %= VAR_0;
 }

 if (FUNC_5(VAR_3)) {
  VAR_4->buflen = VAR_3;
  FUNC_1(VAR_4->buf, VAR_2, VAR_3);
 }

 return 0;
}
