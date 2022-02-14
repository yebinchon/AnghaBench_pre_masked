
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pk_device {struct pk_device* pm; } ;
struct pcmidi_snd {struct pcmidi_snd* pm; } ;
struct hid_device {int dummy; } ;


 struct pk_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct pk_device*) ;
 int FUNC_3 (struct pk_device*) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_0)
{
 struct pk_device *VAR_1 = FUNC_0(VAR_0);
 struct pcmidi_snd *VAR_2;

 VAR_2 = VAR_1->pm;
 if (VAR_2) {
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
 }

 FUNC_1(VAR_0);

 FUNC_2(VAR_1);
}
