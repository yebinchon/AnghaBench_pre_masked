
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct amdgpu_iv_entry {scalar_t__ client_id; scalar_t__ src_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct amdgpu_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int devfn; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int ,int ,int ) ;

int FUNC_4(struct amdgpu_device *VAR_6,
      struct amdgpu_irq_src *VAR_7,
      struct amdgpu_iv_entry *VAR_8)
{
 uint32_t VAR_9 = VAR_8->client_id;
 uint32_t VAR_10 = VAR_8->src_id;

 if (VAR_9 == VAR_0) {
  if (VAR_10 == VAR_4)
   FUNC_3("GPU over temperature range detected on PCIe %d:%d.%d!\n",
      FUNC_0(VAR_6->pdev->devfn),
      FUNC_2(VAR_6->pdev->devfn),
      FUNC_1(VAR_6->pdev->devfn));
  else if (VAR_10 == VAR_3)
   FUNC_3("GPU under temperature range detected on PCIe %d:%d.%d!\n",
     FUNC_0(VAR_6->pdev->devfn),
     FUNC_2(VAR_6->pdev->devfn),
     FUNC_1(VAR_6->pdev->devfn));
  else if (VAR_10 == VAR_5)
   FUNC_3("GPU Critical Temperature Fault detected on PCIe %d:%d.%d!\n",
     FUNC_0(VAR_6->pdev->devfn),
     FUNC_2(VAR_6->pdev->devfn),
     FUNC_1(VAR_6->pdev->devfn));
 } else if (VAR_9 == VAR_2) {
  if (VAR_10 == 0)
   FUNC_3("GPU over temperature range detected on PCIe %d:%d.%d!\n",
      FUNC_0(VAR_6->pdev->devfn),
      FUNC_2(VAR_6->pdev->devfn),
      FUNC_1(VAR_6->pdev->devfn));
  else
   FUNC_3("GPU under temperature range detected on PCIe %d:%d.%d!\n",
     FUNC_0(VAR_6->pdev->devfn),
     FUNC_2(VAR_6->pdev->devfn),
     FUNC_1(VAR_6->pdev->devfn));
 } else if (VAR_9 == VAR_1)
  FUNC_3("GPU Critical Temperature Fault detected on PCIe %d:%d.%d!\n",
    FUNC_0(VAR_6->pdev->devfn),
    FUNC_2(VAR_6->pdev->devfn),
    FUNC_1(VAR_6->pdev->devfn));

 return 0;
}
