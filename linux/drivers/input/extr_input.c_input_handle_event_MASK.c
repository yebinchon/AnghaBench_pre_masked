
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_value {unsigned int type; unsigned int code; int value; } ;
struct input_dev {int num_vals; int max_vals; struct input_value* vals; int * timestamp; TYPE_1__* mt; int (* event ) (struct input_dev*,unsigned int,unsigned int,int) ;} ;
struct TYPE_2__ {int slot; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int,unsigned int,int) ;
 int FUNC_1 (struct input_dev*,unsigned int,unsigned int,int*) ;
 int FUNC_2 (struct input_dev*,struct input_value*,int) ;
 struct input_value VAR_9 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct input_dev*,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_10,
          unsigned int VAR_11, unsigned int VAR_12, int VAR_13)
{
 int VAR_14 = FUNC_1(VAR_10, VAR_11, VAR_12, &VAR_13);

 if (VAR_14 != VAR_5 && VAR_11 != VAR_2)
  FUNC_0(VAR_11, VAR_12, VAR_13);

 if ((VAR_14 & VAR_6) && VAR_10->event)
  VAR_10->event(VAR_10, VAR_11, VAR_12, VAR_13);

 if (!VAR_10->vals)
  return;

 if (VAR_14 & VAR_7) {
  struct input_value *VAR_15;

  if (VAR_14 & VAR_8) {
   VAR_15 = &VAR_10->vals[VAR_10->num_vals++];
   VAR_15->type = VAR_1;
   VAR_15->code = VAR_0;
   VAR_15->value = VAR_10->mt->slot;
  }

  VAR_15 = &VAR_10->vals[VAR_10->num_vals++];
  VAR_15->type = VAR_11;
  VAR_15->code = VAR_12;
  VAR_15->value = VAR_13;
 }

 if (VAR_14 & VAR_4) {
  if (VAR_10->num_vals >= 2)
   FUNC_2(VAR_10, VAR_10->vals, VAR_10->num_vals);
  VAR_10->num_vals = 0;






  VAR_10->timestamp[VAR_3] = FUNC_3(0, 0);
 } else if (VAR_10->num_vals >= VAR_10->max_vals - 2) {
  VAR_10->vals[VAR_10->num_vals++] = VAR_9;
  FUNC_2(VAR_10, VAR_10->vals, VAR_10->num_vals);
  VAR_10->num_vals = 0;
 }

}
