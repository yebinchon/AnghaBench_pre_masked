
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {scalar_t__ config_type; int reading; scalar_t__ mode; int spinlock; int sysfs_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tmc_drvdata*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct tmc_drvdata *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;


 if (FUNC_0(VAR_4->config_type != VAR_3))
  return -VAR_2;

 FUNC_2(&VAR_4->spinlock, VAR_6);
 if (VAR_4->reading) {
  VAR_5 = -VAR_1;
  goto out;
 }






 if (!VAR_4->sysfs_buf) {
  VAR_5 = -VAR_2;
  goto out;
 }


 if (VAR_4->mode == VAR_0)
  FUNC_1(VAR_4);

 VAR_4->reading = 1;
out:
 FUNC_3(&VAR_4->spinlock, VAR_6);

 return VAR_5;
}
