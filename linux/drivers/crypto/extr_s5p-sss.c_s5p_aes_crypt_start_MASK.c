
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct s5p_aes_dev {int busy; int lock; int sg_dst; int sg_src; TYPE_1__* ctx; struct ablkcipher_request* req; } ;
struct ablkcipher_request {int * info; } ;
struct TYPE_2__ {scalar_t__ keylen; int aes_key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
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
 int FUNC_0 (struct s5p_aes_dev*,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct s5p_aes_dev*,int ,int) ;
 int FUNC_2 (struct ablkcipher_request*,int) ;
 int FUNC_3 (struct s5p_aes_dev*,int ,int *,int *,scalar_t__) ;
 int FUNC_4 (struct s5p_aes_dev*,int ) ;
 int FUNC_5 (struct s5p_aes_dev*,int ) ;
 int FUNC_6 (struct s5p_aes_dev*,struct ablkcipher_request*) ;
 int FUNC_7 (struct s5p_aes_dev*,struct ablkcipher_request*) ;
 int FUNC_8 (struct s5p_aes_dev*) ;
 int FUNC_9 (struct s5p_aes_dev*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct s5p_aes_dev *VAR_26, unsigned long VAR_27)
{
 struct ablkcipher_request *VAR_28 = VAR_26->req;
 u32 VAR_29;
 unsigned long VAR_30;
 int VAR_31;
 u8 *VAR_32, *VAR_33;


 VAR_29 = VAR_18;
 if (VAR_27 & VAR_8)
  VAR_29 |= VAR_21;

 if ((VAR_27 & VAR_9) == VAR_6) {
  VAR_29 |= VAR_15;
  VAR_32 = VAR_28->info;
  VAR_33 = ((void*)0);
 } else if ((VAR_27 & VAR_9) == VAR_7) {
  VAR_29 |= VAR_16;
  VAR_32 = ((void*)0);
  VAR_33 = VAR_28->info;
 } else {
  VAR_32 = ((void*)0);
  VAR_33 = ((void*)0);
 }

 if (VAR_26->ctx->keylen == VAR_1)
  VAR_29 |= VAR_19;
 else if (VAR_26->ctx->keylen == VAR_2)
  VAR_29 |= VAR_20;

 VAR_29 |= VAR_17;


 VAR_29 |= VAR_11
      | VAR_12
      | VAR_13
      | VAR_14
      | VAR_10;

 FUNC_10(&VAR_26->lock, VAR_30);

 FUNC_1(VAR_26, VAR_4,
    VAR_23 | VAR_22);
 FUNC_1(VAR_26, VAR_3, 0x00);

 VAR_31 = FUNC_6(VAR_26, VAR_28);
 if (VAR_31)
  goto indata_error;

 VAR_31 = FUNC_7(VAR_26, VAR_28);
 if (VAR_31)
  goto outdata_error;

 FUNC_0(VAR_26, VAR_0, VAR_29);
 FUNC_3(VAR_26, VAR_26->ctx->aes_key, VAR_32, VAR_33, VAR_26->ctx->keylen);

 FUNC_4(VAR_26, VAR_26->sg_src);
 FUNC_5(VAR_26, VAR_26->sg_dst);

 FUNC_1(VAR_26, VAR_5,
    VAR_25 | VAR_24);

 FUNC_11(&VAR_26->lock, VAR_30);

 return;

outdata_error:
 FUNC_9(VAR_26);

indata_error:
 FUNC_8(VAR_26);
 VAR_26->busy = 0;
 FUNC_11(&VAR_26->lock, VAR_30);
 FUNC_2(VAR_28, VAR_31);
}
