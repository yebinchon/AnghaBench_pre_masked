
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_cq_init_attr {int comp_vector; int cqe; } ;
struct ib_cq {int device; } ;
struct hns_roce_ib_create_cq_resp {int cqn; } ;
struct TYPE_4__ {int max_cqes; scalar_t__ min_cqes; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct TYPE_6__ {int hr_mtt; } ;
struct TYPE_5__ {int cqe; } ;
struct hns_roce_cq {int cq_depth; int cqn; int event; int comp; scalar_t__* tptr_addr; TYPE_3__ hr_buf; int lock; TYPE_2__ ib_cq; } ;
struct device {int dummy; } ;
typedef int resp ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_cq*,int) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_cq*,struct ib_udata*,struct hns_roce_ib_create_cq_resp*,int) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_cq*) ;
 int FUNC_3 (struct hns_roce_dev*,struct hns_roce_cq*,struct ib_udata*,struct hns_roce_ib_create_cq_resp*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct hns_roce_dev*,int,int *,struct hns_roce_cq*,int) ;
 int FUNC_6 (struct hns_roce_dev*,struct hns_roce_cq*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct ib_udata*,struct hns_roce_ib_create_cq_resp*,int) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int *) ;
 struct hns_roce_cq* FUNC_11 (struct ib_cq*) ;
 struct hns_roce_dev* FUNC_12 (int ) ;

int FUNC_13(struct ib_cq *VAR_3,
     const struct ib_cq_init_attr *VAR_4,
     struct ib_udata *VAR_5)
{
 struct hns_roce_dev *VAR_6 = FUNC_12(VAR_3->device);
 struct device *VAR_7 = VAR_6->dev;
 struct hns_roce_ib_create_cq_resp VAR_8 = {};
 struct hns_roce_cq *VAR_9 = FUNC_11(VAR_3);
 int VAR_10 = VAR_4->comp_vector;
 int VAR_11 = VAR_4->cqe;
 int VAR_12;

 if (VAR_11 < 1 || VAR_11 > VAR_6->caps.max_cqes) {
  FUNC_4(VAR_7, "Creat CQ failed. entries=%d, max=%d\n",
   VAR_11, VAR_6->caps.max_cqes);
  return -VAR_0;
 }

 if (VAR_6->caps.min_cqes)
  VAR_11 = FUNC_8(VAR_11, VAR_6->caps.min_cqes);

 VAR_11 = FUNC_9((unsigned int)VAR_11);
 VAR_9->ib_cq.cqe = VAR_11 - 1;
 FUNC_10(&VAR_9->lock);

 if (VAR_5) {
  VAR_12 = FUNC_1(VAR_6, VAR_9, VAR_5, &VAR_8, VAR_11);
  if (VAR_12) {
   FUNC_4(VAR_7, "Create cq failed in user mode!\n");
   goto err_cq;
  }
 } else {
  VAR_12 = FUNC_0(VAR_6, VAR_9, VAR_11);
  if (VAR_12) {
   FUNC_4(VAR_7, "Create cq failed in kernel mode!\n");
   goto err_cq;
  }
 }


 VAR_12 = FUNC_5(VAR_6, VAR_11, &VAR_9->hr_buf.hr_mtt,
    VAR_9, VAR_10);
 if (VAR_12) {
  FUNC_4(VAR_7, "Creat CQ .Failed to cq_alloc.\n");
  goto err_dbmap;
 }







 if (!VAR_5 && VAR_9->tptr_addr)
  *VAR_9->tptr_addr = 0;


 VAR_9->comp = VAR_1;
 VAR_9->event = VAR_2;
 VAR_9->cq_depth = VAR_11;

 if (VAR_5) {
  VAR_8.cqn = VAR_9->cqn;
  VAR_12 = FUNC_7(VAR_5, &VAR_8, sizeof(VAR_8));
  if (VAR_12)
   goto err_cqc;
 }

 return 0;

err_cqc:
 FUNC_6(VAR_6, VAR_9);

err_dbmap:
 if (VAR_5)
  FUNC_3(VAR_6, VAR_9, VAR_5, &VAR_8);
 else
  FUNC_2(VAR_6, VAR_9);

err_cq:
 return VAR_12;
}
