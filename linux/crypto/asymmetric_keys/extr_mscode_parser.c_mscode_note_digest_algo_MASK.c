
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pefile_context {char* digest_algo; } ;
typedef enum OID { ____Placeholder_OID } OID ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*,size_t) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void const*,size_t,char*,int) ;

int FUNC_3(void *VAR_2, size_t VAR_3,
       unsigned char VAR_4,
       const void *VAR_5, size_t VAR_6)
{
 struct pefile_context *VAR_7 = VAR_2;
 char VAR_8[50];
 enum OID VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_6);
 switch (VAR_9) {
 case 134:
  VAR_7->digest_algo = "md4";
  break;
 case 133:
  VAR_7->digest_algo = "md5";
  break;
 case 132:
  VAR_7->digest_algo = "sha1";
  break;
 case 130:
  VAR_7->digest_algo = "sha256";
  break;
 case 129:
  VAR_7->digest_algo = "sha384";
  break;
 case 128:
  VAR_7->digest_algo = "sha512";
  break;
 case 131:
  VAR_7->digest_algo = "sha224";
  break;

 case 135:
  FUNC_2(VAR_5, VAR_6, VAR_8, sizeof(VAR_8));
  FUNC_1("Unknown OID: %s\n", VAR_8);
  return -VAR_0;

 default:
  FUNC_1("Unsupported content type: %u\n", VAR_9);
  return -VAR_1;
 }

 return 0;
}
