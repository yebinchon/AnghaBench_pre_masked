
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walkera_dev {int pardevice; int timer; int parport; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct walkera_dev* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_0)
{
 struct walkera_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->parport);
 FUNC_0(&VAR_1->timer);

 FUNC_3(VAR_1->pardevice);
}
