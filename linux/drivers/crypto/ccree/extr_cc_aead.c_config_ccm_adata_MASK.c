
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_aead_ctx {unsigned int authsize; int drvdata; } ;
struct aead_request {unsigned int* iv; unsigned int cryptlen; } ;
struct TYPE_2__ {scalar_t__ op_type; } ;
struct aead_req_ctx {int* ccm_config; int* mac_buf; scalar_t__ assoclen; int ccm_hdr_size; TYPE_1__ gen_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (int*,scalar_t__) ;
 int FUNC_6 (int*,unsigned int*,int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct aead_request *VAR_6)
{
 struct crypto_aead *VAR_7 = FUNC_2(VAR_6);
 struct cc_aead_ctx *VAR_8 = FUNC_1(VAR_7);
 struct device *VAR_9 = FUNC_4(VAR_8->drvdata);
 struct aead_req_ctx *VAR_10 = FUNC_0(VAR_6);

 unsigned int VAR_11 = VAR_6->iv[0];



 unsigned int VAR_12 = VAR_11 + 1;
 unsigned int VAR_13 = VAR_8->authsize;
 u8 *VAR_14 = VAR_10->ccm_config + VAR_2;
 u8 *VAR_15 = VAR_10->ccm_config + VAR_1;
 u8 *VAR_16 = VAR_10->ccm_config + VAR_3;
 unsigned int VAR_17 = (VAR_10->gen_ctx.op_type ==
     VAR_4) ?
    VAR_6->cryptlen :
    (VAR_6->cryptlen - VAR_8->authsize);
 int VAR_18;

 FUNC_7(VAR_10->mac_buf, 0, VAR_0);
 FUNC_7(VAR_10->ccm_config, 0, VAR_0 * 3);



 if (VAR_12 < 2 || VAR_12 > 8) {
  FUNC_3(VAR_9, "illegal iv value %X\n", VAR_6->iv[0]);
  return -VAR_5;
 }
 FUNC_6(VAR_14, VAR_6->iv, VAR_0);




 *VAR_14 |= (8 * ((VAR_13 - 2) / 2));
 if (VAR_10->assoclen > 0)
  *VAR_14 |= 64;

 VAR_18 = FUNC_8(VAR_14 + 16 - VAR_12, VAR_17, VAR_12);
 if (VAR_18) {
  FUNC_3(VAR_9, "message len overflow detected");
  return VAR_18;
 }



 VAR_10->ccm_hdr_size = FUNC_5(VAR_15, VAR_10->assoclen);

 FUNC_7(VAR_6->iv + 15 - VAR_6->iv[0], 0, VAR_6->iv[0] + 1);
 VAR_6->iv[15] = 1;

 FUNC_6(VAR_16, VAR_6->iv, VAR_0);
 VAR_16[15] = 0;

 return 0;
}
