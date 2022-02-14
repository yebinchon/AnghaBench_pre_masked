
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pidff_device {int * pid_id; } ;
struct input_dev {TYPE_1__* ff; } ;
struct TYPE_2__ {struct pidff_device* private; } ;


 int FUNC_0 (struct pidff_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct pidff_device *VAR_3 = VAR_0->ff->private;

 FUNC_0(VAR_3, VAR_3->pid_id[VAR_1], VAR_2);

 return 0;
}
