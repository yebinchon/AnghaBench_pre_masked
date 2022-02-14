
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct pkcs7_parse_context {TYPE_1__* msg; } ;
struct TYPE_2__ {unsigned int version; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(void *VAR_1, size_t VAR_2,
      unsigned char VAR_3,
      const void *VAR_4, size_t VAR_5)
{
 struct pkcs7_parse_context *VAR_6 = VAR_1;
 unsigned VAR_7;

 if (VAR_5 != 1)
  goto unsupported;

 VAR_6->msg->version = VAR_7 = *(const u8 *)VAR_4;
 switch (VAR_7) {
 case 1:



  break;
 case 3:

  break;
 default:
  goto unsupported;
 }

 return 0;

unsupported:
 FUNC_0("Unsupported SignedData version\n");
 return -VAR_0;
}
