
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int has_dma; } ;
struct atmel_tdes_dev {int flags; TYPE_3__* req; TYPE_2__* ctx; TYPE_1__ caps; } ;
struct TYPE_6__ {scalar_t__ info; } ;
struct TYPE_5__ {int keylen; scalar_t__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct atmel_tdes_dev*) ;
 int FUNC_1 (struct atmel_tdes_dev*,int ,int) ;
 int FUNC_2 (struct atmel_tdes_dev*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct atmel_tdes_dev *VAR_29)
{
 int VAR_30;
 u32 VAR_31 = 0, VAR_32 = VAR_23;

 VAR_30 = FUNC_0(VAR_29);

 if (VAR_30)
  return VAR_30;

 if (!VAR_29->caps.has_dma)
  FUNC_1(VAR_29, VAR_26,
   VAR_28 | VAR_27);


 if (VAR_29->ctx->keylen > (VAR_0 << 1)) {
  VAR_32 |= VAR_19;
  VAR_32 |= VAR_25;
 } else if (VAR_29->ctx->keylen > VAR_0) {
  VAR_32 |= VAR_18;
  VAR_32 |= VAR_25;
 } else {
  VAR_32 |= VAR_24;
 }

 if (VAR_29->flags & VAR_2) {
  VAR_32 |= VAR_20;
 } else if (VAR_29->flags & VAR_3) {
  VAR_32 |= VAR_21;

  if (VAR_29->flags & VAR_7)
   VAR_32 |= VAR_16;
  else if (VAR_29->flags & VAR_4)
   VAR_32 |= VAR_13;
  else if (VAR_29->flags & VAR_5)
   VAR_32 |= VAR_14;
  else if (VAR_29->flags & VAR_6)
   VAR_32 |= VAR_15;
 } else if (VAR_29->flags & VAR_9) {
  VAR_32 |= VAR_22;
 }

 if ((VAR_29->flags & VAR_8) || (VAR_29->flags & VAR_9))
  VAR_32 |= VAR_17;

 FUNC_1(VAR_29, VAR_1, VAR_31);
 FUNC_1(VAR_29, VAR_12, VAR_32);

 FUNC_2(VAR_29, VAR_11, VAR_29->ctx->key,
      VAR_29->ctx->keylen >> 2);

 if (((VAR_29->flags & VAR_2) || (VAR_29->flags & VAR_3) ||
  (VAR_29->flags & VAR_9)) && VAR_29->req->info) {
  FUNC_2(VAR_29, VAR_10, VAR_29->req->info, 2);
 }

 return 0;
}
