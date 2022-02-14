
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int timeout; } ;
struct mtk_i2c {int irq_stat; scalar_t__ speed_hz; scalar_t__ op; int dev; TYPE_1__ adap; int msg_complete; scalar_t__ auto_restart; scalar_t__ pdmabase; TYPE_2__* dev_comp; } ;
struct i2c_msg {int len; int addr; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {scalar_t__ support_33bits; scalar_t__ aux_len_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,int,int ) ;
 int FUNC_4 (struct i2c_msg*) ;
 int * FUNC_5 (struct i2c_msg*,int) ;
 int FUNC_6 (int *,struct i2c_msg*,int) ;
 int FUNC_7 (struct mtk_i2c*) ;
 int FUNC_8 (struct mtk_i2c*,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct mtk_i2c*,int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct mtk_i2c *VAR_48, struct i2c_msg *VAR_49,
          int VAR_50, int VAR_51)
{
 u16 VAR_52;
 u16 VAR_53;
 u16 VAR_54;
 u16 VAR_55 = 0;
 u32 VAR_56;
 u8 *VAR_57 = ((void*)0);
 u8 *VAR_58 = ((void*)0);
 dma_addr_t VAR_59 = 0;
 dma_addr_t VAR_60 = 0;
 int VAR_61;

 VAR_48->irq_stat = 0;

 if (VAR_48->auto_restart)
  VAR_55 = VAR_23;

 FUNC_11(&VAR_48->msg_complete);

 VAR_54 = FUNC_8(VAR_48, VAR_30) &
   ~(VAR_7 | VAR_8);
 if ((VAR_48->speed_hz > VAR_28) || (VAR_51 >= 1))
  VAR_54 |= VAR_8;

 if (VAR_48->op == VAR_20)
  VAR_54 |= VAR_7 | VAR_8;

 FUNC_10(VAR_48, VAR_54, VAR_30);


 if (VAR_48->speed_hz <= VAR_9)
  FUNC_10(VAR_48, VAR_24, VAR_32);
 else
  FUNC_10(VAR_48, VAR_16, VAR_32);

 VAR_52 = FUNC_4(VAR_49);
 FUNC_10(VAR_48, VAR_52, VAR_40);


 FUNC_10(VAR_48, VAR_55 | VAR_17 | VAR_5 |
       VAR_6 | VAR_25, VAR_35);

 FUNC_10(VAR_48, VAR_15, VAR_33);


 FUNC_10(VAR_48, VAR_55 | VAR_17 | VAR_5 |
       VAR_6 | VAR_25, VAR_34);


 if (VAR_48->op == VAR_20) {
  if (VAR_48->dev_comp->aux_len_reg) {
   FUNC_10(VAR_48, VAR_49->len, VAR_43);
   FUNC_10(VAR_48, (VAR_49 + 1)->len,
         VAR_44);
  } else {
   FUNC_10(VAR_48, VAR_49->len | ((VAR_49 + 1)->len) << 8,
         VAR_43);
  }
  FUNC_10(VAR_48, VAR_27, VAR_42);
 } else {
  FUNC_10(VAR_48, VAR_49->len, VAR_43);
  FUNC_10(VAR_48, VAR_50, VAR_42);
 }


 if (VAR_48->op == VAR_18) {
  FUNC_13(VAR_13, VAR_48->pdmabase + VAR_36);
  FUNC_13(VAR_11, VAR_48->pdmabase + VAR_29);

  VAR_57 = FUNC_5(VAR_49, 1);
  if (!VAR_57)
   return -VAR_2;

  VAR_59 = FUNC_1(VAR_48->dev, VAR_57,
     VAR_49->len, VAR_0);
  if (FUNC_2(VAR_48->dev, VAR_59)) {
   FUNC_6(VAR_57, VAR_49, 0);

   return -VAR_2;
  }

  if (VAR_48->dev_comp->support_33bits) {
   VAR_56 = FUNC_9(VAR_59);
   FUNC_13(VAR_56, VAR_48->pdmabase + VAR_37);
  }

  FUNC_13((u32)VAR_59, VAR_48->pdmabase + VAR_39);
  FUNC_13(VAR_49->len, VAR_48->pdmabase + VAR_38);
 } else if (VAR_48->op == VAR_19) {
  FUNC_13(VAR_13, VAR_48->pdmabase + VAR_36);
  FUNC_13(VAR_12, VAR_48->pdmabase + VAR_29);

  VAR_58 = FUNC_5(VAR_49, 1);
  if (!VAR_58)
   return -VAR_2;

  VAR_60 = FUNC_1(VAR_48->dev, VAR_58,
     VAR_49->len, VAR_1);
  if (FUNC_2(VAR_48->dev, VAR_60)) {
   FUNC_6(VAR_58, VAR_49, 0);

   return -VAR_2;
  }

  if (VAR_48->dev_comp->support_33bits) {
   VAR_56 = FUNC_9(VAR_60);
   FUNC_13(VAR_56, VAR_48->pdmabase + VAR_45);
  }

  FUNC_13((u32)VAR_60, VAR_48->pdmabase + VAR_47);
  FUNC_13(VAR_49->len, VAR_48->pdmabase + VAR_46);
 } else {
  FUNC_13(VAR_10, VAR_48->pdmabase + VAR_36);
  FUNC_13(VAR_10, VAR_48->pdmabase + VAR_29);

  VAR_58 = FUNC_5(VAR_49, 1);
  if (!VAR_58)
   return -VAR_2;

  VAR_60 = FUNC_1(VAR_48->dev, VAR_58,
     VAR_49->len, VAR_1);
  if (FUNC_2(VAR_48->dev, VAR_60)) {
   FUNC_6(VAR_58, VAR_49, 0);

   return -VAR_2;
  }

  VAR_57 = FUNC_5((VAR_49 + 1), 1);
  if (!VAR_57) {
   FUNC_3(VAR_48->dev, VAR_60,
      VAR_49->len, VAR_1);

   FUNC_6(VAR_58, VAR_49, 0);

   return -VAR_2;
  }

  VAR_59 = FUNC_1(VAR_48->dev, VAR_57,
     (VAR_49 + 1)->len,
     VAR_0);
  if (FUNC_2(VAR_48->dev, VAR_59)) {
   FUNC_3(VAR_48->dev, VAR_60,
      VAR_49->len, VAR_1);

   FUNC_6(VAR_58, VAR_49, 0);
   FUNC_6(VAR_57, (VAR_49 + 1), 0);

   return -VAR_2;
  }

  if (VAR_48->dev_comp->support_33bits) {
   VAR_56 = FUNC_9(VAR_60);
   FUNC_13(VAR_56, VAR_48->pdmabase + VAR_45);

   VAR_56 = FUNC_9(VAR_59);
   FUNC_13(VAR_56, VAR_48->pdmabase + VAR_37);
  }

  FUNC_13((u32)VAR_60, VAR_48->pdmabase + VAR_47);
  FUNC_13((u32)VAR_59, VAR_48->pdmabase + VAR_39);
  FUNC_13(VAR_49->len, VAR_48->pdmabase + VAR_46);
  FUNC_13((VAR_49 + 1)->len, VAR_48->pdmabase + VAR_38);
 }

 FUNC_13(VAR_14, VAR_48->pdmabase + VAR_31);

 if (!VAR_48->auto_restart) {
  VAR_53 = VAR_26;
 } else {
  VAR_53 = VAR_26 | VAR_22;
  if (VAR_51 >= 1)
   VAR_53 |= VAR_21;
 }
 FUNC_10(VAR_48, VAR_53, VAR_41);

 VAR_61 = FUNC_12(&VAR_48->msg_complete,
       VAR_48->adap.timeout);


 FUNC_10(VAR_48, ~(VAR_55 | VAR_17 | VAR_5 |
       VAR_6 | VAR_25), VAR_34);

 if (VAR_48->op == VAR_19) {
  FUNC_3(VAR_48->dev, VAR_60,
     VAR_49->len, VAR_1);

  FUNC_6(VAR_58, VAR_49, 1);
 } else if (VAR_48->op == VAR_18) {
  FUNC_3(VAR_48->dev, VAR_59,
     VAR_49->len, VAR_0);

  FUNC_6(VAR_57, VAR_49, 1);
 } else {
  FUNC_3(VAR_48->dev, VAR_60, VAR_49->len,
     VAR_1);
  FUNC_3(VAR_48->dev, VAR_59, (VAR_49 + 1)->len,
     VAR_0);

  FUNC_6(VAR_58, VAR_49, 1);
  FUNC_6(VAR_57, (VAR_49 + 1), 1);
 }

 if (VAR_61 == 0) {
  FUNC_0(VAR_48->dev, "addr: %x, transfer timeout\n", VAR_49->addr);
  FUNC_7(VAR_48);
  return -VAR_4;
 }

 if (VAR_48->irq_stat & (VAR_17 | VAR_5)) {
  FUNC_0(VAR_48->dev, "addr: %x, transfer ACK error\n", VAR_49->addr);
  FUNC_7(VAR_48);
  return -VAR_3;
 }

 return 0;
}
