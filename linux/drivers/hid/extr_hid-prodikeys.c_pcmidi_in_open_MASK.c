
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct pcmidi_snd {struct snd_rawmidi_substream* in_substream; } ;
struct TYPE_2__ {struct pcmidi_snd* private_data; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct snd_rawmidi_substream *VAR_0)
{
 struct pcmidi_snd *VAR_1 = VAR_0->rmidi->private_data;

 FUNC_0("pcmidi in open\n");
 VAR_1->in_substream = VAR_0;
 return 0;
}
