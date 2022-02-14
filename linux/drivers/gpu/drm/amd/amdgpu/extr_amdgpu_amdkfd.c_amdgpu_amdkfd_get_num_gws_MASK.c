
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_2__ {int gws_size; } ;
struct amdgpu_device {TYPE_1__ gds; } ;



uint32_t FUNC_0(struct kgd_dev *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 return VAR_1->gds.gws_size;
}
