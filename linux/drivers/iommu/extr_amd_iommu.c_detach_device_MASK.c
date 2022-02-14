
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct protection_domain {int flags; int lock; } ;
struct TYPE_2__ {int enabled; } ;
struct iommu_dev_data {int lock; TYPE_1__ ats; scalar_t__ iommu_v2; struct protection_domain* domain; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct iommu_dev_data*) ;
 struct iommu_dev_data* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static void FUNC_11(struct device *VAR_1)
{
 struct protection_domain *VAR_2;
 struct iommu_dev_data *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 VAR_2 = VAR_3->domain;

 FUNC_7(&VAR_2->lock, VAR_4);

 FUNC_6(&VAR_3->lock);







 if (FUNC_0(!VAR_3->domain))
  goto out;

 FUNC_2(VAR_3);

 if (!FUNC_1(VAR_1))
  goto out;

 if (VAR_2->flags & VAR_0 && VAR_3->iommu_v2)
  FUNC_5(FUNC_10(VAR_1));
 else if (VAR_3->ats.enabled)
  FUNC_4(FUNC_10(VAR_1));

 VAR_3->ats.enabled = 0;

out:
 FUNC_8(&VAR_3->lock);

 FUNC_9(&VAR_2->lock, VAR_4);
}
