
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmidi_snd {int ifnum; } ;


 int FUNC_0 (struct pcmidi_snd*) ;
 int FUNC_1 (struct pcmidi_snd*,int) ;

__attribute__((used)) static int FUNC_2(struct pcmidi_snd *VAR_0)
{
 int VAR_1;

 if (VAR_0->ifnum != 1)
  return 0;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;
 FUNC_1(VAR_0, 0xc1);
 return 0;
}
