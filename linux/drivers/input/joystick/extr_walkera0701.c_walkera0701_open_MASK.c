
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walkera_dev {int parport; int pardevice; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 struct walkera_dev* FUNC_0 (struct input_dev*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_1)
{
 struct walkera_dev *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_2->pardevice))
  return -VAR_0;

 FUNC_2(VAR_2->parport);
 return 0;
}
