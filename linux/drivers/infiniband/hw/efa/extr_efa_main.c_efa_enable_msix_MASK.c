
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_dev {TYPE_1__* pdev; int admin_msix_vector_idx; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct efa_dev *VAR_4)
{
 int VAR_5, VAR_6;


 VAR_5 = VAR_1;
 FUNC_0(&VAR_4->pdev->dev, "Trying to enable MSI-X, vectors %d\n",
  VAR_5);

 VAR_4->admin_msix_vector_idx = VAR_0;
 VAR_6 = FUNC_2(VAR_4->pdev, VAR_5,
     VAR_5, VAR_3);

 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->pdev->dev, "Failed to enable MSI-X. irq_num %d\n",
   VAR_6);
  return -VAR_2;
 }

 if (VAR_6 != VAR_5) {
  FUNC_1(&VAR_4->pdev->dev,
   "Allocated %d MSI-X (out of %d requested)\n",
   VAR_6, VAR_5);
  return -VAR_2;
 }

 return 0;
}
