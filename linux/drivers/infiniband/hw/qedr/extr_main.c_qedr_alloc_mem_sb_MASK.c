
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct status_block_e4 {int dummy; } ;
struct qedr_dev {TYPE_1__* pdev; int cdev; TYPE_3__* ops; } ;
struct qed_sb_info {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {TYPE_2__* common; } ;
struct TYPE_5__ {int (* sb_init ) (int ,struct qed_sb_info*,struct status_block_e4*,int ,int ,int ) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct status_block_e4* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,struct status_block_e4*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct qed_sb_info*,struct status_block_e4*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct qedr_dev *VAR_3,
        struct qed_sb_info *VAR_4, u16 VAR_5)
{
 struct status_block_e4 *VAR_6;
 dma_addr_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(&VAR_3->pdev->dev,
         sizeof(*VAR_6), &VAR_7, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = VAR_3->ops->common->sb_init(VAR_3->cdev, VAR_4,
           VAR_6, VAR_7, VAR_5,
           VAR_2);
 if (VAR_8) {
  FUNC_2("Status block initialization failed\n");
  FUNC_1(&VAR_3->pdev->dev, sizeof(*VAR_6),
      VAR_6, VAR_7);
  return VAR_8;
 }

 return 0;
}
