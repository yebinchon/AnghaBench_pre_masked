
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_mr {int lkey; int rkey; } ;
struct hns_roce_mr {struct ib_mr ibmr; int * umem; int key; int type; } ;
struct TYPE_3__ {int pbl_buf_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;
struct TYPE_4__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct hns_roce_dev*,int ,int ,int,int ,int,struct hns_roce_mr*) ;
 int FUNC_3 (struct hns_roce_dev*,struct hns_roce_mr*) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_mr*) ;
 int FUNC_5 (struct hns_roce_mr*) ;
 struct hns_roce_mr* FUNC_6 (int,int ) ;
 struct hns_roce_dev* FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (struct ib_pd*) ;

struct ib_mr *FUNC_9(struct ib_pd *VAR_7, enum ib_mr_type VAR_8,
    u32 VAR_9, struct ib_udata *VAR_10)
{
 struct hns_roce_dev *VAR_11 = FUNC_7(VAR_7->device);
 struct device *VAR_12 = VAR_11->dev;
 struct hns_roce_mr *VAR_13;
 u64 VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_15 = 1 << (VAR_11->caps.pbl_buf_pg_sz + VAR_6);
 VAR_14 = VAR_9 * VAR_15;

 if (VAR_8 != VAR_4)
  return FUNC_0(-VAR_0);

 if (VAR_9 > VAR_3) {
  FUNC_1(VAR_12, "max_num_sg larger than %d\n",
   VAR_3);
  return FUNC_0(-VAR_0);
 }

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return FUNC_0(-VAR_1);

 VAR_13->type = VAR_5;


 VAR_16 = FUNC_2(VAR_11, FUNC_8(VAR_7)->pdn, 0, VAR_14,
    0, VAR_9, VAR_13);
 if (VAR_16)
  goto err_free;

 VAR_16 = FUNC_3(VAR_11, VAR_13);
 if (VAR_16)
  goto err_mr;

 VAR_13->ibmr.rkey = VAR_13->ibmr.lkey = VAR_13->key;
 VAR_13->umem = ((void*)0);

 return &VAR_13->ibmr;

err_mr:
 FUNC_4(FUNC_7(VAR_7->device), VAR_13);

err_free:
 FUNC_5(VAR_13);
 return FUNC_0(VAR_16);
}
