
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bluecard_info {int ctrl_reg; int lock; int tx_state; TYPE_2__* p_dev; int hw_state; int hdev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct bluecard_info*,int) ;
 int FUNC_1 (struct bluecard_info*) ;
 unsigned char FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct bluecard_info *VAR_13 = VAR_12;
 unsigned int VAR_14;
 unsigned char VAR_15;

 if (!VAR_13 || !VAR_13->hdev)

  return VAR_2;

 if (!FUNC_7(VAR_0, &(VAR_13->hw_state)))
  return VAR_1;

 VAR_14 = VAR_13->p_dev->resource[0]->start;

 FUNC_5(&(VAR_13->lock));


 VAR_13->ctrl_reg &= ~VAR_7;
 FUNC_3(VAR_13->ctrl_reg, VAR_14 + VAR_6);

 VAR_15 = FUNC_2(VAR_14 + VAR_8);

 if ((VAR_15 != 0x00) && (VAR_15 != 0xff)) {

  if (VAR_15 & 0x04) {
   FUNC_0(VAR_13, 0x00);
   FUNC_3(0x04, VAR_14 + VAR_8);
   FUNC_3(VAR_4, VAR_14 + VAR_3);
  }

  if (VAR_15 & 0x08) {
   FUNC_0(VAR_13, 0x10);
   FUNC_3(0x08, VAR_14 + VAR_8);
   FUNC_3(VAR_5, VAR_14 + VAR_3);
  }

  if (VAR_15 & 0x01) {
   FUNC_4(VAR_9, &(VAR_13->tx_state));
   FUNC_3(0x01, VAR_14 + VAR_8);
   FUNC_1(VAR_13);
  }

  if (VAR_15 & 0x02) {
   FUNC_4(VAR_10, &(VAR_13->tx_state));
   FUNC_3(0x02, VAR_14 + VAR_8);
   FUNC_1(VAR_13);
  }

 }


 VAR_13->ctrl_reg |= VAR_7;
 FUNC_3(VAR_13->ctrl_reg, VAR_14 + VAR_6);

 FUNC_6(&(VAR_13->lock));

 return VAR_1;
}
