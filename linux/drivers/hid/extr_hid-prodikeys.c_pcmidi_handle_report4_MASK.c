
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pcmidi_snd {unsigned int* last_key; int fn_state; int midi_mode; int midi_octave; int input_ep82; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int ,unsigned int,int) ;
 int FUNC_2 (struct pcmidi_snd*,int) ;

__attribute__((used)) static int FUNC_3(struct pcmidi_snd *VAR_20, u8 *VAR_21)
{
 unsigned VAR_22;
 u32 VAR_23;
 u32 VAR_24;

 VAR_23 = VAR_21[1];
 VAR_23 = (VAR_23 << 8) | VAR_21[2];
 VAR_23 = (VAR_23 << 8) | VAR_21[3];


 for (VAR_24 = 0; VAR_24 < 24; VAR_24++) {
  if (!((0x01 << VAR_24) & VAR_23)) {
   FUNC_1(VAR_20->input_ep82, VAR_0,
    VAR_20->last_key[VAR_24], 0);
   VAR_20->last_key[VAR_24] = 0;
  }
 }


 for (VAR_24 = 0; VAR_24 < 24; VAR_24++) {
  VAR_22 = 0;
  switch ((0x01 << VAR_24) & VAR_23) {
  case 0x000010:
   VAR_20->fn_state ^= 0x000010;
   if (VAR_20->fn_state)
    FUNC_2(VAR_20, 0xc5);
   else
    FUNC_2(VAR_20, 0xc6);
   continue;
  case 0x020000:
   FUNC_2(VAR_20, 0xc1);
   VAR_20->midi_mode ^= 0x01;

   FUNC_0("pcmidi mode: %d\n", VAR_20->midi_mode);
   continue;
  case 0x100000:
   FUNC_0("pcmidi mode: %d\n", VAR_20->midi_mode);
   if (VAR_20->midi_mode) {
    VAR_20->midi_octave++;
    if (VAR_20->midi_octave > 2)
     VAR_20->midi_octave = 2;
    FUNC_0("pcmidi mode: %d octave: %d\n",
     VAR_20->midi_mode, VAR_20->midi_octave);
    continue;
   } else
    VAR_22 = VAR_8;
   break;
  case 0x400000:
   VAR_22 = VAR_2;
   break;
  case 0x080000:
   VAR_22 = VAR_1;
   break;
  case 0x040000:
   VAR_22 = VAR_5;
   break;
  case 0x800000:
   VAR_22 = VAR_19;
   break;
  case 0x200000:
   VAR_22 = VAR_17;
   break;
  case 0x010000:
   VAR_22 = VAR_4;
   break;
  case 0x000100:
   VAR_22 = VAR_7;
   break;
  case 0x000200:
   VAR_22 = VAR_15;
   break;
  case 0x000400:
   VAR_22 = VAR_13;
   break;
  case 0x000800:
   VAR_22 = VAR_6;
   break;
  case 0x001000:
   VAR_22 = VAR_9;
   break;
  case 0x002000:
   VAR_22 = VAR_10;
   break;
  case 0x004000:
   VAR_22 = VAR_3;
   break;
  case 0x008000:
   VAR_22 = VAR_14;
   break;
  case 0x000001:
   VAR_22 = VAR_18;
   break;
  case 0x000002:
   VAR_22 = VAR_12;
   break;
  case 0x000004:
   VAR_22 = VAR_16;
   break;
  case 0x000008:
   VAR_22 = VAR_11;
   break;
  }
  if (VAR_22) {
   FUNC_1(VAR_20->input_ep82, VAR_0, VAR_22, 1);
   VAR_20->last_key[VAR_24] = VAR_22;
  }
 }

 return 1;
}
