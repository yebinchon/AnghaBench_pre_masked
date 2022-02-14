
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_certificate {int seen; int blacklisted; struct x509_certificate* signer; struct public_key_signature* sig; int pub; int subject; int index; TYPE_1__* skid; struct x509_certificate* next; TYPE_1__* id; scalar_t__ unsupported_sig; scalar_t__ self_signed; int issuer; scalar_t__ unsupported_key; int raw_serial; int raw_serial_size; } ;
struct public_key_signature {struct asymmetric_key_id** auth_ids; } ;
struct pkcs7_signed_info {int blacklisted; int index; struct x509_certificate* signer; } ;
struct pkcs7_message {struct x509_certificate* certs; } ;
struct asymmetric_key_id {int data; int len; } ;
struct TYPE_2__ {int data; int len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct asymmetric_key_id*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (int ,struct public_key_signature*) ;

__attribute__((used)) static int FUNC_6(struct pkcs7_message *VAR_1,
      struct pkcs7_signed_info *VAR_2)
{
 struct public_key_signature *VAR_3;
 struct x509_certificate *VAR_4 = VAR_2->signer, *VAR_5;
 struct asymmetric_key_id *VAR_6;
 int VAR_7;

 FUNC_1("");

 for (VAR_5 = VAR_1->certs; VAR_5; VAR_5 = VAR_5->next)
  VAR_5->seen = 0;

 for (;;) {
  FUNC_3("verify %s: %*phN\n",
    VAR_4->subject,
    VAR_4->raw_serial_size, VAR_4->raw_serial);
  VAR_4->seen = 1;

  if (VAR_4->blacklisted) {



   VAR_2->blacklisted = 1;
   for (VAR_5 = VAR_2->signer; VAR_5 != VAR_4; VAR_5 = VAR_5->signer)
    VAR_5->blacklisted = 1;
   FUNC_3("- blacklisted\n");
   return 0;
  }

  if (VAR_4->unsupported_key)
   goto unsupported_crypto_in_x509;

  FUNC_3("- issuer %s\n", VAR_4->issuer);
  VAR_3 = VAR_4->sig;
  if (VAR_3->auth_ids[0])
   FUNC_3("- authkeyid.id %*phN\n",
     VAR_3->auth_ids[0]->len, VAR_3->auth_ids[0]->data);
  if (VAR_3->auth_ids[1])
   FUNC_3("- authkeyid.skid %*phN\n",
     VAR_3->auth_ids[1]->len, VAR_3->auth_ids[1]->data);

  if (VAR_4->self_signed) {





   if (VAR_4->unsupported_sig)
    goto unsupported_crypto_in_x509;
   VAR_4->signer = VAR_4;
   FUNC_3("- self-signed\n");
   return 0;
  }




  VAR_6 = VAR_3->auth_ids[0];
  if (VAR_6) {
   FUNC_3("- want %*phN\n", VAR_6->len, VAR_6->data);
   for (VAR_5 = VAR_1->certs; VAR_5; VAR_5 = VAR_5->next) {
    FUNC_3("- cmp [%u] %*phN\n",
      VAR_5->index, VAR_5->id->len, VAR_5->id->data);
    if (FUNC_0(VAR_5->id, VAR_6))
     goto found_issuer_check_skid;
   }
  } else if (VAR_3->auth_ids[1]) {
   VAR_6 = VAR_3->auth_ids[1];
   FUNC_3("- want %*phN\n", VAR_6->len, VAR_6->data);
   for (VAR_5 = VAR_1->certs; VAR_5; VAR_5 = VAR_5->next) {
    if (!VAR_5->skid)
     continue;
    FUNC_3("- cmp [%u] %*phN\n",
      VAR_5->index, VAR_5->skid->len, VAR_5->skid->data);
    if (FUNC_0(VAR_5->skid, VAR_6))
     goto found_issuer;
   }
  }


  FUNC_3("- top\n");
  return 0;

 found_issuer_check_skid:



  if (VAR_3->auth_ids[1] &&
      !FUNC_0(VAR_5->skid, VAR_3->auth_ids[1])) {
   FUNC_4("Sig %u: X.509 chain contains auth-skid nonmatch (%u->%u)\n",
    VAR_2->index, VAR_4->index, VAR_5->index);
   return -VAR_0;
  }
 found_issuer:
  FUNC_3("- subject %s\n", VAR_5->subject);
  if (VAR_5->seen) {
   FUNC_4("Sig %u: X.509 chain contains loop\n",
    VAR_2->index);
   return 0;
  }
  VAR_7 = FUNC_5(VAR_5->pub, VAR_4->sig);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_4->signer = VAR_5;
  if (VAR_4 == VAR_5) {
   FUNC_3("- self-signed\n");
   return 0;
  }
  VAR_4 = VAR_5;
  FUNC_2();
 }

unsupported_crypto_in_x509:






 return 0;
}
