
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkcs7_parse_context {scalar_t__ last_oid; TYPE_1__* msg; } ;
struct TYPE_2__ {scalar_t__ data_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;

int FUNC_1(void *VAR_3, size_t VAR_4,
         unsigned char VAR_5,
         const void *VAR_6, size_t VAR_7)
{
 struct pkcs7_parse_context *VAR_8 = VAR_3;

 if (VAR_8->last_oid != VAR_1 &&
     VAR_8->last_oid != VAR_2) {
  FUNC_0("Unsupported data type %d\n", VAR_8->last_oid);
  return -VAR_0;
 }

 VAR_8->msg->data_type = VAR_8->last_oid;
 return 0;
}
