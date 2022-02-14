
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct palmas_pwron {int input_work; struct input_dev* input_dev; } ;
struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct palmas_pwron *VAR_6 = VAR_5;
 struct input_dev *VAR_7 = VAR_6->input_dev;

 FUNC_0(VAR_7, VAR_1, 1);
 FUNC_4(VAR_7->dev.parent, 0);
 FUNC_1(VAR_7);

 FUNC_2(VAR_3, &VAR_6->input_work,
    FUNC_3(VAR_2));

 return VAR_0;
}
