
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct radeon_encoder_atom_dig {TYPE_2__* pin; int afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct cea_sad {scalar_t__ const format; int channels; int freq; int byte2; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (scalar_t__ const**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__ const,int) ;
 struct radeon_encoder* FUNC_6 (struct drm_encoder*) ;

void FUNC_7(struct drm_encoder *VAR_0,
         struct cea_sad *VAR_1, int VAR_2)
{
 int VAR_3;
 struct radeon_encoder *VAR_4 = FUNC_6(VAR_0);
 struct radeon_encoder_atom_dig *VAR_5 = VAR_4->enc_priv;
 struct radeon_device *VAR_6 = VAR_0->dev->dev_private;
 static const u16 VAR_7[][2] = {
  { 151, 129 },
  { 150, 138 },
  { 146, 131 },
  { 145, 132 },
  { 144, 130 },
  { 143, 139 },
  { 142, 136 },
  { 141, 137 },
  { 140, 134 },
  { 149, 135 },
  { 148, 133 },
  { 147, 128 },
 };

 if (!VAR_5 || !VAR_5->afmt || !VAR_5->pin)
  return;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_7); VAR_3++) {
  u32 VAR_8 = 0;
  u8 VAR_9 = 0;
  int VAR_10 = -1;
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   struct cea_sad *VAR_12 = &VAR_1[VAR_11];

   if (VAR_12->format == VAR_7[VAR_3][1]) {
    if (VAR_12->channels > VAR_10) {
     VAR_8 = FUNC_2(VAR_12->channels) |
      FUNC_1(VAR_12->byte2) |
      FUNC_3(VAR_12->freq);
     VAR_10 = VAR_12->channels;
    }

    if (VAR_12->format == 129)
     VAR_9 |= VAR_12->freq;
    else
     break;
   }
  }

  VAR_8 |= FUNC_4(VAR_9);

  FUNC_5(VAR_5->pin->offset, VAR_7[VAR_3][0], VAR_8);
 }
}
