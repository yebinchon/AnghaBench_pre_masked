
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; int desc_num; } ;
struct TYPE_4__ {int lock; int desc_num; } ;
struct TYPE_5__ {TYPE_3__ csq; int tx_timeout; TYPE_1__ crq; } ;
struct hns_roce_v2_priv {TYPE_2__ cmq; } ;
struct hns_roce_dev {int dev; scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hns_roce_dev*,int ) ;
 int FUNC_2 (struct hns_roce_dev*,TYPE_3__*) ;
 int FUNC_3 (struct hns_roce_dev*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hns_roce_dev *VAR_5)
{
 struct hns_roce_v2_priv *VAR_6 = (struct hns_roce_v2_priv *)VAR_5->priv;
 int VAR_7;


 VAR_6->cmq.csq.desc_num = VAR_1;
 VAR_6->cmq.crq.desc_num = VAR_0;


 FUNC_4(&VAR_6->cmq.csq.lock);
 FUNC_4(&VAR_6->cmq.crq.lock);


 VAR_6->cmq.tx_timeout = VAR_2;


 VAR_7 = FUNC_3(VAR_5, VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_5->dev, "Init CSQ error, ret = %d.\n", VAR_7);
  return VAR_7;
 }


 VAR_7 = FUNC_3(VAR_5, VAR_3);
 if (VAR_7) {
  FUNC_0(VAR_5->dev, "Init CRQ error, ret = %d.\n", VAR_7);
  goto err_crq;
 }


 FUNC_1(VAR_5, VAR_4);


 FUNC_1(VAR_5, VAR_3);

 return 0;

err_crq:
 FUNC_2(VAR_5, &VAR_6->cmq.csq);

 return VAR_7;
}
