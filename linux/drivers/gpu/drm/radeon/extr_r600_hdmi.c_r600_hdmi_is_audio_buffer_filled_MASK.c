
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_2(struct drm_encoder *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct radeon_device *VAR_3 = VAR_2->dev_private;
 struct radeon_encoder *VAR_4 = FUNC_1(VAR_1);
 struct radeon_encoder_atom_dig *VAR_5 = VAR_4->enc_priv;
 uint32_t VAR_6 = VAR_5->afmt->offset;

 return (FUNC_0(VAR_0 + VAR_6) & 0x10) != 0;
}
