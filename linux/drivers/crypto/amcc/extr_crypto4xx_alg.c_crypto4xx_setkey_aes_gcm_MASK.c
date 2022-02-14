
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int opcode; int dir; } ;
struct TYPE_10__ {TYPE_4__ bf; } ;
struct TYPE_7__ {unsigned int key_len; } ;
struct TYPE_8__ {TYPE_2__ bf; } ;
struct TYPE_6__ {unsigned int w; } ;
struct dynamic_sa_ctl {TYPE_5__ sa_command_0; TYPE_3__ sa_command_1; TYPE_1__ sa_contents; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct crypto4xx_ctx {int sa_len; scalar_t__ sa_out; scalar_t__ sa_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct crypto4xx_ctx*,struct crypto_aead*,int const*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct crypto4xx_ctx*,scalar_t__) ;
 int FUNC_3 (int ,int const*,unsigned int) ;
 int FUNC_4 (struct crypto4xx_ctx*) ;
 int FUNC_5 (int ,int const*,unsigned int) ;
 int FUNC_6 (struct crypto_aead*,int ) ;
 struct crypto_tfm* FUNC_7 (struct crypto_aead*) ;
 struct crypto4xx_ctx* FUNC_8 (struct crypto_tfm*) ;
 int FUNC_9 (struct dynamic_sa_ctl*) ;
 int FUNC_10 (struct dynamic_sa_ctl*) ;
 int FUNC_11 (scalar_t__,scalar_t__,int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (struct dynamic_sa_ctl*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_14 (struct dynamic_sa_ctl*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_15(struct crypto_aead *VAR_26,
        const u8 *VAR_27, unsigned int VAR_28)
{
 struct crypto_tfm *VAR_29 = FUNC_7(VAR_26);
 struct crypto4xx_ctx *VAR_30 = FUNC_8(VAR_29);
 struct dynamic_sa_ctl *VAR_31;
 int VAR_32 = 0;

 if (FUNC_1(VAR_28) != 0) {
  FUNC_6(VAR_26, VAR_2);
  return -VAR_5;
 }

 VAR_32 = FUNC_0(VAR_30, VAR_26, VAR_27, VAR_28);
 if (VAR_32)
  return VAR_32;

 if (VAR_30->sa_in || VAR_30->sa_out)
  FUNC_4(VAR_30);

 VAR_32 = FUNC_2(VAR_30, VAR_6 + (VAR_28 - 16) / 4);
 if (VAR_32)
  return VAR_32;

 VAR_31 = (struct dynamic_sa_ctl *) VAR_30->sa_in;

 VAR_31->sa_contents.w = VAR_7 | (VAR_28 << 2);
 FUNC_13(VAR_31, VAR_24, VAR_18,
     VAR_13, VAR_14,
     VAR_19, VAR_11,
     VAR_8, VAR_23,
     VAR_22, VAR_21,
     VAR_3);
 FUNC_14(VAR_31, VAR_1, VAR_12,
     VAR_0, VAR_10,
     VAR_25, VAR_15,
     VAR_17, VAR_9,
     VAR_16);

 VAR_31->sa_command_1.bf.key_len = VAR_28 >> 3;

 FUNC_5(FUNC_10(VAR_31),
     VAR_27, VAR_28);

 VAR_32 = FUNC_3(FUNC_9(VAR_31),
  VAR_27, VAR_28);
 if (VAR_32) {
  FUNC_12("GCM hash key setting failed = %d\n", VAR_32);
  goto err;
 }

 FUNC_11(VAR_30->sa_out, VAR_30->sa_in, VAR_30->sa_len * 4);
 VAR_31 = (struct dynamic_sa_ctl *) VAR_30->sa_out;
 VAR_31->sa_command_0.bf.dir = VAR_4;
 VAR_31->sa_command_0.bf.opcode = VAR_20;

 return 0;
err:
 FUNC_4(VAR_30);
 return VAR_32;
}
