
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pk_device {struct pcmidi_snd* pm; } ;
struct pcmidi_snd {int ifnum; } ;
struct hid_usage {int hid; } ;
struct hid_input {int input; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pk_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct pcmidi_snd*,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2, struct hid_input *VAR_3,
  struct hid_field *VAR_4, struct hid_usage *VAR_5,
  unsigned long **VAR_6, int *VAR_7)
{
 struct pk_device *VAR_8 = FUNC_0(VAR_2);
 struct pcmidi_snd *VAR_9;

 VAR_9 = VAR_8->pm;

 if (VAR_0 == (VAR_5->hid & VAR_1) &&
  1 == VAR_9->ifnum) {
  FUNC_1(VAR_9, VAR_3->input);
  return 0;
 }

 return 0;
}
