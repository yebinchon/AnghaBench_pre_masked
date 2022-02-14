
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct input_dev* dev; struct byd_data* private; } ;
struct input_dev {int dummy; } ;
struct byd_data {int btn_right; int btn_left; int abs_y; int abs_x; int touch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_6)
{
 struct byd_data *VAR_7 = VAR_6->private;
 struct input_dev *VAR_8 = VAR_6->dev;

 FUNC_1(VAR_8, VAR_5, VAR_7->touch);
 FUNC_1(VAR_8, VAR_4, VAR_7->touch);

 FUNC_0(VAR_8, VAR_0, VAR_7->abs_x);
 FUNC_0(VAR_8, VAR_1, VAR_7->abs_y);
 FUNC_1(VAR_8, VAR_2, VAR_7->btn_left);
 FUNC_1(VAR_8, VAR_3, VAR_7->btn_right);

 FUNC_2(VAR_8);
}
