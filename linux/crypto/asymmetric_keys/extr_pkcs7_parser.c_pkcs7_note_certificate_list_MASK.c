
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkcs7_parse_context {int * certs; int ** ppcerts; TYPE_1__* msg; } ;
struct TYPE_2__ {int * certs; } ;


 int FUNC_0 (char*,unsigned char) ;

int FUNC_1(void *VAR_0, size_t VAR_1,
    unsigned char VAR_2,
    const void *VAR_3, size_t VAR_4)
{
 struct pkcs7_parse_context *VAR_5 = VAR_0;

 FUNC_0("Got cert list (%02x)\n", VAR_2);

 *VAR_5->ppcerts = VAR_5->msg->certs;
 VAR_5->msg->certs = VAR_5->certs;
 VAR_5->certs = ((void*)0);
 VAR_5->ppcerts = &VAR_5->certs;
 return 0;
}
