
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct bluecard_info {int ctrl_reg; int tx_state; TYPE_3__* hdev; int txq; TYPE_4__* p_dev; } ;
struct TYPE_8__ {TYPE_1__** resource; } ;
struct TYPE_6__ {int byte_tx; } ;
struct TYPE_7__ {TYPE_2__ stat; } ;
struct TYPE_5__ {unsigned int start; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_3 (struct bluecard_info*) ;
 int FUNC_4 (unsigned int,unsigned int,int ,int) ;
 int FUNC_5 (unsigned long,int *) ;
 int FUNC_6 (unsigned long,int *) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (unsigned char,scalar_t__) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (unsigned long,int *) ;
 struct sk_buff* FUNC_14 (int *) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_17 (unsigned long,int *) ;
 scalar_t__ FUNC_18 (unsigned long,int *) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_19(struct bluecard_info *VAR_17)
{
 if (!VAR_17) {
  FUNC_0("Unknown device");
  return;
 }

 if (!FUNC_18(VAR_13, &(VAR_17->tx_state)))
  return;

 if (FUNC_17(VAR_12, &(VAR_17->tx_state))) {
  FUNC_13(VAR_14, &(VAR_17->tx_state));
  return;
 }

 do {
  unsigned int VAR_18 = VAR_17->p_dev->resource[0]->start;
  unsigned int VAR_19;
  unsigned char VAR_20;
  unsigned long VAR_21;
  register struct sk_buff *VAR_22;
  int VAR_23;

  FUNC_6(VAR_14, &(VAR_17->tx_state));

  if (!FUNC_12(VAR_17->p_dev))
   return;

  if (FUNC_18(VAR_9, &(VAR_17->tx_state))) {
   if (!FUNC_18(VAR_11, &(VAR_17->tx_state)))
    break;
   VAR_19 = 0x10;
   VAR_20 = VAR_2;
   VAR_21 = VAR_11;
  } else {
   if (!FUNC_18(VAR_10, &(VAR_17->tx_state)))
    break;
   VAR_19 = 0x00;
   VAR_20 = VAR_1;
   VAR_21 = VAR_10;
  }

  VAR_22 = FUNC_14(&(VAR_17->txq));
  if (!VAR_22)
   break;

  if (FUNC_7(VAR_22) & 0x80) {

   VAR_17->ctrl_reg |= VAR_8;
   FUNC_10(VAR_17->ctrl_reg, VAR_18 + VAR_3);
  }


  FUNC_3(VAR_17);


  VAR_23 = FUNC_4(VAR_18, VAR_19, VAR_22->data, VAR_22->len);


  FUNC_11(VAR_20, VAR_18 + VAR_0);


  FUNC_6(VAR_21, &(VAR_17->tx_state));

  if (FUNC_7(VAR_22) & 0x80) {
   FUNC_1(VAR_16);
   FUNC_2(VAR_15);

   unsigned char VAR_24;

   switch (FUNC_7(VAR_22)) {
   case 129:
    VAR_24 = VAR_6;
    break;
   case 130:
    VAR_24 = VAR_5;
    break;
   case 131:
    VAR_24 = VAR_4;
    break;
   case 128:

   default:
    VAR_24 = VAR_7;
    break;
   }


   FUNC_9(100);


   VAR_17->ctrl_reg &= ~0x03;
   VAR_17->ctrl_reg |= VAR_24;
   FUNC_10(VAR_17->ctrl_reg, VAR_18 + VAR_3);


   VAR_17->ctrl_reg &= ~VAR_8;
   FUNC_10(VAR_17->ctrl_reg, VAR_18 + VAR_3);


   FUNC_9(1000);
  }

  if (VAR_23 == VAR_22->len) {
   FUNC_8(VAR_22);
  } else {
   FUNC_15(VAR_22, VAR_23);
   FUNC_16(&(VAR_17->txq), VAR_22);
  }

  VAR_17->hdev->stat.byte_tx += VAR_23;


  FUNC_5(VAR_9, &(VAR_17->tx_state));

 } while (FUNC_18(VAR_14, &(VAR_17->tx_state)));

 FUNC_6(VAR_12, &(VAR_17->tx_state));
}
