
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct audio_params {int rate; int channels; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int FUNC_1 (struct audio_params*) ;

__attribute__((used)) static int
FUNC_2(uint16_t VAR_10, struct audio_params *VAR_11)
{
 uint8_t VAR_12 = 0;

 FUNC_1(VAR_11);


 VAR_11->rate = (VAR_10 & VAR_4) ? 44100 : 48000;

 switch (VAR_10 & VAR_9) {
 case 130:
  VAR_11->rate *= 2;
  break;
 case 129:
  VAR_11->rate *= 3;
  break;
 case 128:
  VAR_11->rate *= 4;
  break;
 }

 VAR_12 = (VAR_10 >> VAR_8) & VAR_7;
 VAR_11->rate /= (VAR_12 + 1);


 switch (VAR_10 & VAR_5) {
 case 131:
  VAR_11->format = VAR_3;
  break;
 case 134:
  VAR_11->format = VAR_0;
  break;
 case 133:
  VAR_11->format = VAR_1;
  break;
 case 132:
  VAR_11->format = VAR_2;
  break;
 default:
  FUNC_0("Unknown format bits: 0x%x\n",
      VAR_10 & VAR_5);
  return (-1);
 }


 VAR_11->channels = (VAR_10 & VAR_6) + 1;

 return (0);
}
