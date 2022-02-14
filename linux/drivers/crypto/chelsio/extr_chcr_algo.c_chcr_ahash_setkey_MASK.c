
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct hmac_ctx {int const* opad; int const* ipad; int base_hash; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_5__ {int tfm; } ;


 struct hmac_ctx* FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int const*,unsigned int) ;
 unsigned int FUNC_3 (TYPE_1__*,int const*,int const*,unsigned int) ;
 unsigned int FUNC_4 (struct crypto_ahash*) ;
 int FUNC_5 (struct crypto_ahash*) ;
 unsigned int FUNC_6 (TYPE_1__*,int const*,unsigned int,int const*) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (struct crypto_ahash*) ;
 int FUNC_9 (int const*,int const*,unsigned int) ;
 int FUNC_10 (int const*,int ,unsigned int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_11(struct crypto_ahash *VAR_7, const u8 *VAR_8,
        unsigned int VAR_9)
{
 struct hmac_ctx *VAR_10 = FUNC_0(FUNC_8(VAR_7));
 unsigned int VAR_11 = FUNC_4(VAR_7);
 unsigned int VAR_12 = FUNC_7(FUNC_5(VAR_7));
 unsigned int VAR_13, VAR_14 = 0, VAR_15;

 FUNC_1(VAR_6, VAR_10->base_hash);





 VAR_6->tfm = VAR_10->base_hash;
 if (VAR_9 > VAR_12) {
  VAR_14 = FUNC_6(VAR_6, VAR_8, VAR_9,
       VAR_10->ipad);
  if (VAR_14)
   goto out;
  VAR_9 = VAR_11;
 } else {
  FUNC_9(VAR_10->ipad, VAR_8, VAR_9);
 }
 FUNC_10(VAR_10->ipad + VAR_9, 0, VAR_12 - VAR_9);
 FUNC_9(VAR_10->opad, VAR_10->ipad, VAR_12);

 for (VAR_13 = 0; VAR_13 < VAR_12 / sizeof(int); VAR_13++) {
  *((unsigned int *)(&VAR_10->ipad) + VAR_13) ^= VAR_0;
  *((unsigned int *)(&VAR_10->opad) + VAR_13) ^= VAR_1;
 }

 VAR_15 = VAR_11;
 if (VAR_11 == VAR_2)
  VAR_15 = VAR_3;
 else if (VAR_11 == VAR_4)
  VAR_15 = VAR_5;
 VAR_14 = FUNC_3(VAR_6, VAR_10->ipad,
     VAR_10->ipad, VAR_11);
 if (VAR_14)
  goto out;
 FUNC_2(VAR_10->ipad, VAR_15);

 VAR_14 = FUNC_3(VAR_6, VAR_10->opad,
     VAR_10->opad, VAR_11);
 if (VAR_14)
  goto out;
 FUNC_2(VAR_10->opad, VAR_15);
out:
 return VAR_14;
}
