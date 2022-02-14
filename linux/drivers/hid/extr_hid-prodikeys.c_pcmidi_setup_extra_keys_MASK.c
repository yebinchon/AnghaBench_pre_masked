
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmidi_snd {int ifnum; struct input_dev* input_ep82; scalar_t__* last_key; } ;
struct input_dev {int keybit; } ;
 int FUNC_0 (unsigned int const,int ) ;

__attribute__((used)) static void FUNC_1(
 struct pcmidi_snd *VAR_0, struct input_dev *VAR_1)
{




 static const unsigned int VAR_2[] = {
  142,
  139, 146,
  147, 143,
  128,
  130,
  144,
  140, 132,
  134, 141,
  138, 137,
  145, 133,
  129, 135,
  131, 136,
  0
 };

 const unsigned int *VAR_3 = &VAR_2[0];
 unsigned short VAR_4;

 if (VAR_0->ifnum != 1)
  return;

 VAR_0->input_ep82 = VAR_1;

 for (VAR_4 = 0; VAR_4 < 24; VAR_4++)
  VAR_0->last_key[VAR_4] = 0;

 while (*VAR_3 != 0) {
  FUNC_0(*VAR_3, VAR_0->input_ep82->keybit);
  ++VAR_3;
 }
}
