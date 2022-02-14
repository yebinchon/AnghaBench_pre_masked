
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pcmidi_snd {int midi_octave; int midi_sustain_mode; scalar_t__ midi_mode; } ;


 int FUNC_0 (char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_1(struct pcmidi_snd *VAR_0, u8 *VAR_1)
{
 u32 VAR_2;

 VAR_2 = VAR_1[1];
 VAR_2 = (VAR_2 << 8) | VAR_1[2];
 VAR_2 = (VAR_2 << 8) | VAR_1[3];

 FUNC_0("pcmidi mode: %d\n", VAR_0->midi_mode);


 if (VAR_0->midi_mode && VAR_2 == 0x004000) {

  VAR_0->midi_octave--;
  if (VAR_0->midi_octave < -2)
   VAR_0->midi_octave = -2;
  FUNC_0("pcmidi mode: %d octave: %d\n",
   VAR_0->midi_mode, VAR_0->midi_octave);
  return 1;
 }

 else if (VAR_0->midi_mode && VAR_2 == 0x000004) {

  VAR_0->midi_sustain_mode ^= 0x1;
  return 1;
 }

 return 0;
}
