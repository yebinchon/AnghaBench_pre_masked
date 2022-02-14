
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etb_drvdata {scalar_t__ mode; int pid; int spinlock; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; int refcnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct etb_drvdata* FUNC_3 (int ) ;
 int FUNC_4 (struct etb_drvdata*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct coresight_device *VAR_2)
{
 struct etb_drvdata *VAR_3 = FUNC_3(VAR_2->dev.parent);
 unsigned long VAR_4;

 FUNC_5(&VAR_3->spinlock, VAR_4);

 if (FUNC_1(VAR_2->refcnt)) {
  FUNC_6(&VAR_3->spinlock, VAR_4);
  return -VAR_1;
 }


 FUNC_0(VAR_3->mode == VAR_0);
 FUNC_4(VAR_3);

 VAR_3->pid = -1;
 VAR_3->mode = VAR_0;
 FUNC_6(&VAR_3->spinlock, VAR_4);

 FUNC_2(&VAR_2->dev, "ETB disabled\n");
 return 0;
}
