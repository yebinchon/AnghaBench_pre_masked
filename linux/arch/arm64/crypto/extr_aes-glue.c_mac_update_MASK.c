
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct mac_tfm_ctx {int key; } ;
struct mac_desc_ctx {unsigned int len; scalar_t__ dg; } ;


 unsigned int VAR_0 ;
 struct mac_tfm_ctx* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int const*,unsigned int) ;
 int FUNC_2 (int *,int const*,int,scalar_t__,int,int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 struct mac_desc_ctx* FUNC_4 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_1, const u8 *VAR_2, unsigned int VAR_3)
{
 struct mac_tfm_ctx *VAR_4 = FUNC_0(VAR_1->tfm);
 struct mac_desc_ctx *VAR_5 = FUNC_4(VAR_1);

 while (VAR_3 > 0) {
  unsigned int VAR_6;

  if ((VAR_5->len % VAR_0) == 0 &&
      (VAR_5->len + VAR_3) > VAR_0) {

   int VAR_7 = VAR_3 / VAR_0;

   VAR_3 %= VAR_0;

   FUNC_2(&VAR_4->key, VAR_2, VAR_7, VAR_5->dg,
          (VAR_5->len != 0), (VAR_3 != 0));

   VAR_2 += VAR_7 * VAR_0;

   if (!VAR_3) {
    VAR_5->len = VAR_0;
    break;
   }
   VAR_5->len = 0;
  }

  VAR_6 = FUNC_3(VAR_3, VAR_0 - VAR_5->len);

  if (VAR_6 <= VAR_0) {
   FUNC_1(VAR_5->dg + VAR_5->len, VAR_2, VAR_6);
   VAR_5->len += VAR_6;
   VAR_3 -= VAR_6;
   VAR_2 += VAR_6;
  }
 }

 return 0;
}
