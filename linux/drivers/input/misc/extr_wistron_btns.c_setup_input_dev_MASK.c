
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * parent; } ;
struct TYPE_8__ {int bustype; } ;
struct input_dev {char* name; char* phys; TYPE_2__ dev; TYPE_1__ id; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {struct input_dev* input; int poll_interval; int poll; int open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct input_dev *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_0();
 if (!VAR_6)
  return -VAR_1;

 VAR_6->open = VAR_5;
 VAR_6->poll = VAR_7;
 VAR_6->poll_interval = VAR_2;

 VAR_9 = VAR_6->input;
 VAR_9->name = "Wistron laptop buttons";
 VAR_9->phys = "wistron/input0";
 VAR_9->id.bustype = VAR_0;
 VAR_9->dev.parent = &VAR_4->dev;

 VAR_10 = FUNC_3(VAR_9, VAR_3, VAR_8);
 if (VAR_10)
  goto err_free_dev;

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10)
  goto err_free_dev;

 return 0;

 err_free_dev:
 FUNC_1(VAR_6);
 return VAR_10;
}
