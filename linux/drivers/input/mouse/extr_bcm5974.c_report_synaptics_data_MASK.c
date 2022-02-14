
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tp_finger {int origin; int tool_major; int touch_major; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {int max; } ;
struct TYPE_3__ {int max; } ;
struct bcm5974_config {TYPE_2__ w; TYPE_1__ p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_2,
      const struct bcm5974_config *VAR_3,
      const struct tp_finger *VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;

 if (VAR_5) {
  int VAR_8 = FUNC_2(VAR_4->touch_major);
  int VAR_9 = FUNC_2(VAR_4->tool_major);
  if (VAR_8 > 0 && FUNC_2(VAR_4->origin)) {
   VAR_6 = FUNC_0(256 * VAR_8 / VAR_3->p.max, 0, 255);
   VAR_7 = FUNC_0(16 * VAR_9 / VAR_3->w.max, 0, 15);
  }
 }

 FUNC_1(VAR_2, VAR_0, VAR_6);
 FUNC_1(VAR_2, VAR_1, VAR_7);
}
