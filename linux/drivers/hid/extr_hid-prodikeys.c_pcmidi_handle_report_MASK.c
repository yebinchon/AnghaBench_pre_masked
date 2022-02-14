
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcmidi_snd {int dummy; } ;


 int FUNC_0 (struct pcmidi_snd*,int *) ;
 int FUNC_1 (struct pcmidi_snd*,int *,int) ;
 int FUNC_2 (struct pcmidi_snd*,int *) ;

__attribute__((used)) static int FUNC_3(
 struct pcmidi_snd *VAR_0, unsigned VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_1) {
 case 0x01:
  VAR_4 = FUNC_0(VAR_0, VAR_2);
  break;
 case 0x03:
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
  break;
 case 0x04:
  VAR_4 = FUNC_2(VAR_0, VAR_2);
  break;
 }
 return VAR_4;
}
