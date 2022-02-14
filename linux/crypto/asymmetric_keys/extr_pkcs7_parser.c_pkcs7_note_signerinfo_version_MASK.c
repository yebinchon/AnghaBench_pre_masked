
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct pkcs7_parse_context {int expect_skid; TYPE_1__* msg; } ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

int FUNC_1(void *VAR_2, size_t VAR_3,
      unsigned char VAR_4,
      const void *VAR_5, size_t VAR_6)
{
 struct pkcs7_parse_context *VAR_7 = VAR_2;
 unsigned VAR_8;

 if (VAR_6 != 1)
  goto unsupported;

 VAR_8 = *(const u8 *)VAR_5;
 switch (VAR_8) {
 case 1:



  if (VAR_7->msg->version != 1)
   goto version_mismatch;
  VAR_7->expect_skid = 0;
  break;
 case 3:

  if (VAR_7->msg->version == 1)
   goto version_mismatch;
  VAR_7->expect_skid = 1;
  break;
 default:
  goto unsupported;
 }

 return 0;

unsupported:
 FUNC_0("Unsupported SignerInfo version\n");
 return -VAR_1;
version_mismatch:
 FUNC_0("SignedData-SignerInfo version mismatch\n");
 return -VAR_0;
}
