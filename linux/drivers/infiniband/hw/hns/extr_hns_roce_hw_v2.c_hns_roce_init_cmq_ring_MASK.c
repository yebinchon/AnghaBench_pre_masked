
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_v2_cmq_ring {int flag; scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct TYPE_2__ {struct hns_roce_v2_cmq_ring crq; struct hns_roce_v2_cmq_ring csq; } ;
struct hns_roce_v2_priv {TYPE_1__ cmq; } ;
struct hns_roce_dev {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_v2_cmq_ring*) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_1, bool VAR_2)
{
 struct hns_roce_v2_priv *VAR_3 = (struct hns_roce_v2_priv *)VAR_1->priv;
 struct hns_roce_v2_cmq_ring *VAR_4 = (VAR_2 == VAR_0) ?
         &VAR_3->cmq.csq : &VAR_3->cmq.crq;

 VAR_4->flag = VAR_2;
 VAR_4->next_to_clean = 0;
 VAR_4->next_to_use = 0;

 return FUNC_0(VAR_1, VAR_4);
}
