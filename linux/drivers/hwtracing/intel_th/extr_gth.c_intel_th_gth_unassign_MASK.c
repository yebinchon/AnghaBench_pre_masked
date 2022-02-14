
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; int active; } ;
struct intel_th_device {TYPE_1__ output; scalar_t__ host_mode; int dev; } ;
struct gth_device {int* master; int gth_lock; TYPE_2__* output; } ;
struct TYPE_4__ {int * output; } ;


 int VAR_0 ;
 struct gth_device* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct intel_th_device *VAR_1,
      struct intel_th_device *VAR_2)
{
 struct gth_device *VAR_3 = FUNC_0(&VAR_1->dev);
 int VAR_4 = VAR_2->output.port;
 int VAR_5;

 if (VAR_1->host_mode)
  return;

 FUNC_1(&VAR_3->gth_lock);
 VAR_2->output.port = -1;
 VAR_2->output.active = 0;
 VAR_3->output[VAR_4].output = ((void*)0);
 for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++)
  if (VAR_3->master[VAR_5] == VAR_4)
   VAR_3->master[VAR_5] = -1;
 FUNC_2(&VAR_3->gth_lock);
}
