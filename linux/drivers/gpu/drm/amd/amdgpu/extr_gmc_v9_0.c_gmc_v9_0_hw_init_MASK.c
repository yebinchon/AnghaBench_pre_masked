
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num_crtc; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_5)
{
 int VAR_6;
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_5;


 FUNC_2(VAR_7);

 if (VAR_7->mode_info.num_crtc) {

  FUNC_0(VAR_0, 0, VAR_1, VAR_2, 1);


  FUNC_0(VAR_0, 0, VAR_3, VAR_4, 0);
 }

 VAR_6 = FUNC_1(VAR_7);

 return VAR_6;
}
