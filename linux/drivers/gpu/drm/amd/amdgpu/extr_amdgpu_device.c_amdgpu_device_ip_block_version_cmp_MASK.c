
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct amdgpu_ip_block {TYPE_1__* version; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amd_ip_block_type { ____Placeholder_amd_ip_block_type } amd_ip_block_type ;
struct TYPE_2__ {scalar_t__ major; scalar_t__ minor; } ;


 struct amdgpu_ip_block* FUNC_0 (struct amdgpu_device*,int) ;

int FUNC_1(struct amdgpu_device *VAR_0,
           enum amd_ip_block_type VAR_1,
           u32 VAR_2, u32 VAR_3)
{
 struct amdgpu_ip_block *VAR_4 = FUNC_0(VAR_0, VAR_1);

 if (VAR_4 && ((VAR_4->version->major > VAR_2) ||
   ((VAR_4->version->major == VAR_2) &&
   (VAR_4->version->minor >= VAR_3))))
  return 0;

 return 1;
}
