
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {int spinlock; int mode; scalar_t__ reading; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct tmc_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tmc_drvdata*) ;

__attribute__((used)) static int FUNC_5(struct coresight_device *VAR_2,
          int VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 struct tmc_drvdata *VAR_7 = FUNC_1(VAR_2->dev.parent);

 FUNC_2(&VAR_7->spinlock, VAR_6);
 if (VAR_7->reading) {
  FUNC_3(&VAR_7->spinlock, VAR_6);
  return -VAR_1;
 }

 VAR_5 = FUNC_4(VAR_7);
 if (!VAR_5)
  VAR_7->mode = VAR_0;
 FUNC_3(&VAR_7->spinlock, VAR_6);

 if (!VAR_5)
  FUNC_0(&VAR_2->dev, "TMC-ETF enabled\n");
 return VAR_5;
}
