
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct stm32_cryp {int flags; TYPE_3__* req; TYPE_2__* areq; int dev; TYPE_1__* ctx; } ;
struct TYPE_6__ {scalar_t__ info; } ;
struct TYPE_5__ {int assoclen; } ;
struct TYPE_4__ {int keylen; } ;





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
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct stm32_cryp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct stm32_cryp*,int) ;
 int FUNC_4 (struct stm32_cryp*,int) ;
 int FUNC_5 (struct stm32_cryp*) ;
 int FUNC_6 (struct stm32_cryp*) ;
 int FUNC_7 (struct stm32_cryp*,int*) ;
 int FUNC_8 (struct stm32_cryp*) ;
 int FUNC_9 (struct stm32_cryp*) ;
 int FUNC_10 (struct stm32_cryp*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct stm32_cryp *VAR_17)
{
 int VAR_18;
 u32 VAR_19, VAR_20;

 FUNC_2(VAR_17->dev);


 FUNC_10(VAR_17, VAR_1, 0);


 FUNC_8(VAR_17);


 VAR_19 = VAR_6 | VAR_8;

 switch (VAR_17->ctx->keylen) {
 case 136:
  VAR_19 |= VAR_9;
  break;

 case 135:
  VAR_19 |= VAR_10;
  break;

 default:
 case 134:
  VAR_19 |= VAR_11;
  break;
 }

 VAR_20 = FUNC_5(VAR_17);
 if (VAR_20 == VAR_4)
  return -VAR_15;


 if (FUNC_1(VAR_17) &&
     ((VAR_20 == VAR_2) || (VAR_20 == 133))) {
  FUNC_10(VAR_17, VAR_0, VAR_19 | VAR_3 | VAR_5);


  VAR_18 = FUNC_9(VAR_17);
  if (VAR_18) {
   FUNC_0(VAR_17->dev, "Timeout (key preparation)\n");
   return VAR_18;
  }
 }

 VAR_19 |= VAR_20;

 if (FUNC_1(VAR_17))
  VAR_19 |= VAR_7;


 FUNC_10(VAR_17, VAR_0, VAR_19);

 switch (VAR_20) {
 case 130:
 case 132:

  if (VAR_20 == 132)
   VAR_18 = FUNC_3(VAR_17, VAR_19);
  else
   VAR_18 = FUNC_4(VAR_17, VAR_19);

  if (VAR_18)
   return VAR_18;


  if (VAR_17->areq->assoclen) {
   VAR_19 |= VAR_12;
  } else if (FUNC_6(VAR_17)) {
   VAR_19 |= VAR_14;
   FUNC_10(VAR_17, VAR_0, VAR_19);
  } else {
   VAR_19 |= VAR_13;
  }

  break;

 case 129:
 case 128:
 case 133:
 case 131:
  FUNC_7(VAR_17, (u32 *)VAR_17->req->info);
  break;

 default:
  break;
 }


 VAR_19 |= VAR_5;

 FUNC_10(VAR_17, VAR_0, VAR_19);

 VAR_17->flags &= ~VAR_16;

 return 0;
}
