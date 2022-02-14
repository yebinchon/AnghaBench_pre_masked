
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct aiptek {TYPE_1__* urb; int intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aiptek* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2)
{
 struct aiptek *VAR_3 = FUNC_0(VAR_2);

 VAR_3->urb->dev = FUNC_1(VAR_3->intf);
 if (FUNC_2(VAR_3->urb, VAR_1) != 0)
  return -VAR_0;

 return 0;
}
