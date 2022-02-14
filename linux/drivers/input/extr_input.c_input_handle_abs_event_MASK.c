
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_mt {int num_slots; int slot; TYPE_1__* slots; } ;
struct input_dev {TYPE_2__* absinfo; struct input_mt* mt; } ;
struct TYPE_4__ {int value; int fuzz; } ;
struct TYPE_3__ {int* abs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct input_dev*,unsigned int) ;
 int FUNC_1 (struct input_dev*,unsigned int,size_t) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_5,
      unsigned int VAR_6, int *VAR_7)
{
 struct input_mt *VAR_8 = VAR_5->mt;
 bool VAR_9;
 int *VAR_10;

 if (VAR_6 == VAR_1) {




  if (VAR_8 && *VAR_7 >= 0 && *VAR_7 < VAR_8->num_slots)
   VAR_8->slot = *VAR_7;

  return VAR_2;
 }

 VAR_9 = FUNC_3(VAR_6);

 if (!VAR_9) {
  VAR_10 = &VAR_5->absinfo[VAR_6].value;
 } else if (VAR_8) {
  VAR_10 = &VAR_8->slots[VAR_8->slot].abs[VAR_6 - VAR_0];
 } else {




  VAR_10 = ((void*)0);
 }

 if (VAR_10) {
  *VAR_7 = FUNC_2(*VAR_7, *VAR_10,
      VAR_5->absinfo[VAR_6].fuzz);
  if (*VAR_10 == *VAR_7)
   return VAR_2;

  *VAR_10 = *VAR_7;
 }


 if (VAR_9 && VAR_8 && VAR_8->slot != FUNC_0(VAR_5, VAR_1)) {
  FUNC_1(VAR_5, VAR_1, VAR_8->slot);
  return VAR_3 | VAR_4;
 }

 return VAR_3;
}
