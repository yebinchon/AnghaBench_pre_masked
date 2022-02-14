
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int crq; int csq; } ;
struct hns_roce_v2_priv {TYPE_1__ cmq; } ;
struct hns_roce_dev {scalar_t__ priv; } ;


 int FUNC_0 (struct hns_roce_dev*,int *) ;

__attribute__((used)) static void FUNC_1(struct hns_roce_dev *VAR_0)
{
 struct hns_roce_v2_priv *VAR_1 = (struct hns_roce_v2_priv *)VAR_0->priv;

 FUNC_0(VAR_0, &VAR_1->cmq.csq);
 FUNC_0(VAR_0, &VAR_1->cmq.crq);
}
