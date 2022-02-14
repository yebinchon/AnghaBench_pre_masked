
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad714x_chip {int mutex; TYPE_1__* hw; int l_state; int (* read ) (struct ad714x_chip*,int ,int *,int) ;} ;
typedef int irqreturn_t ;
struct TYPE_2__ {int button_num; int slider_num; int wheel_num; int touchpad_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ad714x_chip*,int) ;
 int FUNC_1 (struct ad714x_chip*,int) ;
 int FUNC_2 (struct ad714x_chip*,int) ;
 int FUNC_3 (struct ad714x_chip*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ad714x_chip*,int ,int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct ad714x_chip *VAR_4 = VAR_3;
 int VAR_5;

 FUNC_4(&VAR_4->mutex);

 VAR_4->read(VAR_4, VAR_1, &VAR_4->l_state, 3);

 for (VAR_5 = 0; VAR_5 < VAR_4->hw->button_num; VAR_5++)
  FUNC_0(VAR_4, VAR_5);
 for (VAR_5 = 0; VAR_5 < VAR_4->hw->slider_num; VAR_5++)
  FUNC_1(VAR_4, VAR_5);
 for (VAR_5 = 0; VAR_5 < VAR_4->hw->wheel_num; VAR_5++)
  FUNC_3(VAR_4, VAR_5);
 for (VAR_5 = 0; VAR_5 < VAR_4->hw->touchpad_num; VAR_5++)
  FUNC_2(VAR_4, VAR_5);

 FUNC_5(&VAR_4->mutex);

 return VAR_0;
}
