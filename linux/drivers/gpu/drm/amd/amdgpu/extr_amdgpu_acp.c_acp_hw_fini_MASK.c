
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct TYPE_5__ {TYPE_3__* acp_cell; TYPE_3__* acp_genpd; TYPE_3__* acp_res; int parent; int cgs_device; } ;
struct amdgpu_device {TYPE_2__ acp; TYPE_1__* pdev; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct device*,char*) ;
 struct device* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(void *VAR_11)
{
 int VAR_12, VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;
 struct device *VAR_16;
 struct amdgpu_device *VAR_17 = (struct amdgpu_device *)VAR_11;


 if (!VAR_17->acp.acp_genpd) {
  FUNC_0(VAR_17, VAR_6, 0);
  return 0;
 }


 VAR_14 = FUNC_1(VAR_17->acp.cgs_device, VAR_9);

 VAR_14 |= VAR_5;
 FUNC_2(VAR_17->acp.cgs_device, VAR_9, VAR_14);

 VAR_15 = VAR_3;
 while (1) {
  VAR_14 = FUNC_1(VAR_17->acp.cgs_device, VAR_9);
  if (VAR_4 ==
      (VAR_14 & VAR_4))
   break;
  if (--VAR_15 == 0) {
   FUNC_3(&VAR_17->pdev->dev, "Failed to reset ACP\n");
   return -VAR_7;
  }
  FUNC_8(100);
 }

 VAR_14 = FUNC_1(VAR_17->acp.cgs_device, VAR_8);
 VAR_14 &= ~VAR_1;
 FUNC_2(VAR_17->acp.cgs_device, VAR_8, VAR_14);

 VAR_15 = VAR_0;

 while (1) {
  VAR_14 = FUNC_1(VAR_17->acp.cgs_device, VAR_10);
  if (VAR_14 & (u32) 0x1)
   break;
  if (--VAR_15 == 0) {
   FUNC_3(&VAR_17->pdev->dev, "Failed to reset ACP\n");
   return -VAR_7;
  }
  FUNC_8(100);
 }

 for (VAR_12 = 0; VAR_12 < VAR_2 ; VAR_12++) {
  VAR_16 = FUNC_4(VAR_17->acp.acp_cell[VAR_12].name, VAR_12);
  VAR_13 = FUNC_7(VAR_16);

  if (VAR_13)
   FUNC_3(VAR_16, "remove dev from genpd failed\n");
 }

 FUNC_6(VAR_17->acp.parent);
 FUNC_5(VAR_17->acp.acp_res);
 FUNC_5(VAR_17->acp.acp_genpd);
 FUNC_5(VAR_17->acp.acp_cell);

 return 0;
}
