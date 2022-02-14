
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcrypt_request {int dummy; } ;
struct padata_priv {int info; } ;
struct TYPE_2__ {int data; } ;
struct aead_request {TYPE_1__ base; } ;


 int FUNC_0 (int ,int ) ;
 struct pcrypt_request* FUNC_1 (struct padata_priv*) ;
 struct aead_request* FUNC_2 (struct pcrypt_request*) ;

__attribute__((used)) static void FUNC_3(struct padata_priv *VAR_0)
{
 struct pcrypt_request *VAR_1 = FUNC_1(VAR_0);
 struct aead_request *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->base.data, VAR_0->info);
}
