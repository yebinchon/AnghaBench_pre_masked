
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {scalar_t__ config_type; scalar_t__ mode; int reading; int spinlock; struct etr_buf* sysfs_buf; } ;
struct etr_buf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tmc_drvdata*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct etr_buf*) ;

int FUNC_5(struct tmc_drvdata *VAR_3)
{
 unsigned long VAR_4;
 struct etr_buf *VAR_5 = ((void*)0);


 if (FUNC_0(VAR_3->config_type != VAR_2))
  return -VAR_1;

 FUNC_2(&VAR_3->spinlock, VAR_4);


 if (VAR_3->mode == VAR_0) {





  FUNC_1(VAR_3);
 } else {




  VAR_5 = VAR_3->sysfs_buf;
  VAR_3->sysfs_buf = ((void*)0);
 }

 VAR_3->reading = 0;
 FUNC_3(&VAR_3->spinlock, VAR_4);


 if (VAR_5)
  FUNC_4(VAR_5);

 return 0;
}
