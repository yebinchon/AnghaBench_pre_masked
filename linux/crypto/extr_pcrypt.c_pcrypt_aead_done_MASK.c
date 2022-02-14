
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcrypt_request {int dummy; } ;
struct padata_priv {int info; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct TYPE_2__ {int flags; } ;
struct aead_request {TYPE_1__ base; } ;


 int VAR_0 ;
 struct pcrypt_request* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct padata_priv*) ;
 struct padata_priv* FUNC_2 (struct pcrypt_request*) ;

__attribute__((used)) static void FUNC_3(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct aead_request *VAR_3 = VAR_1->data;
 struct pcrypt_request *VAR_4 = FUNC_0(VAR_3);
 struct padata_priv *VAR_5 = FUNC_2(VAR_4);

 VAR_5->info = VAR_2;
 VAR_3->base.flags &= ~VAR_0;

 FUNC_1(VAR_5);
}
