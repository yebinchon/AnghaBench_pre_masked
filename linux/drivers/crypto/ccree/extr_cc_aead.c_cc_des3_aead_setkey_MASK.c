
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_authenc_keys {int enckeylen; int enckey; } ;
struct crypto_aead {int dummy; } ;
typedef int keys ;


 int FUNC_0 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_1 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_authenc_keys*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct crypto_aead*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct crypto_aead *VAR_0, const u8 *VAR_1,
          unsigned int VAR_2)
{
 struct crypto_authenc_keys VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3, VAR_1, VAR_2);
 if (FUNC_3(VAR_4))
  return VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_3.enckey, VAR_3.enckeylen) ?:
       FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_2(&VAR_3, sizeof(VAR_3));
 return VAR_4;
}
