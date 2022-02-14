
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dev; } ;
struct r600_audio_pin {int channels; int bits_per_sample; int rate; int status_bits; int category_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static struct r600_audio_pin FUNC_2(struct radeon_device *VAR_2)
{
 struct r600_audio_pin VAR_3 = {};
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_0);


 VAR_3.channels = (VAR_4 & 0x7) + 1;


 switch ((VAR_4 & 0xF0) >> 4) {
 case 0x0:
  VAR_3.bits_per_sample = 8;
  break;
 case 0x1:
  VAR_3.bits_per_sample = 16;
  break;
 case 0x2:
  VAR_3.bits_per_sample = 20;
  break;
 case 0x3:
  VAR_3.bits_per_sample = 24;
  break;
 case 0x4:
  VAR_3.bits_per_sample = 32;
  break;
 default:
  FUNC_1(VAR_2->dev, "Unknown bits per sample 0x%x, using 16\n",
   (int)VAR_4);
  VAR_3.bits_per_sample = 16;
 }


 if (VAR_4 & 0x4000)
  VAR_3.rate = 44100;
 else
  VAR_3.rate = 48000;
 VAR_3.rate *= ((VAR_4 >> 11) & 0x7) + 1;
 VAR_3.rate /= ((VAR_4 >> 8) & 0x7) + 1;

 VAR_4 = FUNC_0(VAR_1);


 VAR_3.status_bits = VAR_4 & 0xff;


 VAR_3.category_code = (VAR_4 >> 8) & 0xff;

 return VAR_3;
}
