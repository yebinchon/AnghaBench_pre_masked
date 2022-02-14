
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {int rta_type; int rta_len; } ;
struct crypto_authenc_key_param {int enckeylen; } ;


 int VAR_0 ;
 struct crypto_authenc_key_param* FUNC_0 (struct rtattr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,void const*,unsigned int) ;

__attribute__((used)) static void FUNC_5(char *VAR_1, const void *VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
 struct crypto_authenc_key_param *VAR_5;
 struct rtattr *VAR_6;

 VAR_6 = (struct rtattr *)VAR_1;
 VAR_5 = FUNC_0(VAR_6);
 VAR_5->enckeylen = FUNC_3(VAR_3);
 VAR_6->rta_len = FUNC_1(sizeof(*VAR_5));
 VAR_6->rta_type = VAR_0;
 VAR_1 += FUNC_2(sizeof(*VAR_5));
 FUNC_4(VAR_1, VAR_2 + VAR_3, VAR_4);
 VAR_1 += VAR_4;
 FUNC_4(VAR_1, VAR_2, VAR_3);
}
