
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uresp ;
struct ib_udata {int dummy; } ;
struct ib_pd {struct ib_device* device; } ;
struct ib_device {int dummy; } ;
struct hns_roce_pd {int pdn; } ;
struct hns_roce_ib_alloc_pd_resp {int pdn; } ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct hns_roce_dev*,int *) ;
 int FUNC_2 (struct hns_roce_dev*,int ) ;
 scalar_t__ FUNC_3 (struct ib_udata*,struct hns_roce_ib_alloc_pd_resp*,int) ;
 struct hns_roce_dev* FUNC_4 (struct ib_device*) ;
 struct hns_roce_pd* FUNC_5 (struct ib_pd*) ;

int FUNC_6(struct ib_pd *VAR_1, struct ib_udata *VAR_2)
{
 struct ib_device *VAR_3 = VAR_1->device;
 struct hns_roce_dev *VAR_4 = FUNC_4(VAR_3);
 struct device *VAR_5 = VAR_4->dev;
 struct hns_roce_pd *VAR_6 = FUNC_5(VAR_1);
 int VAR_7;

 VAR_7 = FUNC_1(FUNC_4(VAR_3), &VAR_6->pdn);
 if (VAR_7) {
  FUNC_0(VAR_5, "[alloc_pd]hns_roce_pd_alloc failed!\n");
  return VAR_7;
 }

 if (VAR_2) {
  struct hns_roce_ib_alloc_pd_resp VAR_8 = {.pdn = VAR_6->pdn};

  if (FUNC_3(VAR_2, &VAR_8, sizeof(VAR_8))) {
   FUNC_2(FUNC_4(VAR_3), VAR_6->pdn);
   FUNC_0(VAR_5, "[alloc_pd]ib_copy_to_udata failed!\n");
   return -VAR_0;
  }
 }

 return 0;
}
