
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct pcmidi_snd {int in_triggered; } ;
struct TYPE_2__ {struct pcmidi_snd* private_data; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct pcmidi_snd *VAR_2 = VAR_0->rmidi->private_data;

 FUNC_0("pcmidi in trigger %d\n", VAR_1);

 VAR_2->in_triggered = VAR_1;
}
