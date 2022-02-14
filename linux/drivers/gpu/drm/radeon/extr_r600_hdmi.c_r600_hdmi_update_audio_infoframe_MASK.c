
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u8 ;
struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int const) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_2,
          const void *VAR_3, size_t VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 struct radeon_encoder *VAR_7 = FUNC_1(VAR_2);
 struct radeon_encoder_atom_dig *VAR_8 = VAR_7->enc_priv;
 uint32_t VAR_9 = VAR_8->afmt->offset;
 const u8 *VAR_10 = VAR_3 + 3;

 FUNC_0(VAR_0 + VAR_9,
  VAR_10[0x0] | (VAR_10[0x1] << 8) | (VAR_10[0x2] << 16) | (VAR_10[0x3] << 24));
 FUNC_0(VAR_1 + VAR_9,
  VAR_10[0x4] | (VAR_10[0x5] << 8) | (VAR_10[0x6] << 16) | (VAR_10[0x8] << 24));
}
