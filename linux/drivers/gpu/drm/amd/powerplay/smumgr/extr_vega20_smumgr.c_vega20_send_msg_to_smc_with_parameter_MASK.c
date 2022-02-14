
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct pp_hwmgr {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;
 int FUNC_3 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_5,
  uint16_t VAR_6, uint32_t VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_5->adev;
 int VAR_9 = 0;

 FUNC_3(VAR_5);

 FUNC_0(VAR_1, 0, VAR_4, 0);

 FUNC_0(VAR_1, 0, VAR_3, VAR_7);

 FUNC_2(VAR_5, VAR_6);

 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9 != VAR_2)
  FUNC_1("Failed to send message 0x%x, response 0x%x\n", VAR_6, VAR_9);

 return (VAR_9 == VAR_2) ? 0 : -VAR_0;
}
