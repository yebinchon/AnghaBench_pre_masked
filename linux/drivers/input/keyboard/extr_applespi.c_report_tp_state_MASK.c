
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tp_finger {int abs_y; int abs_x; int touch_major; } ;
struct touchpad_protocol {int number_of_fingers; int clicked; struct tp_finger* fingers; } ;
struct input_dev {int dummy; } ;
struct applespi_tp_info {scalar_t__ y_min; scalar_t__ y_max; } ;
struct applespi_data {TYPE_1__* pos; int * slots; scalar_t__ debug_tp_dim; int touchpad_input_dev; struct applespi_tp_info tp_info; } ;
struct TYPE_3__ {scalar_t__ y; scalar_t__ x; } ;


 int VAR_0 ;
 int FUNC_0 (struct applespi_data*,struct tp_finger const*) ;
 int FUNC_1 (struct input_dev*,int *,TYPE_1__*,int,int ) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct input_dev*,int ,TYPE_1__*,struct tp_finger*) ;
 struct input_dev* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct applespi_data *VAR_1,
       struct touchpad_protocol *VAR_2)
{
 const struct tp_finger *VAR_3;
 struct input_dev *VAR_4;
 const struct applespi_tp_info *VAR_5 = &VAR_1->tp_info;
 int VAR_6, VAR_7;


 VAR_4 = FUNC_7(&VAR_1->touchpad_input_dev);
 if (!VAR_4)
  return;

 VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2->number_of_fingers; VAR_6++) {
  VAR_3 = &VAR_2->fingers[VAR_6];
  if (FUNC_5(VAR_3->touch_major) == 0)
   continue;
  VAR_1->pos[VAR_7].x = FUNC_5(VAR_3->abs_x);
  VAR_1->pos[VAR_7].y = VAR_5->y_min + VAR_5->y_max -
         FUNC_5(VAR_3->abs_y);
  VAR_7++;

  if (VAR_1->debug_tp_dim)
   FUNC_0(VAR_1, VAR_3);
 }

 FUNC_1(VAR_4, VAR_1->slots, VAR_1->pos, VAR_7, 0);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_6(VAR_4, VAR_1->slots[VAR_6],
       &VAR_1->pos[VAR_6], &VAR_2->fingers[VAR_6]);

 FUNC_2(VAR_4);
 FUNC_3(VAR_4, VAR_0, VAR_2->clicked);

 FUNC_4(VAR_4);
}
