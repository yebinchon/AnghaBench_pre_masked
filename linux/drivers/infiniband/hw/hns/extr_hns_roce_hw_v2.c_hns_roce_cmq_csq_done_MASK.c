
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ next_to_use; } ;
struct TYPE_4__ {TYPE_1__ csq; } ;
struct hns_roce_v2_priv {TYPE_2__ cmq; } ;
struct hns_roce_dev {scalar_t__ priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hns_roce_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_v2_priv *VAR_2 = (struct hns_roce_v2_priv *)VAR_1->priv;
 u32 VAR_3 = FUNC_0(VAR_1, VAR_0);

 return VAR_3 == VAR_2->cmq.csq.next_to_use;
}
