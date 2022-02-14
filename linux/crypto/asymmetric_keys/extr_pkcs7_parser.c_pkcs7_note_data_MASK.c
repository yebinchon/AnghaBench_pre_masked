
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkcs7_parse_context {TYPE_1__* msg; } ;
struct TYPE_2__ {size_t data_len; size_t data_hdrlen; void const* data; } ;


 int FUNC_0 (char*) ;

int FUNC_1(void *VAR_0, size_t VAR_1,
      unsigned char VAR_2,
      const void *VAR_3, size_t VAR_4)
{
 struct pkcs7_parse_context *VAR_5 = VAR_0;

 FUNC_0("Got data\n");

 VAR_5->msg->data = VAR_3;
 VAR_5->msg->data_len = VAR_4;
 VAR_5->msg->data_hdrlen = VAR_1;
 return 0;
}
