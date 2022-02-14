
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_mt_slot {int dummy; } ;
struct input_mt {int trkid; int num_slots; struct input_mt_slot* slots; } ;
struct asus_drvdata {TYPE_2__* input; TYPE_1__* tp; } ;
struct TYPE_4__ {struct input_mt* mt; } ;
struct TYPE_3__ {int contact_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_mt_slot*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct asus_drvdata *VAR_4)
{
 struct input_mt *VAR_5 = VAR_4->input->mt;
 struct input_mt_slot *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (VAR_4->tp->contact_size < 5)
  return;

 VAR_6 = ((void*)0);
 VAR_7 = VAR_5->trkid;
 VAR_8 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_5->num_slots; ++VAR_9) {
  struct input_mt_slot *VAR_10 = &VAR_5->slots[VAR_9];
  int VAR_11 = FUNC_0(VAR_10, VAR_1);

  if (VAR_11 < 0)
   continue;
  if ((VAR_11 - VAR_7) & VAR_3) {
   VAR_6 = VAR_10;
   VAR_7 = VAR_11;
  }
  VAR_8++;
 }

 if (VAR_6) {
  FUNC_1(VAR_4->input, VAR_2,
   FUNC_0(VAR_6, VAR_0));
 }
}
