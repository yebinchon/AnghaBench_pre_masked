
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_finger {int orientation; int tool_minor; int tool_major; int touch_minor; int touch_major; } ;
struct input_mt_pos {int x; int y; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_9, int VAR_10,
          const struct input_mt_pos *VAR_11,
          const struct tp_finger *VAR_12)
{
 FUNC_1(VAR_9, VAR_10);
 FUNC_0(VAR_9, VAR_8, 1);

 FUNC_2(VAR_9, VAR_3,
    FUNC_3(VAR_12->touch_major) << 1);
 FUNC_2(VAR_9, VAR_4,
    FUNC_3(VAR_12->touch_minor) << 1);
 FUNC_2(VAR_9, VAR_5,
    FUNC_3(VAR_12->tool_major) << 1);
 FUNC_2(VAR_9, VAR_6,
    FUNC_3(VAR_12->tool_minor) << 1);
 FUNC_2(VAR_9, VAR_0,
    VAR_7 - FUNC_3(VAR_12->orientation));
 FUNC_2(VAR_9, VAR_1, VAR_11->x);
 FUNC_2(VAR_9, VAR_2, VAR_11->y);
}
