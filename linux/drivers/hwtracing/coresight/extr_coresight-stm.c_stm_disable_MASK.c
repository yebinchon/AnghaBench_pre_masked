
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm_drvdata {int mode; int base; int spinlock; } ;
struct perf_event {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct stm_drvdata* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct stm_drvdata*) ;

__attribute__((used)) static void FUNC_9(struct coresight_device *VAR_4,
   struct perf_event *VAR_5)
{
 struct stm_drvdata *VAR_6 = FUNC_2(VAR_4->dev.parent);






 if (FUNC_3(&VAR_6->mode) == VAR_1) {
  FUNC_6(&VAR_6->spinlock);
  FUNC_8(VAR_6);
  FUNC_7(&VAR_6->spinlock);


  FUNC_0(VAR_6->base, VAR_2, VAR_3, 0);

  FUNC_5(VAR_4->dev.parent);

  FUNC_4(&VAR_6->mode, VAR_0);
  FUNC_1(&VAR_4->dev, "STM tracing disabled\n");
 }
}
