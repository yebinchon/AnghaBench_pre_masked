
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_atom_dig {scalar_t__ dig_encoder; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int encoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 struct radeon_encoder* FUNC_1 (int ) ;

void FUNC_2(struct radeon_device *VAR_5,
        struct radeon_crtc *VAR_6, unsigned int VAR_7)
{
 struct radeon_encoder *VAR_8;
 struct radeon_encoder_atom_dig *VAR_9;

 if (!VAR_6)
  return;

 VAR_8 = FUNC_1(VAR_6->encoder);
 VAR_9 = VAR_8->enc_priv;

 if (!VAR_9)
  return;

 if (VAR_9->dig_encoder == 0) {
  FUNC_0(VAR_1, 24000 * 100);
  FUNC_0(VAR_0, VAR_7 * 100);
  FUNC_0(VAR_4, 0);
 } else {
  FUNC_0(VAR_3, 24000 * 100);
  FUNC_0(VAR_2, VAR_7 * 100);
  FUNC_0(VAR_4, 1);
 }
}
