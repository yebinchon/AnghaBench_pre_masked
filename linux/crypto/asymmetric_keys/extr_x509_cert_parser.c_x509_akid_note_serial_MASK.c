
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x509_parse_context {TYPE_2__* cert; int akid_raw_issuer_size; int akid_raw_issuer; } ;
struct asymmetric_key_id {int len; void const* data; } ;
struct TYPE_4__ {TYPE_1__* sig; } ;
struct TYPE_3__ {struct asymmetric_key_id** auth_ids; } ;


 scalar_t__ FUNC_0 (struct asymmetric_key_id*) ;
 int FUNC_1 (struct asymmetric_key_id*) ;
 struct asymmetric_key_id* FUNC_2 (void const*,size_t,int ,int ) ;
 int FUNC_3 (char*,int,void const*) ;

int FUNC_4(void *VAR_0, size_t VAR_1,
     unsigned char VAR_2,
     const void *VAR_3, size_t VAR_4)
{
 struct x509_parse_context *VAR_5 = VAR_0;
 struct asymmetric_key_id *VAR_6;

 FUNC_3("AKID: serial: %*phN\n", (int)VAR_4, VAR_3);

 if (!VAR_5->akid_raw_issuer || VAR_5->cert->sig->auth_ids[0])
  return 0;

 VAR_6 = FUNC_2(VAR_3,
      VAR_4,
      VAR_5->akid_raw_issuer,
      VAR_5->akid_raw_issuer_size);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_3("authkeyid %*phN\n", VAR_6->len, VAR_6->data);
 VAR_5->cert->sig->auth_ids[0] = VAR_6;
 return 0;
}
