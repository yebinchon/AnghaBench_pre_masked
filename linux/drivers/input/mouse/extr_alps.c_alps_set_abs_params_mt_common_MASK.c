
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; } ;
struct alps_data {int y_res; int x_res; int y_max; int x_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct alps_data *VAR_4,
       struct input_dev *VAR_5)
{
 FUNC_1(VAR_5, VAR_0, 0, VAR_4->x_max, 0, 0);
 FUNC_1(VAR_5, VAR_1, 0, VAR_4->y_max, 0, 0);

 FUNC_0(VAR_5, VAR_0, VAR_4->x_res);
 FUNC_0(VAR_5, VAR_1, VAR_4->y_res);

 FUNC_2(VAR_3, VAR_5->keybit);
 FUNC_2(VAR_2, VAR_5->keybit);
}
