
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_akcipher {int dummy; } ;
struct ccp_rsa_req_ctx {int dummy; } ;
struct ccp_ctx {int complete; } ;


 int FUNC_0 (struct crypto_akcipher*,int) ;
 struct ccp_ctx* FUNC_1 (struct crypto_akcipher*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct crypto_akcipher *VAR_1)
{
 struct ccp_ctx *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, sizeof(struct ccp_rsa_req_ctx));
 VAR_2->complete = VAR_0;

 return 0;
}
