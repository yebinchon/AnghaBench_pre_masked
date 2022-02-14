
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct poly1305_desc_ctx {unsigned int buflen; int const* buf; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct shash_desc*,int const*,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int const*,int const*,unsigned int) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 unsigned int FUNC_7 (struct poly1305_desc_ctx*,int const*,unsigned int) ;
 struct poly1305_desc_ctx* FUNC_8 (struct shash_desc*) ;
 scalar_t__ FUNC_9 (unsigned int) ;

__attribute__((used)) static int FUNC_10(struct shash_desc *VAR_1,
    const u8 *VAR_2, unsigned int VAR_3)
{
 struct poly1305_desc_ctx *VAR_4 = FUNC_8(VAR_1);
 unsigned int VAR_5;


 if (VAR_3 <= 288 || !FUNC_1())
  return FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_2();

 if (FUNC_9(VAR_4->buflen)) {
  VAR_5 = FUNC_6(VAR_3, VAR_0 - VAR_4->buflen);
  FUNC_5(VAR_4->buf + VAR_4->buflen, VAR_2, VAR_5);
  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;
  VAR_4->buflen += VAR_5;

  if (VAR_4->buflen == VAR_0) {
   FUNC_7(VAR_4, VAR_4->buf,
          VAR_0);
   VAR_4->buflen = 0;
  }
 }

 if (FUNC_4(VAR_3 >= VAR_0)) {
  VAR_5 = FUNC_7(VAR_4, VAR_2, VAR_3);
  VAR_2 += VAR_3 - VAR_5;
  VAR_3 = VAR_5;
 }

 FUNC_3();

 if (FUNC_9(VAR_3)) {
  VAR_4->buflen = VAR_3;
  FUNC_5(VAR_4->buf, VAR_2, VAR_3);
 }

 return 0;
}
