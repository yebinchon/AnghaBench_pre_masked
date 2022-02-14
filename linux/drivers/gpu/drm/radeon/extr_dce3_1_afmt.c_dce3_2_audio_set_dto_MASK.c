
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_encoder_atom_dig {scalar_t__ dig_encoder; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int encoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct radeon_encoder* FUNC_3 (int ) ;

void FUNC_4(struct radeon_device *VAR_8,
 struct radeon_crtc *VAR_9, unsigned int VAR_10)
{
 struct radeon_encoder *VAR_11;
 struct radeon_encoder_atom_dig *VAR_12;
 unsigned int VAR_13 = VAR_10 / 24000;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;

 if (!VAR_9)
  return;

 VAR_11 = FUNC_3(VAR_9->encoder);
 VAR_12 = VAR_11->enc_priv;

 if (!VAR_12)
  return;

 if (VAR_13 >= 8) {
  VAR_14 = 192 * 1000;
  VAR_15 = 3;
 } else if (VAR_13 >= 4) {
  VAR_14 = 96 * 1000;
  VAR_15 = 2;
 } else if (VAR_13 >= 2) {
  VAR_14 = 48 * 1000;
  VAR_15 = 1;
 } else {
  VAR_14 = 24 * 1000;
  VAR_15 = 0;
 }





 if (VAR_12->dig_encoder == 0) {
  VAR_16 = FUNC_1(VAR_0) & ~VAR_7;
  VAR_16 |= FUNC_0(VAR_15);
  FUNC_2(VAR_0, VAR_16);
  FUNC_2(VAR_2, VAR_14);
  FUNC_2(VAR_1, VAR_10);
  FUNC_2(VAR_6, 0);
 } else {
  VAR_16 = FUNC_1(VAR_3) & ~VAR_7;
  VAR_16 |= FUNC_0(VAR_15);
  FUNC_2(VAR_3, VAR_16);
  FUNC_2(VAR_5, VAR_14);
  FUNC_2(VAR_4, VAR_10);
  FUNC_2(VAR_6, 1);
 }
}
