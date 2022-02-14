
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pidff_device {int* pid_id; int hid; } ;
struct input_dev {TYPE_1__* ff; } ;
struct TYPE_2__ {struct pidff_device* private; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pidff_device*,int) ;
 int FUNC_3 (struct pidff_device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_0, int VAR_1)
{
 struct pidff_device *VAR_2 = VAR_0->ff->private;
 int VAR_3 = VAR_2->pid_id[VAR_1];

 FUNC_0(VAR_2->hid, "starting to erase %d/%d\n",
  VAR_1, VAR_2->pid_id[VAR_1]);


 FUNC_1(VAR_2->hid);
 FUNC_3(VAR_2, VAR_3, 0);
 FUNC_2(VAR_2, VAR_3);

 return 0;
}
