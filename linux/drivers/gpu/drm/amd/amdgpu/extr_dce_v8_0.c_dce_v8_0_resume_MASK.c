
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ bl_encoder; int bl_level; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*,scalar_t__) ;
 int FUNC_2 (struct amdgpu_device*,scalar_t__,int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 int VAR_2;

 FUNC_0(VAR_1,
          VAR_1->mode_info.bl_level);

 VAR_2 = FUNC_3(VAR_0);


 if (VAR_1->mode_info.bl_encoder) {
  u8 VAR_3 = FUNC_1(VAR_1,
          VAR_1->mode_info.bl_encoder);
  FUNC_2(VAR_1, VAR_1->mode_info.bl_encoder,
          VAR_3);
 }

 return VAR_2;
}
