
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_3,
  uint16_t VAR_4, uint32_t VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->adev;

 FUNC_3(VAR_3);

 FUNC_0(VAR_0, 0, VAR_2, 0);

 FUNC_0(VAR_0, 0, VAR_1, VAR_5);

 FUNC_2(VAR_3, VAR_4);


 if (FUNC_3(VAR_3) == 0)
  FUNC_1("Failed to send Message %x.\n", VAR_4);

 return 0;
}
