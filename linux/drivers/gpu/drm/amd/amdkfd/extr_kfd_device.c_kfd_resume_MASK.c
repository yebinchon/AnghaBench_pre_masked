
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kfd_dev {TYPE_1__* pdev; TYPE_3__* dqm; } ;
struct TYPE_5__ {int (* start ) (TYPE_3__*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int device; int vendor; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct kfd_dev*) ;
 int FUNC_2 (struct kfd_dev*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct kfd_dev *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_0,
   "Failed to resume IOMMU for device %x:%x\n",
   VAR_1->pdev->vendor, VAR_1->pdev->device);
  return VAR_2;
 }

 VAR_2 = VAR_1->dqm->ops.start(VAR_1->dqm);
 if (VAR_2) {
  FUNC_0(VAR_0,
   "Error starting queue manager for device %x:%x\n",
   VAR_1->pdev->vendor, VAR_1->pdev->device);
  goto dqm_start_error;
 }

 return VAR_2;

dqm_start_error:
 FUNC_2(VAR_1);
 return VAR_2;
}
