
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viommu_dev {int request_lock; int dev; } ;


 int FUNC_0 (struct viommu_dev*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct viommu_dev *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_2(&VAR_0->request_lock, VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_1(VAR_0->dev, "could not sync requests (%d)\n", VAR_1);
 FUNC_3(&VAR_0->request_lock, VAR_2);

 return VAR_1;
}
