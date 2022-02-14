
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {scalar_t__ state; int entry; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zpci_dev*) ;
 int FUNC_5 (struct zpci_dev*) ;
 int FUNC_6 (struct zpci_dev*) ;
 int FUNC_7 (struct zpci_dev*) ;
 int FUNC_8 (struct zpci_dev*) ;
 int FUNC_9 (struct zpci_dev*) ;
 int FUNC_10 (struct zpci_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct zpci_dev*) ;

int FUNC_12(struct zpci_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5)
  goto out_free;

 FUNC_1(&VAR_4->lock);
 if (VAR_4->state == VAR_0) {
  VAR_5 = FUNC_7(VAR_4);
  if (VAR_5)
   goto out_destroy_iommu;
 }
 VAR_5 = FUNC_11(VAR_4);
 if (VAR_5)
  goto out_disable;

 FUNC_2(&VAR_3);
 FUNC_0(&VAR_4->entry, &VAR_2);
 FUNC_3(&VAR_3);

 FUNC_10(VAR_4);

 return 0;

out_disable:
 if (VAR_4->state == VAR_1)
  FUNC_6(VAR_4);
out_destroy_iommu:
 FUNC_5(VAR_4);
out_free:
 FUNC_8(VAR_4);
out:
 return VAR_5;
}
