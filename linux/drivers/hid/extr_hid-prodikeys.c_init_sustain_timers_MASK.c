
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmidi_sustain {int timer; struct pcmidi_snd* pm; scalar_t__ in_use; } ;
struct pcmidi_snd {struct pcmidi_sustain* sustained_notes; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pcmidi_snd *VAR_2)
{
 struct pcmidi_sustain *VAR_3;
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->sustained_notes[VAR_4];
  VAR_3->in_use = 0;
  VAR_3->pm = VAR_2;
  FUNC_0(&VAR_3->timer, VAR_1, 0);
 }
}
