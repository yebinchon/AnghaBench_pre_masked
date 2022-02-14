
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void const u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_7__ {int y; int x; } ;
struct ecrdsa_ctx {char* digest; int digest_len; int key_len; TYPE_3__ pub_key; TYPE_2__* curve; scalar_t__ key; int * _pubp; scalar_t__ algo_oid; int digest_oid; } ;
struct crypto_akcipher {int dummy; } ;
struct TYPE_5__ {int ndigits; } ;
struct TYPE_6__ {TYPE_1__ g; } ;


 TYPE_3__ FUNC_0 (int ,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ecrdsa_ctx* FUNC_1 (struct crypto_akcipher*) ;
 int FUNC_2 (int *,struct ecrdsa_ctx*,void const*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 void const* FUNC_4 (scalar_t__*,void const*) ;
 int FUNC_5 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_akcipher *VAR_8, const void *VAR_9,
         unsigned int VAR_10)
{
 struct ecrdsa_ctx *VAR_11 = FUNC_1(VAR_8);
 unsigned int VAR_12;
 u32 VAR_13, VAR_14;
 u8 *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_2(&VAR_7, VAR_11, VAR_9, VAR_10);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_15 = FUNC_4(&VAR_14,
     FUNC_4(&VAR_13, (u8 *)VAR_9 + VAR_10));

 if (VAR_13 == VAR_4) {
  VAR_11->digest = "streebog256";
  VAR_11->digest_oid = VAR_2;
  VAR_11->digest_len = 256 / 8;
 } else if (VAR_13 == VAR_5) {
  VAR_11->digest = "streebog512";
  VAR_11->digest_oid = VAR_3;
  VAR_11->digest_len = 512 / 8;
 } else
  return -VAR_1;
 VAR_11->algo_oid = VAR_13;


 VAR_16 = FUNC_2(&VAR_6, VAR_11, VAR_15, VAR_14);
 if (VAR_16 < 0)
  return VAR_16;




 if (!VAR_11->curve ||
     VAR_11->curve->g.ndigits * sizeof(u64) != VAR_11->digest_len)
  return -VAR_1;




 if ((VAR_11->key_len != (2 * 256 / 8) &&
      VAR_11->key_len != (2 * 512 / 8)) ||
     VAR_11->key_len != VAR_11->curve->g.ndigits * sizeof(u64) * 2)
  return -VAR_1;

 VAR_12 = VAR_11->key_len / sizeof(u64) / 2;
 VAR_11->pub_key = FUNC_0(VAR_11->_pubp[0], VAR_11->_pubp[1], VAR_12);
 FUNC_5(VAR_11->pub_key.x, VAR_11->key, VAR_12);
 FUNC_5(VAR_11->pub_key.y, VAR_11->key + VAR_12 * sizeof(u64),
        VAR_12);

 if (FUNC_3(VAR_11->curve, &VAR_11->pub_key))
  return -VAR_0;

 return 0;
}
