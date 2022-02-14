
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_5, uint32_t VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_5->adev;

 FUNC_2(VAR_2, 0, VAR_4,
   FUNC_0(FUNC_1(VAR_2, 0, VAR_4),
    VAR_0, VAR_3, 0));
 FUNC_2(VAR_2, 0, VAR_4,
   FUNC_0(FUNC_1(VAR_2, 0, VAR_4),
    VAR_0, VAR_1, VAR_6));

 return 0;
}
