
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct cyttsp4_mt_data {int report_lock; int is_suspended; } ;


 struct cyttsp4_mt_data* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_0)
{
 struct cyttsp4_mt_data *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->report_lock);
 if (!VAR_1->is_suspended)
  FUNC_3(VAR_0->dev.parent);
 FUNC_2(&VAR_1->report_lock);
}
