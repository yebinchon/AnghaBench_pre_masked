
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct x509_certificate {TYPE_1__* pub; int id; struct x509_certificate* next; } ;
struct pkcs7_signed_info {TYPE_2__* sig; int index; struct x509_certificate* signer; } ;
struct pkcs7_message {struct x509_certificate* certs; } ;
struct TYPE_6__ {int data; int len; } ;
struct TYPE_5__ {TYPE_3__** auth_ids; int pkey_algo; } ;
struct TYPE_4__ {int pkey_algo; } ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (char*,int ,unsigned int) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pkcs7_message *VAR_0,
     struct pkcs7_signed_info *VAR_1)
{
 struct x509_certificate *VAR_2;
 unsigned VAR_3 = 1;

 FUNC_1("%u", VAR_1->index);

 for (VAR_2 = VAR_0->certs; VAR_2; VAR_2 = VAR_2->next, VAR_3++) {





  if (!FUNC_0(VAR_2->id, VAR_1->sig->auth_ids[0]))
   continue;
  FUNC_3("Sig %u: Found cert serial match X.509[%u]\n",
    VAR_1->index, VAR_3);

  if (FUNC_5(VAR_2->pub->pkey_algo, VAR_1->sig->pkey_algo) != 0) {
   FUNC_4("Sig %u: X.509 algo and PKCS#7 sig algo don't match\n",
    VAR_1->index);
   continue;
  }

  VAR_1->signer = VAR_2;
  return 0;
 }




 FUNC_2("Sig %u: Issuing X.509 cert not found (#%*phN)\n",
   VAR_1->index,
   VAR_1->sig->auth_ids[0]->len, VAR_1->sig->auth_ids[0]->data);
 return 0;
}
