
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pcmidi_sustain {scalar_t__ in_use; int velocity; int note; int status; int pm; } ;


 struct pcmidi_sustain* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct pcmidi_sustain* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct pcmidi_sustain *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_1(VAR_3->pm, VAR_3->status, VAR_3->note, VAR_3->velocity);
 VAR_3->in_use = 0;
}
