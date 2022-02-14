
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcrypt_request {int dummy; } ;
struct padata_priv {int info; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct padata_priv*) ;
 struct pcrypt_request* FUNC_2 (struct padata_priv*) ;
 struct aead_request* FUNC_3 (struct pcrypt_request*) ;

__attribute__((used)) static void FUNC_4(struct padata_priv *VAR_1)
{
 struct pcrypt_request *VAR_2 = FUNC_2(VAR_1);
 struct aead_request *VAR_3 = FUNC_3(VAR_2);

 VAR_1->info = FUNC_0(VAR_3);

 if (VAR_1->info == -VAR_0)
  return;

 FUNC_1(VAR_1);
}
