
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct radeon_encoder_atom_dig {TYPE_1__* pin; int afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {TYPE_2__* dev; } ;
struct TYPE_4__ {struct radeon_device* dev_private; } ;
struct TYPE_3__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 struct radeon_encoder* FUNC_3 (struct drm_encoder*) ;

void FUNC_4(struct drm_encoder *VAR_4,
        u8 *VAR_5, int VAR_6)
{
 struct radeon_device *VAR_7 = VAR_4->dev->dev_private;
 struct radeon_encoder *VAR_8 = FUNC_3(VAR_4);
 struct radeon_encoder_atom_dig *VAR_9 = VAR_8->enc_priv;
 u32 VAR_10;

 if (!VAR_9 || !VAR_9->afmt || !VAR_9->pin)
  return;


 VAR_10 = FUNC_0(VAR_9->pin->offset,
         VAR_0);
 VAR_10 &= ~(VAR_2 | VAR_3);

 VAR_10 |= VAR_1;
 if (VAR_6)
  VAR_10 |= FUNC_1(VAR_5[0]);
 else
  VAR_10 |= FUNC_1(5);
 FUNC_2(VAR_9->pin->offset,
   VAR_0, VAR_10);
}
