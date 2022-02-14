
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_aead_ctx {int enc_keylen; int auth_keylen; int auth_mode; scalar_t__ flow_mode; int drvdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cc_aead_ctx *VAR_7)
{
 struct device *VAR_8 = FUNC_2(VAR_7->drvdata);

 FUNC_0(VAR_8, "enc_keylen=%u  authkeylen=%u\n",
  VAR_7->enc_keylen, VAR_7->auth_keylen);

 switch (VAR_7->auth_mode) {
 case 130:
 case 129:
  break;
 case 128:
  if (VAR_7->auth_keylen != VAR_0 &&
      VAR_7->auth_keylen != VAR_1 &&
      VAR_7->auth_keylen != VAR_2)
   return -VAR_5;
  break;
 case 131:
  if (VAR_7->auth_keylen > 0)
   return -VAR_4;
  break;
 default:
  FUNC_1(VAR_8, "Invalid auth_mode=%d\n", VAR_7->auth_mode);
  return -VAR_4;
 }

 if (VAR_7->flow_mode == VAR_6) {
  if (VAR_7->enc_keylen != VAR_3) {
   FUNC_1(VAR_8, "Invalid cipher(3DES) key size: %u\n",
    VAR_7->enc_keylen);
   return -VAR_4;
  }
 } else {
  if (VAR_7->enc_keylen != VAR_0 &&
      VAR_7->enc_keylen != VAR_1 &&
      VAR_7->enc_keylen != VAR_2) {
   FUNC_1(VAR_8, "Invalid cipher(AES) key size: %u\n",
    VAR_7->enc_keylen);
   return -VAR_4;
  }
 }

 return 0;
}
