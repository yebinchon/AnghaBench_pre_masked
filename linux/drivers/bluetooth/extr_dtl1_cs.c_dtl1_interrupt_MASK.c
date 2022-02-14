
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dtl1_info {unsigned char ri_latch; int lock; int tx_state; TYPE_2__* p_dev; int hdev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dtl1_info*) ;
 int FUNC_3 (struct dtl1_info*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct dtl1_info *VAR_11 = VAR_10;
 unsigned int VAR_12;
 unsigned char VAR_13;
 int VAR_14 = 0;
 int VAR_15, VAR_16;
 irqreturn_t VAR_17 = VAR_1;

 if (!VAR_11 || !VAR_11->hdev)

  return VAR_1;

 VAR_12 = VAR_11->p_dev->resource[0]->start;

 FUNC_5(&(VAR_11->lock));

 VAR_15 = FUNC_4(VAR_12 + VAR_2) & VAR_3;
 while (VAR_15) {

  VAR_17 = VAR_0;

  VAR_16 = FUNC_4(VAR_12 + VAR_4);

  switch (VAR_15) {
  case 129:
   FUNC_0("RLSI");
   break;
  case 130:

   FUNC_2(VAR_11);
   break;
  case 128:
   if (VAR_16 & VAR_5) {

    FUNC_3(VAR_11);
   }
   break;
  default:
   FUNC_0("Unhandled IIR=%#x", VAR_15);
   break;
  }


  if (VAR_14++ > 100)
   break;

  VAR_15 = FUNC_4(VAR_12 + VAR_2) & VAR_3;

 }

 VAR_13 = FUNC_4(VAR_12 + VAR_6);

 if (VAR_11->ri_latch ^ (VAR_13 & VAR_7)) {
  VAR_11->ri_latch = VAR_13 & VAR_7;
  FUNC_1(VAR_8, &(VAR_11->tx_state));
  FUNC_3(VAR_11);
  VAR_17 = VAR_0;
 }

 FUNC_6(&(VAR_11->lock));

 return VAR_17;
}
