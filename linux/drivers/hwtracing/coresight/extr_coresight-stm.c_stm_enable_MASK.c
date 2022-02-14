
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stm_drvdata {int spinlock; int mode; } ;
struct perf_event {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct stm_drvdata* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct stm_drvdata*) ;

__attribute__((used)) static int FUNC_7(struct coresight_device *VAR_4,
        struct perf_event *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 struct stm_drvdata *VAR_8 = FUNC_1(VAR_4->dev.parent);

 if (VAR_6 != VAR_1)
  return -VAR_3;

 VAR_7 = FUNC_2(&VAR_8->mode, VAR_0, VAR_6);


 if (VAR_7)
  return -VAR_2;

 FUNC_3(VAR_4->dev.parent);

 FUNC_4(&VAR_8->spinlock);
 FUNC_6(VAR_8);
 FUNC_5(&VAR_8->spinlock);

 FUNC_0(&VAR_4->dev, "STM tracing enabled\n");
 return 0;
}
