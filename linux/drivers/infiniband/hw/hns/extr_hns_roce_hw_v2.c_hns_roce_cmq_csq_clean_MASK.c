
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct hns_roce_v2_cmq_ring {size_t next_to_clean; size_t desc_num; struct hns_roce_cmq_desc* desc; } ;
struct TYPE_2__ {struct hns_roce_v2_cmq_ring csq; } ;
struct hns_roce_v2_priv {TYPE_1__ cmq; } ;
struct hns_roce_dev {scalar_t__ priv; } ;
struct hns_roce_cmq_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_cmq_desc*,int ,int) ;
 size_t FUNC_1 (struct hns_roce_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_v2_priv *VAR_2 = (struct hns_roce_v2_priv *)VAR_1->priv;
 struct hns_roce_v2_cmq_ring *VAR_3 = &VAR_2->cmq.csq;
 struct hns_roce_cmq_desc *VAR_4;
 u16 VAR_5 = VAR_3->next_to_clean;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_4 = &VAR_3->desc[VAR_5];
 VAR_6 = FUNC_1(VAR_1, VAR_0);
 while (VAR_6 != VAR_5) {
  FUNC_0(VAR_4, 0, sizeof(*VAR_4));
  VAR_5++;
  if (VAR_5 == VAR_3->desc_num)
   VAR_5 = 0;
  VAR_4 = &VAR_3->desc[VAR_5];
  VAR_7++;
 }
 VAR_3->next_to_clean = VAR_5;

 return VAR_7;
}
