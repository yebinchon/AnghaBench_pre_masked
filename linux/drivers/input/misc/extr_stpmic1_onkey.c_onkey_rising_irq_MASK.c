
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stpmic1_onkey {struct input_dev* input_dev; } ;
struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct stpmic1_onkey *VAR_4 = VAR_3;
 struct input_dev *VAR_5 = VAR_4->input_dev;

 FUNC_0(VAR_5, VAR_1, 0);
 FUNC_2(VAR_5->dev.parent, 0);
 FUNC_1(VAR_5);

 return VAR_0;
}
