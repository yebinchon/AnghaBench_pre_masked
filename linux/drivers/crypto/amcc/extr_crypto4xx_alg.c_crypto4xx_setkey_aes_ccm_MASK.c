
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {unsigned int key_len; } ;
struct TYPE_6__ {TYPE_2__ bf; } ;
struct TYPE_4__ {unsigned int w; } ;
struct dynamic_sa_ctl {TYPE_3__ sa_command_1; TYPE_1__ sa_contents; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct crypto4xx_ctx {int sa_len; scalar_t__ sa_out; scalar_t__ sa_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int FUNC_0 (struct crypto4xx_ctx*,struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_1 (struct crypto4xx_ctx*,scalar_t__) ;
 int FUNC_2 (struct crypto4xx_ctx*) ;
 int FUNC_3 (int ,int const*,unsigned int) ;
 struct crypto_tfm* FUNC_4 (struct crypto_aead*) ;
 struct crypto4xx_ctx* FUNC_5 (struct crypto_tfm*) ;
 int FUNC_6 (struct dynamic_sa_ctl*) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 int FUNC_8 (struct dynamic_sa_ctl*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct dynamic_sa_ctl*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_10(struct crypto_aead *VAR_25, const u8 *VAR_26,
        unsigned int VAR_27)
{
 struct crypto_tfm *VAR_28 = FUNC_4(VAR_25);
 struct crypto4xx_ctx *VAR_29 = FUNC_5(VAR_28);
 struct dynamic_sa_ctl *VAR_30;
 int VAR_31 = 0;

 VAR_31 = FUNC_0(VAR_29, VAR_25, VAR_26, VAR_27);
 if (VAR_31)
  return VAR_31;

 if (VAR_29->sa_in || VAR_29->sa_out)
  FUNC_2(VAR_29);

 VAR_31 = FUNC_1(VAR_29, VAR_4 + (VAR_27 - 16) / 4);
 if (VAR_31)
  return VAR_31;


 VAR_30 = (struct dynamic_sa_ctl *) VAR_29->sa_in;
 VAR_30->sa_contents.w = VAR_5 | (VAR_27 << 2);

 FUNC_8(VAR_30, VAR_23, VAR_17,
     VAR_12, VAR_13,
     VAR_18, VAR_10,
     VAR_6,
     VAR_22, VAR_21,
     VAR_20, VAR_2);

 FUNC_9(VAR_30, VAR_1, VAR_11,
     VAR_0, VAR_9,
     VAR_24, VAR_14,
     VAR_16, VAR_8,
     VAR_15);

 VAR_30->sa_command_1.bf.key_len = VAR_27 >> 3;

 FUNC_3(FUNC_6(VAR_30), VAR_26, VAR_27);

 FUNC_7(VAR_29->sa_out, VAR_29->sa_in, VAR_29->sa_len * 4);
 VAR_30 = (struct dynamic_sa_ctl *) VAR_29->sa_out;

 FUNC_8(VAR_30, VAR_23, VAR_17,
     VAR_12, VAR_13,
     VAR_18, VAR_10,
     VAR_6,
     VAR_22, VAR_21,
     VAR_19, VAR_3);

 FUNC_9(VAR_30, VAR_1, VAR_11,
     VAR_0, VAR_9,
     VAR_24, VAR_14,
     VAR_7, VAR_8,
     VAR_15);

 VAR_30->sa_command_1.bf.key_len = VAR_27 >> 3;
 return 0;
}
