
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixp_ctx {int authkey_len; int enckey_len; int enckey; int authkey; } ;
struct crypto_authenc_keys {int authkeylen; int enckeylen; int enckey; int authkey; } ;
struct crypto_aead {int dummy; } ;
typedef int keys ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aead*,int ) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct ixp_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct crypto_authenc_keys*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct crypto_aead*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct crypto_aead *VAR_1, const u8 *VAR_2,
       unsigned int VAR_3)
{
 struct ixp_ctx *VAR_4 = FUNC_2(VAR_1);
 struct crypto_authenc_keys VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_5, VAR_2, VAR_3);
 if (FUNC_6(VAR_6))
  goto badkey;

 VAR_6 = -VAR_0;
 if (VAR_5.authkeylen > sizeof(VAR_4->authkey))
  goto badkey;

 VAR_6 = FUNC_7(VAR_1, VAR_5.enckey, VAR_5.enckeylen);
 if (VAR_6)
  goto badkey;

 FUNC_4(VAR_4->authkey, VAR_5.authkey, VAR_5.authkeylen);
 FUNC_4(VAR_4->enckey, VAR_5.enckey, VAR_5.enckeylen);
 VAR_4->authkey_len = VAR_5.authkeylen;
 VAR_4->enckey_len = VAR_5.enckeylen;

 FUNC_5(&VAR_5, sizeof(VAR_5));
 return FUNC_0(VAR_1, FUNC_1(VAR_1));
badkey:
 FUNC_5(&VAR_5, sizeof(VAR_5));
 return VAR_6;
}
