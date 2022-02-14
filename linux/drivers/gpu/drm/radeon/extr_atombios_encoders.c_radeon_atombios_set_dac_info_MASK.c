
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_atom_dac {int tv_std; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 struct radeon_encoder_atom_dac* FUNC_0 (int,int ) ;
 int FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static struct radeon_encoder_atom_dac *
FUNC_2(struct radeon_encoder *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct radeon_device *VAR_3 = VAR_2->dev_private;
 struct radeon_encoder_atom_dac *VAR_4 = FUNC_0(sizeof(struct radeon_encoder_atom_dac), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_4->tv_std = FUNC_1(VAR_3);
 return VAR_4;
}
