
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_encoder {int encoder_id; int pixel_clock; } ;
struct TYPE_4__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef int args ;
struct TYPE_5__ {int ucAction; int usPixelClock; int ucDacStandard; } ;
typedef TYPE_2__ DAC_ENCODER_CONTROL_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 struct amdgpu_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_5(struct drm_encoder *VAR_4, int VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;
 struct amdgpu_encoder *VAR_8 = FUNC_4(VAR_4);
 DAC_ENCODER_CONTROL_PS_ALLOCATION VAR_9;
 int VAR_10 = 0;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));

 switch (VAR_8->encoder_id) {
 case 131:
 case 129:
  VAR_10 = FUNC_0(VAR_1, VAR_2);
  break;
 case 130:
 case 128:
  VAR_10 = FUNC_0(VAR_1, VAR_3);
  break;
 }

 VAR_9.ucAction = VAR_5;
 VAR_9.ucDacStandard = VAR_0;
 VAR_9.usPixelClock = FUNC_2(VAR_8->pixel_clock / 10);

 FUNC_1(VAR_7->mode_info.atom_context, VAR_10, (uint32_t *)&VAR_9);

}
