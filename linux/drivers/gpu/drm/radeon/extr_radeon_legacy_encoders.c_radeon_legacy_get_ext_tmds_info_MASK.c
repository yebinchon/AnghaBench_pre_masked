
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_ext_tmds {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {scalar_t__ is_atom_bios; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 struct radeon_encoder_ext_tmds* FUNC_0 (int,int ) ;
 int FUNC_1 (struct radeon_encoder*,struct radeon_encoder_ext_tmds*) ;
 int FUNC_2 (struct radeon_encoder*,struct radeon_encoder_ext_tmds*) ;

__attribute__((used)) static struct radeon_encoder_ext_tmds *FUNC_3(struct radeon_encoder *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct radeon_device *VAR_3 = VAR_2->dev_private;
 struct radeon_encoder_ext_tmds *VAR_4 = ((void*)0);
 bool VAR_5;

 if (VAR_3->is_atom_bios)
  return ((void*)0);

 VAR_4 = FUNC_0(sizeof(struct radeon_encoder_ext_tmds), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_1, VAR_4);

 if (VAR_5 == 0)
  FUNC_2(VAR_1, VAR_4);

 return VAR_4;
}
