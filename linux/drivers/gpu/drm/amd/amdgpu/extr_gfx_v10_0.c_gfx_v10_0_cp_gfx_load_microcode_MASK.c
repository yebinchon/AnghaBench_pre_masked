
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ce_fw; int pfp_fw; int me_fw; } ;
struct amdgpu_device {int dev; TYPE_1__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 if (!VAR_1->gfx.me_fw || !VAR_1->gfx.pfp_fw || !VAR_1->gfx.ce_fw)
  return -VAR_0;

 FUNC_1(VAR_1, 0);

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "(%d) failed to load pfp fw\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "(%d) failed to load ce fw\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "(%d) failed to load me fw\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
