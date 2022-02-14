
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_hpd; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef enum amdgpu_hpd_id { ____Placeholder_amdgpu_hpd_id } amdgpu_hpd_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_4,
          enum amdgpu_hpd_id VAR_5)
{
 u32 VAR_6;
 bool VAR_7 = FUNC_3(VAR_4, VAR_5);

 if (VAR_5 >= VAR_4->mode_info.num_hpd)
  return;

 VAR_6 = FUNC_1(VAR_3 + VAR_2[VAR_5]);
 if (VAR_7)
  VAR_6 = FUNC_0(VAR_6, VAR_0, VAR_1, 0);
 else
  VAR_6 = FUNC_0(VAR_6, VAR_0, VAR_1, 1);
 FUNC_2(VAR_3 + VAR_2[VAR_5], VAR_6);
}
