
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_hash_request_ctx {int flags; int data_type; } ;
struct stm32_hash_dev {int flags; int dev; int req; } ;
struct stm32_hash_ctx {scalar_t__ keylen; } ;
struct crypto_ahash {int dummy; } ;


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
 scalar_t__ VAR_14 ;
 struct stm32_hash_request_ctx* FUNC_0 (int ) ;
 struct stm32_hash_ctx* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct stm32_hash_dev*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct stm32_hash_dev *VAR_15)
{
 struct stm32_hash_request_ctx *VAR_16 = FUNC_0(VAR_15->req);
 struct crypto_ahash *VAR_17 = FUNC_2(VAR_15->req);
 struct stm32_hash_ctx *VAR_18 = FUNC_1(VAR_17);

 u32 VAR_19 = VAR_6;

 if (!(VAR_15->flags & VAR_12)) {
  switch (VAR_16->flags & VAR_10) {
  case 131:
   VAR_19 |= VAR_1;
   break;
  case 130:
   VAR_19 |= VAR_2;
   break;
  case 129:
   VAR_19 |= VAR_3;
   break;
  case 128:
   VAR_19 |= VAR_4;
   break;
  default:
   VAR_19 |= VAR_1;
  }

  VAR_19 |= (VAR_16->data_type << VAR_5);

  if (VAR_16->flags & VAR_11) {
   VAR_15->flags |= VAR_11;
   VAR_19 |= VAR_8;
   if (VAR_18->keylen > VAR_14)
    VAR_19 |= VAR_7;
  }

  FUNC_4(VAR_15, VAR_13, VAR_9);

  FUNC_4(VAR_15, VAR_0, VAR_19);

  VAR_15->flags |= VAR_12;

  FUNC_3(VAR_15->dev, "Write Control %x\n", VAR_19);
 }
}
