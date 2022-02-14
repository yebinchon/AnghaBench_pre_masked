
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_query_version {int rocee_hw_version; } ;
struct hns_roce_dev {TYPE_1__* pci_dev; int vendor_id; int hw_rev; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;
struct TYPE_2__ {int vendor; } ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_1 (struct hns_roce_cmq_desc*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_query_version *VAR_2;
 struct hns_roce_cmq_desc VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, VAR_0, 1);
 VAR_4 = FUNC_0(VAR_1, &VAR_3, 1);
 if (VAR_4)
  return VAR_4;

 VAR_2 = (struct hns_roce_query_version *)VAR_3.data;
 VAR_1->hw_rev = FUNC_2(VAR_2->rocee_hw_version);
 VAR_1->vendor_id = VAR_1->pci_dev->vendor;

 return 0;
}
