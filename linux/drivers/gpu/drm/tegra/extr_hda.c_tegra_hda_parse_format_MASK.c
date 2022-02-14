
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_hda_format {int pcm; int sample_rate; int bits; unsigned int channels; } ;


 unsigned int VAR_0 ;





 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int,char*,unsigned int) ;

void FUNC_1(unsigned int VAR_10, struct tegra_hda_format *VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_10 & VAR_9)
  VAR_11->pcm = 0;
 else
  VAR_11->pcm = 1;

 if (VAR_10 & VAR_0)
  VAR_11->sample_rate = 44100;
 else
  VAR_11->sample_rate = 48000;

 VAR_12 = (VAR_10 & VAR_7) >> VAR_8;
 VAR_13 = (VAR_10 & VAR_5) >> VAR_6;

 VAR_11->sample_rate *= (VAR_12 + 1) / (VAR_13 + 1);

 switch (VAR_10 & VAR_1) {
 case 128:
  VAR_11->bits = 8;
  break;

 case 132:
  VAR_11->bits = 16;
  break;

 case 131:
  VAR_11->bits = 20;
  break;

 case 130:
  VAR_11->bits = 24;
  break;

 case 129:
  VAR_11->bits = 32;
  break;

 default:
  VAR_14 = (VAR_10 & VAR_1) >> VAR_2;
  FUNC_0(1, "invalid number of bits: %#x\n", VAR_14);
  VAR_11->bits = 8;
  break;
 }

 VAR_15 = (VAR_10 & VAR_3) >> VAR_4;


 VAR_11->channels = VAR_15 + 1;
}
