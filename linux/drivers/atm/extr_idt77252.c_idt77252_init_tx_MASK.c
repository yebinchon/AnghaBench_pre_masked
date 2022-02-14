
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vc_map {int class; size_t scd_index; int index; int flags; struct atm_vcc* tx_vcc; TYPE_2__* scq; } ;
struct idt77252_dev {int ** scd2vc; int name; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_5__ {int traffic_class; } ;
struct atm_qos {TYPE_1__ txtp; } ;
struct TYPE_6__ {scalar_t__ scd; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_0 (struct idt77252_dev*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct idt77252_dev*,TYPE_2__*,int) ;
 int FUNC_3 (struct idt77252_dev*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct idt77252_dev*,struct vc_map*) ;
 int FUNC_5 (struct idt77252_dev*,struct vc_map*,struct atm_vcc*,struct atm_qos*) ;
 int FUNC_6 (struct idt77252_dev*,struct vc_map*,struct atm_vcc*,struct atm_qos*) ;
 int FUNC_7 (char*,int ,...) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (struct idt77252_dev*,struct vc_map*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static int
FUNC_12(struct idt77252_dev *VAR_7, struct vc_map *VAR_8,
   struct atm_vcc *VAR_9, struct atm_qos *VAR_10)
{
 int VAR_11;

 if (FUNC_10(VAR_6, &VAR_8->flags))
  return -VAR_0;

 switch (VAR_10->txtp.traffic_class) {
  case 132:
   VAR_8->class = 129;
   break;

  case 131:
   VAR_8->class = 128;
   break;

  case 130:
  case 133:
  default:
   return -VAR_2;
 }

 VAR_8->scq = FUNC_0(VAR_7, VAR_8->class);
 if (!VAR_8->scq) {
  FUNC_7("%s: can't get SCQ.\n", VAR_7->name);
  return -VAR_1;
 }

 VAR_8->scq->scd = FUNC_4(VAR_7, VAR_8);
 if (VAR_8->scq->scd == 0) {
  FUNC_7("%s: no SCD available.\n", VAR_7->name);
  FUNC_3(VAR_7, VAR_8->scq);
  return -VAR_1;
 }

 FUNC_2(VAR_7, VAR_8->scq, VAR_8->class);

 if (FUNC_9(VAR_7, VAR_8)) {
  FUNC_7("%s: class %d not supported.\n",
         VAR_7->name, VAR_10->txtp.traffic_class);

  VAR_7->scd2vc[VAR_8->scd_index] = ((void*)0);
  FUNC_3(VAR_7, VAR_8->scq);
  return -VAR_2;
 }

 switch (VAR_8->class) {
  case 129:
   VAR_11 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10);
   if (VAR_11) {
    VAR_7->scd2vc[VAR_8->scd_index] = ((void*)0);
    FUNC_3(VAR_7, VAR_8->scq);
    return VAR_11;
   }

   FUNC_1(VAR_5, &VAR_8->flags);
   FUNC_11(VAR_4 | VAR_8->index, VAR_3);
   break;

  case 128:
   VAR_11 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10);
   if (VAR_11) {
    VAR_7->scd2vc[VAR_8->scd_index] = ((void*)0);
    FUNC_3(VAR_7, VAR_8->scq);
    return VAR_11;
   }

   FUNC_8(VAR_5, &VAR_8->flags);
   break;
 }

 VAR_8->tx_vcc = VAR_9;
 FUNC_8(VAR_6, &VAR_8->flags);
 return 0;
}
