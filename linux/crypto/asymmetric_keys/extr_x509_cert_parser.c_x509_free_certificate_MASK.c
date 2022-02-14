
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_certificate {struct x509_certificate* skid; struct x509_certificate* id; struct x509_certificate* subject; struct x509_certificate* issuer; int sig; int pub; } ;


 int FUNC_0 (struct x509_certificate*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct x509_certificate *VAR_0)
{
 if (VAR_0) {
  FUNC_1(VAR_0->pub);
  FUNC_2(VAR_0->sig);
  FUNC_0(VAR_0->issuer);
  FUNC_0(VAR_0->subject);
  FUNC_0(VAR_0->id);
  FUNC_0(VAR_0->skid);
  FUNC_0(VAR_0);
 }
}
