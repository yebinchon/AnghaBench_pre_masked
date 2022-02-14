
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct cyapa {int state_sync_lock; TYPE_2__* ops; scalar_t__ operational; int input; TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* irq_handler ) (struct cyapa*) ;int (* sort_empty_output_data ) (struct cyapa*,int *,int *,int *) ;scalar_t__ (* irq_cmd_handler ) (struct cyapa*) ;} ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cyapa*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,int ) ;
 scalar_t__ FUNC_8 (struct cyapa*) ;
 int FUNC_9 (struct cyapa*,int *,int *,int *) ;
 int FUNC_10 (struct cyapa*) ;
 int FUNC_11 (struct cyapa*,int *,int *,int *) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_1, void *VAR_2)
{
 struct cyapa *VAR_3 = VAR_2;
 struct device *VAR_4 = &VAR_3->client->dev;
 int VAR_5;

 if (FUNC_1(VAR_4))
  FUNC_7(VAR_4, 0);


 if (VAR_3->ops->irq_cmd_handler(VAR_3)) {



  if (!VAR_3->input) {




   VAR_3->ops->sort_empty_output_data(VAR_3,
     ((void*)0), ((void*)0), ((void*)0));
   goto out;
  }

  if (VAR_3->operational) {
   VAR_5 = VAR_3->ops->irq_handler(VAR_3);
   FUNC_4(VAR_4);
   FUNC_5(VAR_4);
   FUNC_6(VAR_4);
  }

  if (!VAR_3->operational || VAR_5) {
   if (!FUNC_2(&VAR_3->state_sync_lock)) {
    VAR_3->ops->sort_empty_output_data(VAR_3,
     ((void*)0), ((void*)0), ((void*)0));
    goto out;
   }
   FUNC_0(VAR_3);
   FUNC_3(&VAR_3->state_sync_lock);
  }
 }

out:
 return VAR_0;
}
