
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct cm109_dev {int buzzer_state; int resetting; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;


 int FUNC_0 (struct cm109_dev*) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,int) ;
 struct cm109_dev* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 struct cm109_dev *VAR_6 = FUNC_2(VAR_2);

 FUNC_1(&VAR_6->intf->dev,
  "input_ev: type=%u code=%u value=%d\n", VAR_3, VAR_4, VAR_5);

 if (VAR_3 != VAR_1)
  return -VAR_0;

 switch (VAR_4) {
 case 128:
 case 129:
  VAR_6->buzzer_state = !!VAR_5;
  if (!VAR_6->resetting)
   FUNC_0(VAR_6);
  return 0;

 default:
  return -VAR_0;
 }
}
