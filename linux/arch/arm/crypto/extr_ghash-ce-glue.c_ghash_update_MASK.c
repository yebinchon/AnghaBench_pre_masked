
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int tfm; } ;
struct ghash_key {int dummy; } ;
struct ghash_desc_ctx {unsigned int count; int * buf; int digest; } ;


 unsigned int VAR_0 ;
 struct ghash_key* FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int const*,struct ghash_key*,int *) ;
 int FUNC_2 (int *,int const*,unsigned int) ;
 struct ghash_desc_ctx* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_1, const u8 *VAR_2,
   unsigned int VAR_3)
{
 struct ghash_desc_ctx *VAR_4 = FUNC_3(VAR_1);
 unsigned int VAR_5 = VAR_4->count % VAR_0;

 VAR_4->count += VAR_3;

 if ((VAR_5 + VAR_3) >= VAR_0) {
  struct ghash_key *VAR_6 = FUNC_0(VAR_1->tfm);
  int VAR_7;

  if (VAR_5) {
   int VAR_8 = VAR_0 - VAR_5;

   FUNC_2(VAR_4->buf + VAR_5, VAR_2, VAR_8);
   VAR_2 += VAR_8;
   VAR_3 -= VAR_8;
  }

  VAR_7 = VAR_3 / VAR_0;
  VAR_3 %= VAR_0;

  FUNC_1(VAR_7, VAR_4->digest, VAR_2, VAR_6,
    VAR_5 ? VAR_4->buf : ((void*)0));
  VAR_2 += VAR_7 * VAR_0;
  VAR_5 = 0;
 }
 if (VAR_3)
  FUNC_2(VAR_4->buf + VAR_5, VAR_2, VAR_3);
 return 0;
}
