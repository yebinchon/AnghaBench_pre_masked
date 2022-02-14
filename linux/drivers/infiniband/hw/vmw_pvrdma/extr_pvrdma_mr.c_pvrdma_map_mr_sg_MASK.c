
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct pvrdma_user_mr {scalar_t__ npages; } ;
struct pvrdma_dev {TYPE_1__* pdev; } ;
struct ib_mr {int device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ib_mr*,struct scatterlist*,int,unsigned int*,int ) ;
 int VAR_0 ;
 struct pvrdma_dev* FUNC_2 (int ) ;
 struct pvrdma_user_mr* FUNC_3 (struct ib_mr*) ;

int FUNC_4(struct ib_mr *VAR_1, struct scatterlist *VAR_2, int VAR_3,
       unsigned int *VAR_4)
{
 struct pvrdma_user_mr *VAR_5 = FUNC_3(VAR_1);
 struct pvrdma_dev *VAR_6 = FUNC_2(VAR_1->device);
 int VAR_7;

 VAR_5->npages = 0;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0);
 if (VAR_7 < 0)
  FUNC_0(&VAR_6->pdev->dev, "could not map sg to pages\n");

 return VAR_7;
}
