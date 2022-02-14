
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
 int VAR_1 ;
 int FUNC_0 (struct crypto_aead*,int ) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct ixp_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*,int ) ;
 scalar_t__ FUNC_4 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct crypto_authenc_keys*,int) ;

__attribute__((used)) static int FUNC_7(struct crypto_aead *VAR_2, const u8 *VAR_3,
   unsigned int VAR_4)
{
 struct ixp_ctx *VAR_5 = FUNC_2(VAR_2);
 struct crypto_authenc_keys VAR_6;

 if (FUNC_4(&VAR_6, VAR_3, VAR_4) != 0)
  goto badkey;

 if (VAR_6.authkeylen > sizeof(VAR_5->authkey))
  goto badkey;

 if (VAR_6.enckeylen > sizeof(VAR_5->enckey))
  goto badkey;

 FUNC_5(VAR_5->authkey, VAR_6.authkey, VAR_6.authkeylen);
 FUNC_5(VAR_5->enckey, VAR_6.enckey, VAR_6.enckeylen);
 VAR_5->authkey_len = VAR_6.authkeylen;
 VAR_5->enckey_len = VAR_6.enckeylen;

 FUNC_6(&VAR_6, sizeof(VAR_6));
 return FUNC_0(VAR_2, FUNC_1(VAR_2));
badkey:
 FUNC_3(VAR_2, VAR_0);
 FUNC_6(&VAR_6, sizeof(VAR_6));
 return -VAR_1;
}
