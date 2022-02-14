
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmidi_snd {struct hid_report* pcmidi_report6; TYPE_1__* pk; } ;
struct hid_report {TYPE_2__** field; } ;
struct hid_device {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {struct hid_device* hdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_device*,struct hid_report*,int ) ;

__attribute__((used)) static void FUNC_1(struct pcmidi_snd *VAR_1, int VAR_2)
{
 struct hid_device *VAR_3 = VAR_1->pk->hdev;
 struct hid_report *VAR_4 = VAR_1->pcmidi_report6;
 VAR_4->field[0]->value[0] = 0x01;
 VAR_4->field[0]->value[1] = VAR_2;

 FUNC_0(VAR_3, VAR_4, VAR_0);
}
