
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {scalar_t__ is_atom_bios; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_encoder*,int) ;
 int FUNC_4 (struct drm_encoder*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_3, int VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 uint32_t VAR_7 = FUNC_1(VAR_1);
 FUNC_0("\n");

 switch (VAR_4) {
 case 130:
  VAR_7 |= (VAR_0 | VAR_2);
  break;
 case 129:
 case 128:
 case 131:
  VAR_7 &= ~(VAR_0 | VAR_2);
  break;
 }

 FUNC_2(VAR_1, VAR_7);

 if (VAR_6->is_atom_bios)
  FUNC_3(VAR_3, (VAR_4 == 130) ? 1 : 0);
 else
  FUNC_4(VAR_3, (VAR_4 == 130) ? 1 : 0);

}
