
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_slot {int frame; } ;
struct input_mt {size_t slot; int frame; struct input_mt_slot* slots; } ;
struct input_dev {struct input_mt* mt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int ,unsigned int) ;
 int FUNC_1 (struct input_mt_slot*,int ) ;
 int FUNC_2 (struct input_mt*) ;

bool FUNC_3(struct input_dev *VAR_3,
    unsigned int VAR_4, bool VAR_5)
{
 struct input_mt *VAR_6 = VAR_3->mt;
 struct input_mt_slot *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return 0;

 VAR_7 = &VAR_6->slots[VAR_6->slot];
 VAR_7->frame = VAR_6->frame;

 if (!VAR_5) {
  FUNC_0(VAR_3, VAR_2, VAR_1, -1);
  return 0;
 }

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 if (VAR_8 < 0)
  VAR_8 = FUNC_2(VAR_6);

 FUNC_0(VAR_3, VAR_2, VAR_1, VAR_8);
 FUNC_0(VAR_3, VAR_2, VAR_0, VAR_4);

 return 1;
}
