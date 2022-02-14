
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct hns_roce_v2_cmq_ring {int next_to_use; int desc_num; int lock; struct hns_roce_cmq_desc* desc; } ;
struct TYPE_2__ {scalar_t__ tx_timeout; scalar_t__ last_status; struct hns_roce_v2_cmq_ring csq; } ;
struct hns_roce_v2_priv {TYPE_1__ cmq; } ;
struct hns_roce_dev {int dev; scalar_t__ priv; } ;
struct hns_roce_cmq_desc {int retval; int flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct hns_roce_dev*) ;
 scalar_t__ FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_v2_cmq_ring*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hns_roce_dev*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct hns_roce_dev *VAR_6,
          struct hns_roce_cmq_desc *VAR_7, int VAR_8)
{
 struct hns_roce_v2_priv *VAR_9 = (struct hns_roce_v2_priv *)VAR_6->priv;
 struct hns_roce_v2_cmq_ring *VAR_10 = &VAR_9->cmq.csq;
 struct hns_roce_cmq_desc *VAR_11;
 bool VAR_12 = 0;
 u32 VAR_13 = 0;
 int VAR_14 = 0;
 u16 VAR_15;
 int VAR_16 = 0;
 int VAR_17;

 FUNC_7(&VAR_10->lock);

 if (VAR_8 > FUNC_4(VAR_10)) {
  FUNC_8(&VAR_10->lock);
  return -VAR_2;
 }





 VAR_17 = VAR_10->next_to_use;

 while (VAR_14 < VAR_8) {
  VAR_11 = &VAR_10->desc[VAR_10->next_to_use];
  *VAR_11 = VAR_7[VAR_14];
  FUNC_0(VAR_6->dev, "set cmq desc:\n");
  VAR_10->next_to_use++;
  if (VAR_10->next_to_use == VAR_10->desc_num)
   VAR_10->next_to_use = 0;
  VAR_14++;
 }


 FUNC_6(VAR_6, VAR_5, VAR_10->next_to_use);





 if (FUNC_5(VAR_7->flag) & VAR_4) {
  do {
   if (FUNC_3(VAR_6))
    break;
   FUNC_9(1);
   VAR_13++;
  } while (VAR_13 < VAR_9->cmq.tx_timeout);
 }

 if (FUNC_3(VAR_6)) {
  VAR_12 = 1;
  VAR_14 = 0;
  while (VAR_14 < VAR_8) {

   VAR_11 = &VAR_10->desc[VAR_17];
   VAR_7[VAR_14] = *VAR_11;
   FUNC_0(VAR_6->dev, "Get cmq desc:\n");
   VAR_15 = FUNC_5(VAR_7[VAR_14].retval);
   if (VAR_15 == VAR_0)
    VAR_16 = 0;
   else
    VAR_16 = -VAR_3;
   VAR_9->cmq.last_status = VAR_15;
   VAR_17++;
   VAR_14++;
   if (VAR_17 == VAR_10->desc_num)
    VAR_17 = 0;
  }
 }

 if (!VAR_12)
  VAR_16 = -VAR_1;


 VAR_14 = FUNC_2(VAR_6);
 if (VAR_14 != VAR_8)
  FUNC_1(VAR_6->dev, "Cleaned %d, need to clean %d\n",
    VAR_14, VAR_8);

 FUNC_8(&VAR_10->lock);

 return VAR_16;
}
