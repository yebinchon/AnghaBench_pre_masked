
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; int key; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4;
 int VAR_6 = FUNC_3(VAR_1, VAR_5->key);

 FUNC_2(VAR_5->dev.parent, VAR_2);
 FUNC_0(VAR_5, VAR_1, !VAR_6);
 FUNC_1(VAR_5);

 return VAR_0;
}
