
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct pp_hwmgr *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_5->adev;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, 0, VAR_4);

 VAR_7 = (VAR_7 & VAR_0) >>
   VAR_1;

 VAR_7 = VAR_7 & 0x1ff;

 VAR_7 *= VAR_2;

 return VAR_7;
}
