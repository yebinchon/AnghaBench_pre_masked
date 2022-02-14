
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct psmouse {struct input_dev* dev; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct TYPE_3__ {int y; int x; } ;
struct alps_fields {scalar_t__ pressure; int middle; int right; int left; TYPE_2__* mt; TYPE_1__ st; } ;
struct alps_data {int second_touch; struct alps_fields f; } ;
struct TYPE_4__ {int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int,int ,int ) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(struct psmouse *VAR_4, int VAR_5)
{
 struct alps_data *VAR_6 = VAR_4->private;
 struct input_dev *VAR_7 = VAR_4->dev;
 struct alps_fields *VAR_8 = &VAR_6->f;


 if (VAR_5 < 2) {
  VAR_8->mt[0].x = VAR_8->st.x;
  VAR_8->mt[0].y = VAR_8->st.y;
  VAR_5 = VAR_8->pressure > 0 ? 1 : 0;
  VAR_6->second_touch = -1;
 }

 if (VAR_5 >= 1)
  FUNC_0(VAR_7, 0, VAR_8->mt[0].x, VAR_8->mt[0].y);
 if (VAR_5 >= 2)
  FUNC_0(VAR_7, 1, VAR_8->mt[1].x, VAR_8->mt[1].y);
 FUNC_2(VAR_7);

 FUNC_1(VAR_7, VAR_5);

 FUNC_4(VAR_7, VAR_1, VAR_8->left);
 FUNC_4(VAR_7, VAR_3, VAR_8->right);
 FUNC_4(VAR_7, VAR_2, VAR_8->middle);

 FUNC_3(VAR_7, VAR_0, VAR_8->pressure);

 FUNC_5(VAR_7);
}
