
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_certificate {struct x509_certificate* next; } ;
struct public_key_signature {int dummy; } ;
struct pkcs7_signed_info {int dummy; } ;
struct pkcs7_parse_context {unsigned long data; struct pkcs7_message* msg; TYPE_1__* sinfo; struct x509_certificate* certs; int * ppsinfo; struct x509_certificate** ppcerts; } ;
struct pkcs7_message {int signed_infos; } ;
struct TYPE_2__ {void* sig; } ;


 int VAR_0 ;
 struct pkcs7_message* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct pkcs7_parse_context*,void const*,size_t) ;
 int FUNC_2 (struct pkcs7_parse_context*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pkcs7_message*) ;
 int VAR_2 ;
 int FUNC_5 (struct pkcs7_message*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct x509_certificate*) ;

struct pkcs7_message *FUNC_8(const void *VAR_3, size_t VAR_4)
{
 struct pkcs7_parse_context *VAR_5;
 struct pkcs7_message *VAR_6 = FUNC_0(-VAR_0);
 int VAR_7;

 VAR_5 = FUNC_3(sizeof(struct pkcs7_parse_context), VAR_1);
 if (!VAR_5)
  goto out_no_ctx;
 VAR_5->msg = FUNC_3(sizeof(struct pkcs7_message), VAR_1);
 if (!VAR_5->msg)
  goto out_no_msg;
 VAR_5->sinfo = FUNC_3(sizeof(struct pkcs7_signed_info), VAR_1);
 if (!VAR_5->sinfo)
  goto out_no_sinfo;
 VAR_5->sinfo->sig = FUNC_3(sizeof(struct public_key_signature),
      VAR_1);
 if (!VAR_5->sinfo->sig)
  goto out_no_sig;

 VAR_5->data = (unsigned long)VAR_3;
 VAR_5->ppcerts = &VAR_5->certs;
 VAR_5->ppsinfo = &VAR_5->msg->signed_infos;


 VAR_7 = FUNC_1(&VAR_2, VAR_5, VAR_3, VAR_4);
 if (VAR_7 < 0) {
  VAR_6 = FUNC_0(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_4(VAR_5->msg);
 if (VAR_7 < 0) {
  VAR_6 = FUNC_0(VAR_7);
  goto out;
 }

 VAR_6 = VAR_5->msg;
 VAR_5->msg = ((void*)0);

out:
 while (VAR_5->certs) {
  struct x509_certificate *VAR_8 = VAR_5->certs;
  VAR_5->certs = VAR_8->next;
  FUNC_7(VAR_8);
 }
out_no_sig:
 FUNC_6(VAR_5->sinfo);
out_no_sinfo:
 FUNC_5(VAR_5->msg);
out_no_msg:
 FUNC_2(VAR_5);
out_no_ctx:
 return VAR_6;
}
