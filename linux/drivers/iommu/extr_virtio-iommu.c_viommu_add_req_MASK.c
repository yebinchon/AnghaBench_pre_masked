
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viommu_dev {int request_lock; int dev; } ;


 int FUNC_0 (struct viommu_dev*,void*,size_t,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct viommu_dev *VAR_0, void *VAR_1, size_t VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_0->request_lock, VAR_4);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, 0);
 if (VAR_3)
  FUNC_1(VAR_0->dev, "could not add request: %d\n", VAR_3);
 FUNC_3(&VAR_0->request_lock, VAR_4);

 return VAR_3;
}
