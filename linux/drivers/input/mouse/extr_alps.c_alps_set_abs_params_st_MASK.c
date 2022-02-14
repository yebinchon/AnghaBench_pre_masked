
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct alps_data {int x_max; int y_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct alps_data *VAR_3,
       struct input_dev *VAR_4)
{
 FUNC_0(VAR_4, VAR_1, 0, VAR_3->x_max, 0, 0);
 FUNC_0(VAR_4, VAR_2, 0, VAR_3->y_max, 0, 0);
 FUNC_0(VAR_4, VAR_0, 0, 127, 0, 0);
}
