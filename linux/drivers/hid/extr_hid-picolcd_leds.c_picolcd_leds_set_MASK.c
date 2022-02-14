
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct picolcd_data {int status; int lock; int hdev; int led_state; int * led; } ;
struct hid_report {int maxfield; TYPE_1__** field; } ;
struct TYPE_2__ {int report_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct hid_report*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 struct hid_report* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct picolcd_data *VAR_3)
{
 struct hid_report *VAR_4;
 unsigned long VAR_5;

 if (!VAR_3->led[0])
  return;
 VAR_4 = FUNC_2(VAR_2, VAR_3->hdev);
 if (!VAR_4 || VAR_4->maxfield != 1 || VAR_4->field[0]->report_count != 1)
  return;

 FUNC_3(&VAR_3->lock, VAR_5);
 FUNC_1(VAR_4->field[0], 0, VAR_3->led_state);
 if (!(VAR_3->status & VAR_1))
  FUNC_0(VAR_3->hdev, VAR_4, VAR_0);
 FUNC_4(&VAR_3->lock, VAR_5);
}
