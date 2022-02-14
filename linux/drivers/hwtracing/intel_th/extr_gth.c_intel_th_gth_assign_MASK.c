
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int port; int active; } ;
struct intel_th_device {scalar_t__ type; int id; TYPE_2__ output; scalar_t__ host_mode; int dev; } ;
struct gth_device {int gth_lock; TYPE_1__* output; } ;
struct TYPE_3__ {scalar_t__ port_type; TYPE_2__* output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct gth_device* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct intel_th_device *VAR_5,
          struct intel_th_device *VAR_6)
{
 struct gth_device *VAR_7 = FUNC_0(&VAR_5->dev);
 int VAR_8, VAR_9;

 if (VAR_5->host_mode)
  return -VAR_0;

 if (VAR_6->type != VAR_3)
  return -VAR_1;

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_7->output[VAR_8].port_type != VAR_6->output.type)
   continue;

  if (VAR_6->id == -1 || VAR_6->id == VAR_9)
   goto found;

  VAR_9++;
 }

 return -VAR_2;

found:
 FUNC_1(&VAR_7->gth_lock);
 VAR_6->output.port = VAR_8;
 VAR_6->output.active = 0;
 VAR_7->output[VAR_8].output = &VAR_6->output;
 FUNC_2(&VAR_7->gth_lock);

 return 0;
}
