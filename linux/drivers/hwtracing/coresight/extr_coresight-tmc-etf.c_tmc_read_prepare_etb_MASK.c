
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {scalar_t__ config_type; int reading; scalar_t__ mode; int spinlock; int * buf; scalar_t__ base; } ;
typedef enum tmc_mode { ____Placeholder_tmc_mode } tmc_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tmc_drvdata*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct tmc_drvdata *VAR_8)
{
 enum tmc_mode VAR_9;
 int VAR_10 = 0;
 unsigned long VAR_11;


 if (FUNC_0(VAR_8->config_type != VAR_4 &&
    VAR_8->config_type != VAR_5))
  return -VAR_3;

 FUNC_3(&VAR_8->spinlock, VAR_11);

 if (VAR_8->reading) {
  VAR_10 = -VAR_2;
  goto out;
 }


 VAR_9 = FUNC_2(VAR_8->base + VAR_6);
 if (VAR_9 != VAR_7) {
  VAR_10 = -VAR_3;
  goto out;
 }


 if (VAR_8->mode == VAR_0) {
  VAR_10 = -VAR_3;
  goto out;
 }


 if (VAR_8->buf == ((void*)0)) {
  VAR_10 = -VAR_3;
  goto out;
 }


 if (VAR_8->mode == VAR_1)
  FUNC_1(VAR_8);

 VAR_8->reading = 1;
out:
 FUNC_4(&VAR_8->spinlock, VAR_11);

 return VAR_10;
}
