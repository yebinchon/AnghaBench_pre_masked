
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_authenc_keys {int enckeylen; } ;
struct crypto_aead {int dummy; } ;
typedef int keys ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_aead*,int ) ;
 scalar_t__ FUNC_1 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_authenc_keys*,int) ;
 scalar_t__ FUNC_3 (struct crypto_aead*,int,struct crypto_authenc_keys*,int) ;
 scalar_t__ FUNC_4 (struct crypto_aead*,int,struct crypto_authenc_keys*,int) ;
 scalar_t__ FUNC_5 (int ,int*,int) ;

__attribute__((used)) static int FUNC_6(struct crypto_aead *VAR_3, const u8 *VAR_4,
          unsigned int VAR_5, int VAR_6)
{
 struct crypto_authenc_keys VAR_7;
 int VAR_8;

 if (FUNC_1(&VAR_7, VAR_4, VAR_5))
  goto bad_key;

 if (FUNC_5(VAR_7.enckeylen, &VAR_8, VAR_6))
  goto bad_key;

 if (FUNC_4(VAR_3, VAR_8, &VAR_7, VAR_6))
  goto error;

 if (FUNC_3(VAR_3, VAR_8, &VAR_7, VAR_6))
  goto error;

 FUNC_2(&VAR_7, sizeof(VAR_7));
 return 0;
bad_key:
 FUNC_0(VAR_3, VAR_0);
 FUNC_2(&VAR_7, sizeof(VAR_7));
 return -VAR_2;
error:
 FUNC_2(&VAR_7, sizeof(VAR_7));
 return -VAR_1;
}
