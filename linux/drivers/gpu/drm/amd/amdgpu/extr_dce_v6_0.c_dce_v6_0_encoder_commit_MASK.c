
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_encoder*,int ) ;
 int FUNC_1 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_1)
{

 struct drm_device *VAR_2 = VAR_1->dev;
 struct amdgpu_device *VAR_3 = VAR_2->dev_private;


 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_3, 0);
}
