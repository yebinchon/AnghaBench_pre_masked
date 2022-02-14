
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct TYPE_3__ {unsigned int key_len; int key; int key_sg; int mode; int type; } ;
struct TYPE_4__ {TYPE_1__ aes; } ;
struct ccp_ctx {TYPE_2__ u; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ccp_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,int ) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_6, const u8 *VAR_7,
         unsigned int VAR_8)
{
 struct ccp_ctx *VAR_9 = FUNC_0(VAR_6);

 switch (VAR_8) {
 case 130:
  VAR_9->u.aes.type = VAR_1;
  break;
 case 129:
  VAR_9->u.aes.type = VAR_2;
  break;
 case 128:
  VAR_9->u.aes.type = VAR_3;
  break;
 default:
  FUNC_1(VAR_6, VAR_4);
  return -VAR_5;
 }

 VAR_9->u.aes.mode = VAR_0;
 VAR_9->u.aes.key_len = VAR_8;

 FUNC_2(VAR_9->u.aes.key, VAR_7, VAR_8);
 FUNC_3(&VAR_9->u.aes.key_sg, VAR_9->u.aes.key, VAR_8);

 return 0;
}
