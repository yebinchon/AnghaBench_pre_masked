
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct input_dev *VAR_4 = VAR_3;

 FUNC_0(VAR_4, VAR_1, 1);
 FUNC_2(VAR_4->dev.parent, 0);
 FUNC_1(VAR_4);

 return VAR_0;
}
