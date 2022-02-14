
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct crypto_shash {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_6__ {unsigned int key_len; int* key; int* ipad; int* opad; unsigned int opad_count; int opad_sg; struct crypto_shash* hmac_tfm; } ;
struct TYPE_7__ {TYPE_1__ sha; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct TYPE_8__ {struct crypto_shash* tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,struct crypto_shash*) ;
 int FUNC_1 (struct crypto_ahash*,int ) ;
 int FUNC_2 (struct crypto_ahash*) ;
 unsigned int FUNC_3 (struct crypto_shash*) ;
 int FUNC_4 (TYPE_3__*,int const*,unsigned int,int*) ;
 unsigned int FUNC_5 (struct crypto_shash*) ;
 struct ccp_ctx* FUNC_6 (int ) ;
 int FUNC_7 (int*,int const*,unsigned int) ;
 int FUNC_8 (int*,int ,int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_9 (int *,int*,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct crypto_ahash *VAR_5, const u8 *VAR_6,
     unsigned int VAR_7)
{
 struct ccp_ctx *VAR_8 = FUNC_6(FUNC_2(VAR_5));
 struct crypto_shash *VAR_9 = VAR_8->u.sha.hmac_tfm;

 FUNC_0(VAR_4, VAR_9);

 unsigned int VAR_10 = FUNC_3(VAR_9);
 unsigned int VAR_11 = FUNC_5(VAR_9);
 int VAR_12, VAR_13;


 VAR_8->u.sha.key_len = 0;




 FUNC_8(VAR_8->u.sha.key, 0, sizeof(VAR_8->u.sha.key));

 if (VAR_7 > VAR_10) {

  VAR_4->tfm = VAR_9;

  VAR_13 = FUNC_4(VAR_4, VAR_6, VAR_7,
       VAR_8->u.sha.key);
  if (VAR_13) {
   FUNC_1(VAR_5, VAR_0);
   return -VAR_1;
  }

  VAR_7 = VAR_11;
 } else {
  FUNC_7(VAR_8->u.sha.key, VAR_6, VAR_7);
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_8->u.sha.ipad[VAR_12] = VAR_8->u.sha.key[VAR_12] ^ VAR_2;
  VAR_8->u.sha.opad[VAR_12] = VAR_8->u.sha.key[VAR_12] ^ VAR_3;
 }

 FUNC_9(&VAR_8->u.sha.opad_sg, VAR_8->u.sha.opad, VAR_10);
 VAR_8->u.sha.opad_count = VAR_10;

 VAR_8->u.sha.key_len = VAR_7;

 return 0;
}
