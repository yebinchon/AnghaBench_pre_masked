
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


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;


 int FUNC_3 (char*,scalar_t__,int ,int ,...) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_1,
     struct amdgpu_irq_src *VAR_2,
     struct amdgpu_iv_entry *VAR_3)
{
 uint32_t VAR_4 = VAR_3->client_id;
 uint32_t VAR_5 = VAR_3->src_id;

 if (VAR_4 == VAR_0) {
  switch (VAR_5) {
  case 128:
   FUNC_3("GPU over temperature range detected on PCIe %d:%d.%d!\n",
    FUNC_0(VAR_1->pdev->devfn),
    FUNC_2(VAR_1->pdev->devfn),
    FUNC_1(VAR_1->pdev->devfn));
  break;
  case 129:
   FUNC_3("GPU under temperature range detected on PCIe %d:%d.%d!\n",
    FUNC_0(VAR_1->pdev->devfn),
    FUNC_2(VAR_1->pdev->devfn),
    FUNC_1(VAR_1->pdev->devfn));
  break;
  default:
   FUNC_3("GPU under temperature range unknown src id (%d), detected on PCIe %d:%d.%d!\n",
    VAR_5,
    FUNC_0(VAR_1->pdev->devfn),
    FUNC_2(VAR_1->pdev->devfn),
    FUNC_1(VAR_1->pdev->devfn));
  break;

  }
 }

 return 0;
}
