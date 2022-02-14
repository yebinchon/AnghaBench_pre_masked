
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_6->adev;
 uint32_t VAR_8 = FUNC_0(VAR_1, 0, VAR_5);
 int VAR_9 =
  (VAR_8 & VAR_2) >> VAR_4;

 if (VAR_9 & VAR_3)
  VAR_9 = ((VAR_9 / 8) - 49) * VAR_0;
 else
  VAR_9 = (VAR_9 / 8) * VAR_0;

 return VAR_9;
}
