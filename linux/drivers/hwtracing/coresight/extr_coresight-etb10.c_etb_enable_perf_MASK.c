
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_output_handle {TYPE_2__* event; } ;
struct etb_drvdata {scalar_t__ mode; int pid; int spinlock; } ;
struct TYPE_3__ {int parent; } ;
struct coresight_device {int refcnt; TYPE_1__ dev; } ;
typedef int pid_t ;
struct TYPE_4__ {int owner; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct etb_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (struct etb_drvdata*) ;
 int FUNC_3 (struct coresight_device*,struct perf_output_handle*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct coresight_device *VAR_3, void *VAR_4)
{
 int VAR_5 = 0;
 pid_t VAR_6;
 unsigned long VAR_7;
 struct etb_drvdata *VAR_8 = FUNC_1(VAR_3->dev.parent);
 struct perf_output_handle *VAR_9 = VAR_4;

 FUNC_4(&VAR_8->spinlock, VAR_7);


 if (VAR_8->mode == VAR_1) {
  VAR_5 = -VAR_2;
  goto out;
 }


 VAR_6 = FUNC_6(VAR_9->event->owner);

 if (VAR_8->pid != -1 && VAR_8->pid != VAR_6) {
  VAR_5 = -VAR_2;
  goto out;
 }





 if (VAR_8->pid == VAR_6) {
  FUNC_0(VAR_3->refcnt);
  goto out;
 }






 VAR_5 = FUNC_3(VAR_3, VAR_9);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_2(VAR_8);
 if (!VAR_5) {

  VAR_8->pid = VAR_6;
  VAR_8->mode = VAR_0;
  FUNC_0(VAR_3->refcnt);
 }

out:
 FUNC_5(&VAR_8->spinlock, VAR_7);
 return VAR_5;
}
