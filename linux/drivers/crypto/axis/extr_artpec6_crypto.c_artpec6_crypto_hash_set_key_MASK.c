
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct crypto_ahash {int base; } ;
struct artpec6_hashalg_context {size_t hmac_key_length; int hmac_key; int child_hash; } ;
struct TYPE_4__ {int tfm; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (TYPE_1__*,int const*,unsigned int,int ) ;
 size_t FUNC_3 (int ) ;
 struct artpec6_hashalg_context* FUNC_4 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (int ,int const*,unsigned int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (char*,unsigned int) ;

__attribute__((used)) static int
FUNC_8(struct crypto_ahash *VAR_2,
      const u8 *VAR_3, unsigned int VAR_4)
{
 struct artpec6_hashalg_context *VAR_5 = FUNC_4(&VAR_2->base);
 size_t VAR_6;
 int VAR_7;

 if (!VAR_4) {
  FUNC_7("Invalid length (%d) of HMAC key\n",
   VAR_4);
  return -VAR_0;
 }

 FUNC_6(VAR_5->hmac_key, 0, sizeof(VAR_5->hmac_key));

 VAR_6 = FUNC_3(FUNC_1(VAR_2));

 if (VAR_4 > VAR_6) {
  FUNC_0(VAR_1, VAR_5->child_hash);

  VAR_1->tfm = VAR_5->child_hash;

  VAR_5->hmac_key_length = VAR_6;
  VAR_7 = FUNC_2(VAR_1, VAR_3, VAR_4,
       VAR_5->hmac_key);
  if (VAR_7)
   return VAR_7;

 } else {
  FUNC_5(VAR_5->hmac_key, VAR_3, VAR_4);
  VAR_5->hmac_key_length = VAR_4;
 }

 return 0;
}
