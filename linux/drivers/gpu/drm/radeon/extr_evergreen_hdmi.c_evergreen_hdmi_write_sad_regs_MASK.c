
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct radeon_device {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct cea_sad {scalar_t__ const format; int channels; int freq; int byte2; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (scalar_t__ const**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__ const,int) ;

void FUNC_6(struct drm_encoder *VAR_0,
 struct cea_sad *VAR_1, int VAR_2)
{
 int VAR_3;
 struct radeon_device *VAR_4 = VAR_0->dev->dev_private;
 static const u16 VAR_5[][2] = {
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

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_5); VAR_3++) {
  u32 VAR_6 = 0;
  u8 VAR_7 = 0;
  int VAR_8 = -1;
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   struct cea_sad *VAR_10 = &VAR_1[VAR_9];

   if (VAR_10->format == VAR_5[VAR_3][1]) {
    if (VAR_10->channels > VAR_8) {
     VAR_6 = FUNC_2(VAR_10->channels) |
      FUNC_1(VAR_10->byte2) |
      FUNC_3(VAR_10->freq);
     VAR_8 = VAR_10->channels;
    }

    if (VAR_10->format == 129)
     VAR_7 |= VAR_10->freq;
    else
     break;
   }
  }

  VAR_6 |= FUNC_4(VAR_7);

  FUNC_5(0, VAR_5[VAR_3][0], VAR_6);
 }
}
