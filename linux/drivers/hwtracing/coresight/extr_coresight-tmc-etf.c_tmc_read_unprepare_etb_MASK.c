
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {scalar_t__ config_type; scalar_t__ mode; char* buf; int reading; int spinlock; int size; scalar_t__ base; } ;
typedef enum tmc_mode { ____Placeholder_tmc_mode } tmc_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tmc_drvdata*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct tmc_drvdata *VAR_6)
{
 char *VAR_7 = ((void*)0);
 enum tmc_mode VAR_8;
 unsigned long VAR_9;


 if (FUNC_0(VAR_6->config_type != VAR_2 &&
    VAR_6->config_type != VAR_3))
  return -VAR_1;

 FUNC_5(&VAR_6->spinlock, VAR_9);


 VAR_8 = FUNC_4(VAR_6->base + VAR_4);
 if (VAR_8 != VAR_5) {
  FUNC_6(&VAR_6->spinlock, VAR_9);
  return -VAR_1;
 }


 if (VAR_6->mode == VAR_0) {
  FUNC_3(VAR_6->buf, 0, VAR_6->size);
  FUNC_1(VAR_6);
 } else {




  VAR_7 = VAR_6->buf;
  VAR_6->buf = ((void*)0);
 }

 VAR_6->reading = 0;
 FUNC_6(&VAR_6->spinlock, VAR_9);





 FUNC_2(VAR_7);

 return 0;
}
