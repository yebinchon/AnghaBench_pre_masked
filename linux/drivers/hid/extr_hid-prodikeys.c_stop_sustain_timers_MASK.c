
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmidi_sustain {int in_use; int timer; } ;
struct pcmidi_snd {struct pcmidi_sustain* sustained_notes; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pcmidi_snd *VAR_1)
{
 struct pcmidi_sustain *VAR_2;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1->sustained_notes[VAR_3];
  VAR_2->in_use = 1;
  FUNC_0(&VAR_2->timer);
 }
}
