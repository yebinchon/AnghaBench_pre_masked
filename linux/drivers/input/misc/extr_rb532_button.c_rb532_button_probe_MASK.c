
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct input_polled_dev {TYPE_3__* input; int poll_interval; int poll; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int bustype; } ;
struct TYPE_6__ {char* name; char* phys; TYPE_2__ dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct input_polled_dev*) ;
 struct input_polled_dev* FUNC_1 () ;
 int FUNC_2 (struct input_polled_dev*) ;
 int FUNC_3 (struct input_polled_dev*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_6)
{
 struct input_polled_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1();
 if (!VAR_7)
  return -VAR_1;

 VAR_7->poll = VAR_5;
 VAR_7->poll_interval = VAR_4;

 VAR_7->input->name = "rb532 button";
 VAR_7->input->phys = "rb532/button0";
 VAR_7->input->id.bustype = VAR_0;
 VAR_7->input->dev.parent = &VAR_6->dev;

 FUNC_0(&VAR_6->dev, VAR_7);

 FUNC_4(VAR_7->input, VAR_2, VAR_3);

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 return 0;
}
