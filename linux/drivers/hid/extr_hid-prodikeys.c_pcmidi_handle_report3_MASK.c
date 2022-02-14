
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct pcmidi_sustain {int in_use; unsigned char status; unsigned char note; unsigned char velocity; int timer; } ;
struct pcmidi_snd {int midi_channel; int midi_octave; int midi_sustain; struct pcmidi_sustain* sustained_notes; scalar_t__ midi_sustain_mode; } ;


 unsigned char VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pcmidi_snd*,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct pcmidi_snd *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct pcmidi_sustain *VAR_6;
 unsigned VAR_7, VAR_8;
 unsigned char VAR_9, VAR_10, VAR_11;

 unsigned VAR_12 = (VAR_5-1)/2;
 for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++) {
  VAR_10 = VAR_4[VAR_8*2+1];
  VAR_11 = VAR_4[VAR_8*2+2];

  if (VAR_10 < 0x81) {
   VAR_9 = 128 + 16 + VAR_3->midi_channel;
   VAR_10 = VAR_10 - 0x54 + VAR_0 +
    (VAR_3->midi_octave * 12);
   if (0 == VAR_11)
    VAR_11 = 1;
  } else {
   VAR_9 = 128 + VAR_3->midi_channel;
   VAR_10 = VAR_10 - 0x94 + VAR_0 +
    (VAR_3->midi_octave*12);

   if (VAR_3->midi_sustain_mode) {
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
     VAR_6 = &VAR_3->sustained_notes[VAR_7];
     if (!VAR_6->in_use) {
      VAR_6->status = VAR_9;
      VAR_6->note = VAR_10;
      VAR_6->velocity = VAR_11;
      VAR_6->in_use = 1;

      FUNC_0(&VAR_6->timer,
       VAR_2 +
     FUNC_1(VAR_3->midi_sustain));
      return 1;
     }
    }
   }
  }
  FUNC_2(VAR_3, VAR_9, VAR_10, VAR_11);
 }

 return 1;
}
