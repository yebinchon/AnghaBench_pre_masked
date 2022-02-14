
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {scalar_t__ size; scalar_t__ mode; int spinlock; struct etr_buf* sysfs_buf; scalar_t__ reading; } ;
struct etr_buf {scalar_t__ size; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; int refcnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct etr_buf*) ;
 int FUNC_1 (struct etr_buf*) ;
 struct etr_buf* FUNC_2 (struct etr_buf*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct tmc_drvdata* FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct tmc_drvdata*,struct etr_buf*) ;
 int FUNC_9 (struct etr_buf*) ;
 struct etr_buf* FUNC_10 (struct tmc_drvdata*) ;

__attribute__((used)) static int FUNC_11(struct coresight_device *VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;
 struct tmc_drvdata *VAR_6 = FUNC_5(VAR_3->dev.parent);
 struct etr_buf *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 FUNC_6(&VAR_6->spinlock, VAR_5);
 VAR_7 = FUNC_2(VAR_6->sysfs_buf);
 if (!VAR_7 || (VAR_7->size != VAR_6->size)) {
  FUNC_7(&VAR_6->spinlock, VAR_5);


  VAR_9 = VAR_8 = FUNC_10(VAR_6);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);


  FUNC_6(&VAR_6->spinlock, VAR_5);
 }

 if (VAR_6->reading || VAR_6->mode == VAR_0) {
  VAR_4 = -VAR_2;
  goto out;
 }






 if (VAR_6->mode == VAR_1) {
  FUNC_3(VAR_3->refcnt);
  goto out;
 }





 VAR_7 = FUNC_2(VAR_6->sysfs_buf);
 if (!VAR_7 || (VAR_8 && VAR_7->size != VAR_8->size)) {
  VAR_9 = VAR_7;
  VAR_6->sysfs_buf = VAR_8;
 }

 VAR_4 = FUNC_8(VAR_6, VAR_6->sysfs_buf);
 if (!VAR_4) {
  VAR_6->mode = VAR_1;
  FUNC_3(VAR_3->refcnt);
 }
out:
 FUNC_7(&VAR_6->spinlock, VAR_5);


 if (VAR_9)
  FUNC_9(VAR_9);

 if (!VAR_4)
  FUNC_4(&VAR_3->dev, "TMC-ETR enabled\n");

 return VAR_4;
}
