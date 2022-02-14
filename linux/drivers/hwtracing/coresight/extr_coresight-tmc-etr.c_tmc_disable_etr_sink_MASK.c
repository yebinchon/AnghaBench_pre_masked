
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {scalar_t__ mode; int pid; int spinlock; int * perf_buf; scalar_t__ reading; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; int refcnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct tmc_drvdata* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct tmc_drvdata*) ;

__attribute__((used)) static int FUNC_7(struct coresight_device *VAR_2)
{
 unsigned long VAR_3;
 struct tmc_drvdata *VAR_4 = FUNC_3(VAR_2->dev.parent);

 FUNC_4(&VAR_4->spinlock, VAR_3);

 if (VAR_4->reading) {
  FUNC_5(&VAR_4->spinlock, VAR_3);
  return -VAR_1;
 }

 if (FUNC_1(VAR_2->refcnt)) {
  FUNC_5(&VAR_4->spinlock, VAR_3);
  return -VAR_1;
 }


 FUNC_0(VAR_4->mode == VAR_0);
 FUNC_6(VAR_4);

 VAR_4->pid = -1;
 VAR_4->mode = VAR_0;

 VAR_4->perf_buf = ((void*)0);

 FUNC_5(&VAR_4->spinlock, VAR_3);

 FUNC_2(&VAR_2->dev, "TMC-ETR disabled\n");
 return 0;
}
