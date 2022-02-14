
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_lanes; } ;
struct cdn_dp_device {scalar_t__ regs; TYPE_1__ link; } ;
struct audio_info {int channels; int sample_width; int sample_rate; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct cdn_dp_device *VAR_12,
        struct audio_info *VAR_13)
{
 int VAR_14 = 1, VAR_15 = 0xf, VAR_16;
 u32 VAR_17;

 if (VAR_13->channels == 2) {
  if (VAR_12->link.num_lanes == 1)
   VAR_14 = 2;
  else
   VAR_14 = 4;

  VAR_15 = 1;
 } else if (VAR_13->channels == 4) {
  VAR_15 = 3;
 }

 FUNC_8(0x0, VAR_12->regs + VAR_9);

 FUNC_8(VAR_10, VAR_12->regs + VAR_4);

 VAR_17 = FUNC_3(VAR_13->channels);
 VAR_17 |= FUNC_4(VAR_13->channels);
 VAR_17 |= VAR_2;
 VAR_17 |= FUNC_1(VAR_14);
 FUNC_8(VAR_17, VAR_12->regs + VAR_6);

 if (VAR_13->sample_width == 16)
  VAR_17 = 0;
 else if (VAR_13->sample_width == 24)
  VAR_17 = 1 << 9;
 else
  VAR_17 = 2 << 9;

 VAR_17 |= FUNC_0(VAR_13->channels);
 VAR_17 |= FUNC_2(VAR_15);
 VAR_17 |= VAR_11;
 FUNC_8(VAR_17, VAR_12->regs + VAR_0);

 for (VAR_16 = 0; VAR_16 < (VAR_13->channels + 1) / 2; VAR_16++) {
  if (VAR_13->sample_width == 16)
   VAR_17 = (0x02 << 8) | (0x02 << 20);
  else if (VAR_13->sample_width == 24)
   VAR_17 = (0x0b << 8) | (0x0b << 20);

  VAR_17 |= ((2 * VAR_16) << 4) | ((2 * VAR_16 + 1) << 16);
  FUNC_8(VAR_17, VAR_12->regs + FUNC_7(VAR_16));
 }

 switch (VAR_13->sample_rate) {
 case 32000:
  VAR_17 = FUNC_6(3) |
        FUNC_5(0xc);
  break;
 case 44100:
  VAR_17 = FUNC_6(0) |
        FUNC_5(0xf);
  break;
 case 48000:
  VAR_17 = FUNC_6(2) |
        FUNC_5(0xd);
  break;
 case 88200:
  VAR_17 = FUNC_6(8) |
        FUNC_5(0x7);
  break;
 case 96000:
  VAR_17 = FUNC_6(0xa) |
        FUNC_5(5);
  break;
 case 176400:
  VAR_17 = FUNC_6(0xc) |
        FUNC_5(3);
  break;
 case 192000:
  VAR_17 = FUNC_6(0xe) |
        FUNC_5(1);
  break;
 }
 VAR_17 |= 4;
 FUNC_8(VAR_17, VAR_12->regs + VAR_3);

 FUNC_8(VAR_8, VAR_12->regs + VAR_7);
 FUNC_8(VAR_5, VAR_12->regs + VAR_1);
}
