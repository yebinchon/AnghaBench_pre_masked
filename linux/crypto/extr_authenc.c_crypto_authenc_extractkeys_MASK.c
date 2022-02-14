
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtattr {scalar_t__ rta_type; scalar_t__ rta_len; } ;
struct crypto_authenc_keys {unsigned int enckeylen; int authkeylen; int const* enckey; int const* authkey; } ;
struct crypto_authenc_key_param {int enckeylen; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_authenc_key_param* FUNC_1 (struct rtattr*) ;
 int FUNC_2 (struct rtattr*,unsigned int) ;
 int FUNC_3 (struct rtattr*) ;
 unsigned int FUNC_4 (int ) ;

int FUNC_5(struct crypto_authenc_keys *VAR_3, const u8 *VAR_4,
          unsigned int VAR_5)
{
 struct rtattr *VAR_6 = (struct rtattr *)VAR_4;
 struct crypto_authenc_key_param *VAR_7;

 if (!FUNC_2(VAR_6, VAR_5))
  return -VAR_1;
 if (VAR_6->rta_type != VAR_0)
  return -VAR_1;







 if (FUNC_3(VAR_6) != sizeof(*VAR_7))
  return -VAR_1;
 FUNC_0(sizeof(*VAR_7) % VAR_2);

 VAR_7 = FUNC_1(VAR_6);
 VAR_3->enckeylen = FUNC_4(VAR_7->enckeylen);

 VAR_4 += VAR_6->rta_len;
 VAR_5 -= VAR_6->rta_len;

 if (VAR_5 < VAR_3->enckeylen)
  return -VAR_1;

 VAR_3->authkeylen = VAR_5 - VAR_3->enckeylen;
 VAR_3->authkey = VAR_4;
 VAR_3->enckey = VAR_4 + VAR_3->authkeylen;

 return 0;
}
