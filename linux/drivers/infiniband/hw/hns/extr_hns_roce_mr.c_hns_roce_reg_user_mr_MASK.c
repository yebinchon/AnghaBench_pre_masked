
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_mr {int lkey; int rkey; } ;
struct hns_roce_mr {int umem; struct ib_mr ibmr; int key; int type; } ;
struct TYPE_3__ {int pbl_hop_num; int pbl_ba_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int,...) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_mr*,int ) ;
 int FUNC_5 (struct hns_roce_dev*,int ,int,int,int,int,struct hns_roce_mr*) ;
 int FUNC_6 (struct hns_roce_dev*,struct hns_roce_mr*) ;
 int FUNC_7 (struct hns_roce_dev*,struct hns_roce_mr*) ;
 int FUNC_8 (struct ib_udata*,int,int,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct hns_roce_mr*) ;
 struct hns_roce_mr* FUNC_12 (int,int ) ;
 struct hns_roce_dev* FUNC_13 (int ) ;
 TYPE_2__* FUNC_14 (struct ib_pd*) ;

struct ib_mr *FUNC_15(struct ib_pd *VAR_7, u64 VAR_8, u64 VAR_9,
       u64 VAR_10, int VAR_11,
       struct ib_udata *VAR_12)
{
 struct hns_roce_dev *VAR_13 = FUNC_13(VAR_7->device);
 struct device *VAR_14 = VAR_13->dev;
 struct hns_roce_mr *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_15 = FUNC_12(sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return FUNC_0(-VAR_2);

 VAR_15->umem = FUNC_8(VAR_12, VAR_8, VAR_9, VAR_11, 0);
 if (FUNC_1(VAR_15->umem)) {
  VAR_17 = FUNC_2(VAR_15->umem);
  goto err_free;
 }

 VAR_18 = FUNC_9(VAR_15->umem);

 if (!VAR_13->caps.pbl_hop_num) {
  if (VAR_18 > VAR_4) {
   FUNC_3(VAR_14,
        " MR len %lld err. MR is limited to 4G at most!\n",
        VAR_9);
   VAR_17 = -VAR_1;
   goto err_umem;
  }
 } else {
  u64 VAR_20 = 1;

  VAR_16 = (1 << (VAR_13->caps.pbl_ba_pg_sz + VAR_6)) /
     VAR_0;
  for (VAR_19 = 0; VAR_19 < VAR_13->caps.pbl_hop_num; VAR_19++)
   VAR_20 *= VAR_16;
  if (VAR_18 > VAR_20) {
   FUNC_3(VAR_14,
       " MR len %lld err. MR page num is limited to %lld!\n",
       VAR_9, VAR_20);
   VAR_17 = -VAR_1;
   goto err_umem;
  }
 }

 VAR_15->type = VAR_5;

 VAR_17 = FUNC_5(VAR_13, FUNC_14(VAR_7)->pdn, VAR_10, VAR_9,
    VAR_11, VAR_18, VAR_15);
 if (VAR_17)
  goto err_umem;

 VAR_17 = FUNC_4(VAR_13, VAR_15, VAR_15->umem);
 if (VAR_17)
  goto err_mr;

 VAR_17 = FUNC_6(VAR_13, VAR_15);
 if (VAR_17)
  goto err_mr;

 VAR_15->ibmr.rkey = VAR_15->ibmr.lkey = VAR_15->key;

 return &VAR_15->ibmr;

err_mr:
 FUNC_7(VAR_13, VAR_15);

err_umem:
 FUNC_10(VAR_15->umem);

err_free:
 FUNC_11(VAR_15);
 return FUNC_0(VAR_17);
}
