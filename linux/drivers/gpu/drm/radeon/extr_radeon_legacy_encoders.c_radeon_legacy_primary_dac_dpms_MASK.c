
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int flags; scalar_t__ is_atom_bios; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_encoder*,int) ;
 int FUNC_4 (struct drm_encoder*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_9, int VAR_10)
{
 struct drm_device *VAR_11 = VAR_9->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 uint32_t VAR_13 = FUNC_1(VAR_1);
 uint32_t VAR_14 = FUNC_1(VAR_2);
 uint32_t VAR_15 = FUNC_1(VAR_3);

 FUNC_0("\n");

 switch (VAR_10) {
 case 130:
  VAR_13 |= VAR_0;
  VAR_14 &= ~VAR_4;
  VAR_15 &= ~(VAR_7 |
        VAR_6 |
        VAR_5);
  break;
 case 129:
 case 128:
 case 131:
  VAR_13 &= ~VAR_0;
  VAR_14 |= VAR_4;
  VAR_15 |= (VAR_7 |
       VAR_6 |
       VAR_5);
  break;
 }


 if (!(VAR_12->flags & VAR_8))
  FUNC_2(VAR_1, VAR_13);
 FUNC_2(VAR_2, VAR_14);
 FUNC_2(VAR_3, VAR_15);

 if (VAR_12->is_atom_bios)
  FUNC_3(VAR_9, (VAR_10 == 130) ? 1 : 0);
 else
  FUNC_4(VAR_9, (VAR_10 == 130) ? 1 : 0);

}
