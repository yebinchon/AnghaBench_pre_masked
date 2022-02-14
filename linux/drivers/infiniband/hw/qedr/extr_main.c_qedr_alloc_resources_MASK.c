
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct regpair {int dummy; } ;
struct qedr_dev {int num_cnq; struct qedr_cnq* sgid_tbl; struct qedr_cnq* sb_array; struct qedr_cnq* cnq_array; scalar_t__ sb_start; int cdev; TYPE_3__* ops; int pdev; int iwarp_wq; int qps; int sgid_lock; } ;
struct qedr_cnq {int index; int pbl; int name; int * hw_cons_ptr; TYPE_1__* sb_virt; struct qedr_cnq* sb; struct qedr_dev* dev; } ;
typedef int __le16 ;
struct TYPE_6__ {TYPE_2__* common; scalar_t__ (* rdma_get_start_sb ) (int ) ;} ;
struct TYPE_5__ {int (* chain_alloc ) (int ,int ,int ,int ,int ,int,int *,int *) ;int (* chain_free ) (int ,int *) ;} ;
struct TYPE_4__ {int * pi_array; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct qedr_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct qedr_cnq*) ;
 int FUNC_5 (int ,int ,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct qedr_dev*,struct qedr_cnq*,scalar_t__) ;
 int FUNC_9 (struct qedr_dev*,struct qedr_cnq*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,char*,int,char*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ,int ,int ,int,int *,int *) ;
 int FUNC_14 (int ,int *) ;
 int VAR_11 ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static int FUNC_16(struct qedr_dev *VAR_12)
{
 struct qedr_cnq *VAR_13;
 __le16 *VAR_14;
 u16 VAR_15;
 int VAR_16, VAR_17;

 VAR_12->sgid_tbl = FUNC_3(VAR_2, sizeof(union ib_gid),
    VAR_1);
 if (!VAR_12->sgid_tbl)
  return -VAR_0;

 FUNC_10(&VAR_12->sgid_lock);

 if (FUNC_1(VAR_12)) {
  FUNC_15(&VAR_12->qps, VAR_10);
  VAR_12->iwarp_wq = FUNC_2("qedr_iwarpq");
 }


 VAR_12->sb_array = FUNC_3(VAR_12->num_cnq, sizeof(*VAR_12->sb_array),
    VAR_1);
 if (!VAR_12->sb_array) {
  VAR_17 = -VAR_0;
  goto err1;
 }

 VAR_12->cnq_array = FUNC_3(VAR_12->num_cnq,
     sizeof(*VAR_12->cnq_array), VAR_1);
 if (!VAR_12->cnq_array) {
  VAR_17 = -VAR_0;
  goto err2;
 }

 VAR_12->sb_start = VAR_12->ops->rdma_get_start_sb(VAR_12->cdev);


 VAR_15 = FUNC_5(VAR_11, VAR_8, VAR_4);
 for (VAR_16 = 0; VAR_16 < VAR_12->num_cnq; VAR_16++) {
  VAR_13 = &VAR_12->cnq_array[VAR_16];

  VAR_17 = FUNC_8(VAR_12, &VAR_12->sb_array[VAR_16],
           VAR_12->sb_start + VAR_16);
  if (VAR_17)
   goto err3;

  VAR_17 = VAR_12->ops->common->chain_alloc(VAR_12->cdev,
         VAR_7,
         VAR_6,
         VAR_5,
         VAR_15,
         sizeof(struct regpair *),
         &VAR_13->pbl, ((void*)0));
  if (VAR_17)
   goto err4;

  VAR_13->dev = VAR_12;
  VAR_13->sb = &VAR_12->sb_array[VAR_16];
  VAR_14 = VAR_12->sb_array[VAR_16].sb_virt->pi_array;
  VAR_13->hw_cons_ptr = &VAR_14[VAR_9];
  VAR_13->index = VAR_16;
  FUNC_11(VAR_13->name, "qedr%d@pci:%s", VAR_16, FUNC_6(VAR_12->pdev));

  FUNC_0(VAR_12, VAR_3, "cnq[%d].cons=%d\n",
    VAR_16, FUNC_7(&VAR_13->pbl));
 }

 return 0;
err4:
 FUNC_9(VAR_12, &VAR_12->sb_array[VAR_16], VAR_12->sb_start + VAR_16);
err3:
 for (--VAR_16; VAR_16 >= 0; VAR_16--) {
  VAR_12->ops->common->chain_free(VAR_12->cdev, &VAR_12->cnq_array[VAR_16].pbl);
  FUNC_9(VAR_12, &VAR_12->sb_array[VAR_16], VAR_12->sb_start + VAR_16);
 }
 FUNC_4(VAR_12->cnq_array);
err2:
 FUNC_4(VAR_12->sb_array);
err1:
 FUNC_4(VAR_12->sgid_tbl);
 return VAR_17;
}
