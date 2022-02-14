
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {struct input_dev* dev; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_fields {TYPE_1__* mt; } ;
struct alps_data {struct alps_fields f; } ;
struct TYPE_2__ {int y; int x; } ;


 int VAR_0 ;
 int FUNC_0 (struct input_dev*,int,int ,int ) ;
 int FUNC_1 (struct input_dev*,int*,TYPE_1__*,int,int ) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_1, int VAR_2)
{
 struct alps_data *VAR_3 = VAR_1->private;
 struct input_dev *VAR_4 = VAR_1->dev;
 struct alps_fields *VAR_5 = &VAR_3->f;
 int VAR_6, VAR_7[VAR_0];

 FUNC_1(VAR_4, VAR_7, VAR_5->mt, VAR_2, 0);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_0(VAR_4, VAR_7[VAR_6], VAR_5->mt[VAR_6].x, VAR_5->mt[VAR_6].y);

 FUNC_2(VAR_4);
}
