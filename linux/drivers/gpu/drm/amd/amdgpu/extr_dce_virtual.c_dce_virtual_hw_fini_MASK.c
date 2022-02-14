
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_crtc; scalar_t__* crtcs; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_3<VAR_2->mode_info.num_crtc; VAR_3++)
  if (VAR_2->mode_info.crtcs[VAR_3])
   FUNC_0(VAR_2, VAR_3, VAR_0);

 return 0;
}
