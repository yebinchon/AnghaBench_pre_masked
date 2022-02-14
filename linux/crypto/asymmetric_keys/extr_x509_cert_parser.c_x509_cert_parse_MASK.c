
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_parse_context {unsigned long data; void const* raw_akid; size_t raw_akid_size; int key_algo; int params_size; int params; int key_size; int key; struct x509_certificate* cert; } ;
struct x509_certificate {struct asymmetric_key_id* id; int raw_issuer_size; int raw_issuer; int raw_serial_size; int raw_serial; TYPE_1__* pub; void* sig; } ;
struct public_key_signature {int dummy; } ;
struct public_key {int dummy; } ;
struct asymmetric_key_id {int dummy; } ;
struct TYPE_2__ {int algo; int paramlen; void* params; int keylen; void* key; } ;


 long VAR_0 ;
 struct x509_certificate* FUNC_0 (long) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct asymmetric_key_id*) ;
 long FUNC_2 (struct asymmetric_key_id*) ;
 long FUNC_3 (int *,struct x509_parse_context*,void const*,size_t) ;
 struct asymmetric_key_id* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct x509_parse_context*) ;
 void* FUNC_6 (int ,int ,int ) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (char*,size_t,size_t,void const*) ;
 int FUNC_9 (char*) ;
 int VAR_2 ;
 long FUNC_10 (struct x509_certificate*) ;
 int VAR_3 ;
 int FUNC_11 (struct x509_certificate*) ;
 long FUNC_12 (struct x509_certificate*) ;

struct x509_certificate *FUNC_13(const void *VAR_4, size_t VAR_5)
{
 struct x509_certificate *VAR_6;
 struct x509_parse_context *VAR_7;
 struct asymmetric_key_id *VAR_8;
 long VAR_9;

 VAR_9 = -VAR_0;
 VAR_6 = FUNC_7(sizeof(struct x509_certificate), VAR_1);
 if (!VAR_6)
  goto error_no_cert;
 VAR_6->pub = FUNC_7(sizeof(struct public_key), VAR_1);
 if (!VAR_6->pub)
  goto error_no_ctx;
 VAR_6->sig = FUNC_7(sizeof(struct public_key_signature), VAR_1);
 if (!VAR_6->sig)
  goto error_no_ctx;
 VAR_7 = FUNC_7(sizeof(struct x509_parse_context), VAR_1);
 if (!VAR_7)
  goto error_no_ctx;

 VAR_7->cert = VAR_6;
 VAR_7->data = (unsigned long)VAR_4;


 VAR_9 = FUNC_3(&VAR_3, VAR_7, VAR_4, VAR_5);
 if (VAR_9 < 0)
  goto error_decode;


 if (VAR_7->raw_akid) {
  FUNC_8("AKID: %u %*phN\n",
    VAR_7->raw_akid_size, VAR_7->raw_akid_size, VAR_7->raw_akid);
  VAR_9 = FUNC_3(&VAR_2, VAR_7,
           VAR_7->raw_akid, VAR_7->raw_akid_size);
  if (VAR_9 < 0) {
   FUNC_9("Couldn't decode AuthKeyIdentifier\n");
   goto error_decode;
  }
 }

 VAR_9 = -VAR_0;
 VAR_6->pub->key = FUNC_6(VAR_7->key, VAR_7->key_size, VAR_1);
 if (!VAR_6->pub->key)
  goto error_decode;

 VAR_6->pub->keylen = VAR_7->key_size;

 VAR_6->pub->params = FUNC_6(VAR_7->params, VAR_7->params_size, VAR_1);
 if (!VAR_6->pub->params)
  goto error_decode;

 VAR_6->pub->paramlen = VAR_7->params_size;
 VAR_6->pub->algo = VAR_7->key_algo;


 VAR_9 = FUNC_12(VAR_6);
 if (VAR_9 < 0)
  goto error_decode;


 VAR_8 = FUNC_4(VAR_6->raw_serial,
      VAR_6->raw_serial_size,
      VAR_6->raw_issuer,
      VAR_6->raw_issuer_size);
 if (FUNC_1(VAR_8)) {
  VAR_9 = FUNC_2(VAR_8);
  goto error_decode;
 }
 VAR_6->id = VAR_8;


 VAR_9 = FUNC_10(VAR_6);
 if (VAR_9 < 0)
  goto error_decode;

 FUNC_5(VAR_7);
 return VAR_6;

error_decode:
 FUNC_5(VAR_7);
error_no_ctx:
 FUNC_11(VAR_6);
error_no_cert:
 return FUNC_0(VAR_9);
}
