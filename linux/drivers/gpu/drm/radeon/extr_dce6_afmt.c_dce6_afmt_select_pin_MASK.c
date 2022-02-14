
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_encoder_atom_dig {TYPE_2__* pin; TYPE_3__* afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_6__ {scalar_t__ offset; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

void FUNC_3(struct drm_encoder *VAR_1)
{
 struct radeon_device *VAR_2 = VAR_1->dev->dev_private;
 struct radeon_encoder *VAR_3 = FUNC_2(VAR_1);
 struct radeon_encoder_atom_dig *VAR_4 = VAR_3->enc_priv;

 if (!VAR_4 || !VAR_4->afmt || !VAR_4->pin)
  return;

 FUNC_1(VAR_0 + VAR_4->afmt->offset,
        FUNC_0(VAR_4->pin->id));
}
