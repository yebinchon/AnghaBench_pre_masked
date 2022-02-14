
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pp_hwmgr {scalar_t__ adev; } ;
struct amdgpu_device {int dev; } ;







 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct pp_hwmgr*,int,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct pp_hwmgr *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3,
           u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)(VAR_0->adev);
 u32 VAR_8;
 bool VAR_9 = 1;

 switch (VAR_1) {
 case 128:
  FUNC_1(VAR_2, VAR_5 << VAR_4);
  break;
 case 130:
  VAR_8 = FUNC_0(VAR_2);
  VAR_8 = (VAR_8 & (~VAR_3)) | (VAR_5 << VAR_4);
  FUNC_1(VAR_2, VAR_8);
  break;
 case 129:
  VAR_9 = FUNC_2(VAR_0, VAR_2, VAR_3, VAR_5);
  break;
 case 132:
  if (VAR_6)

   FUNC_4(VAR_6);
  break;
 case 131:
  if (VAR_6)

   FUNC_5(VAR_6);
  break;

 default:
  FUNC_3(VAR_7->dev, "Invalid BACO command.\n");
  VAR_9 = 0;
 }

 return VAR_9;
}
