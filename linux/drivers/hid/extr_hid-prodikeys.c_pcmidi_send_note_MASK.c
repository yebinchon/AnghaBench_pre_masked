
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmidi_snd {int rawmidi_in_lock; TYPE_1__* in_substream; int in_triggered; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct pcmidi_snd *VAR_0,
 unsigned char VAR_1, unsigned char VAR_2, unsigned char VAR_3)
{
 unsigned long VAR_4;
 unsigned char VAR_5[3];

 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_2;
 VAR_5[2] = VAR_3;

 FUNC_1(&VAR_0->rawmidi_in_lock, VAR_4);

 if (!VAR_0->in_substream)
  goto drop_note;
 if (!FUNC_3(VAR_0->in_substream->number, &VAR_0->in_triggered))
  goto drop_note;

 FUNC_0(VAR_0->in_substream, VAR_5, 3);

drop_note:
 FUNC_2(&VAR_0->rawmidi_in_lock, VAR_4);

 return;
}
