
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u32 ;
struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_encoder*) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

void FUNC_3(struct drm_encoder *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct radeon_device *VAR_4 = VAR_3->dev_private;
 struct radeon_encoder *VAR_5 = FUNC_2(VAR_2);
 struct radeon_encoder_atom_dig *VAR_6 = VAR_5->enc_priv;
 uint32_t VAR_7 = VAR_6->afmt->offset;
 bool VAR_8 = 0;
 u32 VAR_9;

 if (!VAR_8 ||
     FUNC_1(VAR_2))
  VAR_9 = 0;
 else
  VAR_9 = VAR_1;
 FUNC_0(VAR_0 + VAR_7,
   VAR_9, ~VAR_1);
}
