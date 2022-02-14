
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_certificate {struct x509_certificate* next; } ;
struct pkcs7_signed_info {struct pkcs7_signed_info* next; } ;
struct pkcs7_message {struct pkcs7_signed_info* signed_infos; struct x509_certificate* crl; struct x509_certificate* certs; } ;


 int FUNC_0 (struct pkcs7_message*) ;
 int FUNC_1 (struct pkcs7_signed_info*) ;
 int FUNC_2 (struct x509_certificate*) ;

void FUNC_3(struct pkcs7_message *VAR_0)
{
 struct x509_certificate *VAR_1;
 struct pkcs7_signed_info *VAR_2;

 if (VAR_0) {
  while (VAR_0->certs) {
   VAR_1 = VAR_0->certs;
   VAR_0->certs = VAR_1->next;
   FUNC_2(VAR_1);
  }
  while (VAR_0->crl) {
   VAR_1 = VAR_0->crl;
   VAR_0->crl = VAR_1->next;
   FUNC_2(VAR_1);
  }
  while (VAR_0->signed_infos) {
   VAR_2 = VAR_0->signed_infos;
   VAR_0->signed_infos = VAR_2->next;
   FUNC_1(VAR_2);
  }
  FUNC_0(VAR_0);
 }
}
