
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_hpd; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef enum amdgpu_hpd_id { ____Placeholder_amdgpu_hpd_id } amdgpu_hpd_id ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct amdgpu_device *VAR_3,
          enum amdgpu_hpd_id VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_4 >= VAR_3->mode_info.num_hpd)
  return VAR_5;

 if (FUNC_0(VAR_2 + VAR_1[VAR_4]) & VAR_0)
  VAR_5 = 1;

 return VAR_5;
}
