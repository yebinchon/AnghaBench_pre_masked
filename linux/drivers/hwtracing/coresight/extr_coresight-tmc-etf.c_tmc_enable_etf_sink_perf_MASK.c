
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tmc_drvdata {scalar_t__ mode; int pid; int spinlock; scalar_t__ reading; } ;
struct perf_output_handle {TYPE_2__* event; } ;
struct TYPE_3__ {int parent; } ;
struct coresight_device {int refcnt; TYPE_1__ dev; } ;
typedef int pid_t ;
struct TYPE_4__ {int owner; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct tmc_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tmc_drvdata*) ;
 int FUNC_6 (struct coresight_device*,struct perf_output_handle*) ;

__attribute__((used)) static int FUNC_7(struct coresight_device *VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 pid_t VAR_7;
 unsigned long VAR_8;
 struct tmc_drvdata *VAR_9 = FUNC_1(VAR_4->dev.parent);
 struct perf_output_handle *VAR_10 = VAR_5;

 FUNC_2(&VAR_9->spinlock, VAR_8);
 do {
  VAR_6 = -VAR_3;
  if (VAR_9->reading)
   break;




  if (VAR_9->mode == VAR_1) {
   VAR_6 = -VAR_2;
   break;
  }


  VAR_7 = FUNC_4(VAR_10->event->owner);

  if (VAR_9->pid != -1 && VAR_9->pid != VAR_7) {
   VAR_6 = -VAR_2;
   break;
  }

  VAR_6 = FUNC_6(VAR_4, VAR_10);
  if (VAR_6)
   break;





  if (VAR_9->pid == VAR_7) {
   FUNC_0(VAR_4->refcnt);
   break;
  }

  VAR_6 = FUNC_5(VAR_9);
  if (!VAR_6) {

   VAR_9->pid = VAR_7;
   VAR_9->mode = VAR_0;
   FUNC_0(VAR_4->refcnt);
  }
 } while (0);
 FUNC_3(&VAR_9->spinlock, VAR_8);

 return VAR_6;
}
