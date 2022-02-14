
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_authenc_keys {scalar_t__ enckeylen; int enckey; } ;
struct crypto_aead {int dummy; } ;
typedef int keys ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_1 (struct crypto_aead*,int ) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct crypto_authenc_keys*,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct crypto_aead *VAR_3, const u8 *VAR_4,
       unsigned int VAR_5)
{
 struct crypto_authenc_keys VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(&VAR_6, VAR_4, VAR_5);
 if (FUNC_6(VAR_7))
  goto badkey;

 VAR_7 = -VAR_2;
 if (VAR_6.enckeylen != VAR_1)
  goto badkey;

 VAR_7 = FUNC_4(FUNC_2(VAR_3), VAR_6.enckey) ?:
       FUNC_0(VAR_3, VAR_4, VAR_5);

out:
 FUNC_5(&VAR_6, sizeof(VAR_6));
 return VAR_7;

badkey:
 FUNC_1(VAR_3, VAR_0);
 goto out;
}
