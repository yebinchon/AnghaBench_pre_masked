
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
struct crypto_skcipher {int dummy; } ;
struct crypto4xx_ctx {int sa_len; struct dynamic_sa_ctl* sa_out; struct dynamic_sa_ctl* sa_in; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (struct crypto4xx_ctx*,scalar_t__) ;
 int FUNC_1 (struct crypto4xx_ctx*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 struct crypto4xx_ctx* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct crypto_skcipher*,int ) ;
 int FUNC_5 (struct dynamic_sa_ctl*) ;
 int FUNC_6 (struct dynamic_sa_ctl*,struct dynamic_sa_ctl*,int) ;
 int FUNC_7 (struct dynamic_sa_ctl*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct dynamic_sa_ctl*,unsigned char,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct crypto_skcipher *VAR_30,
    const u8 *VAR_31,
    unsigned int VAR_32,
    unsigned char VAR_33,
    u8 VAR_34)
{
 struct crypto4xx_ctx *VAR_35 = FUNC_3(VAR_30);
 struct dynamic_sa_ctl *VAR_36;
 int VAR_37;

 if (VAR_32 != VAR_2 &&
  VAR_32 != VAR_1 && VAR_32 != VAR_0) {
  FUNC_4(VAR_30,
    VAR_4);
  return -VAR_7;
 }


 if (VAR_35->sa_in || VAR_35->sa_out)
  FUNC_1(VAR_35);

 VAR_37 = FUNC_0(VAR_35, VAR_8 + (VAR_32-16) / 4);
 if (VAR_37)
  return VAR_37;


 VAR_36 = VAR_35->sa_in;

 FUNC_7(VAR_36, VAR_21, (VAR_33 == VAR_3 ?
     VAR_22 : VAR_28),
     VAR_20, (VAR_33 == VAR_3 ?
     VAR_14 : VAR_15),
     VAR_23, VAR_12,
     VAR_10, VAR_27,
     VAR_26, VAR_24,
     VAR_5);

 FUNC_8(VAR_36, VAR_33, VAR_13,
     VAR_34, VAR_11,
     VAR_29, VAR_16,
     VAR_18, VAR_19,
     VAR_17);
 FUNC_2(FUNC_5(VAR_36),
     VAR_31, VAR_32);
 VAR_36->sa_contents.w = VAR_9 | (VAR_32 << 2);
 VAR_36->sa_command_1.bf.key_len = VAR_32 >> 3;

 FUNC_6(VAR_35->sa_out, VAR_35->sa_in, VAR_35->sa_len * 4);
 VAR_36 = VAR_35->sa_out;
 VAR_36->sa_command_0.bf.dir = VAR_6;




 VAR_36->sa_command_0.bf.opcode = VAR_25;

 return 0;
}
