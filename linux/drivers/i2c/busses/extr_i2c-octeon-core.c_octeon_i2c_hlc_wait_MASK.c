
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ timeout; } ;
struct octeon_i2c {int broken_irq_mode; int dev; scalar_t__ broken_irq_check; int (* hlc_int_disable ) (struct octeon_i2c*) ;TYPE_1__ adap; int queue; int (* hlc_int_enable ) (struct octeon_i2c*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct octeon_i2c*) ;
 scalar_t__ FUNC_3 (struct octeon_i2c*) ;
 int FUNC_4 (struct octeon_i2c*) ;
 int FUNC_5 (struct octeon_i2c*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct octeon_i2c *VAR_2)
{
 int VAR_3;





 if (VAR_2->broken_irq_mode) {
  u64 VAR_4 = FUNC_1() + VAR_2->adap.timeout;

  while (!FUNC_3(VAR_2) &&
         FUNC_6(FUNC_1(), VAR_4))
   FUNC_7(VAR_1 / 2, VAR_1);

  return FUNC_3(VAR_2) ? 0 : -VAR_0;
 }

 VAR_2->hlc_int_enable(VAR_2);
 VAR_3 = FUNC_8(VAR_2->queue,
           FUNC_3(VAR_2),
           VAR_2->adap.timeout);
 VAR_2->hlc_int_disable(VAR_2);
 if (!VAR_3)
  FUNC_2(VAR_2);

 if (VAR_2->broken_irq_check && !VAR_3 &&
     FUNC_3(VAR_2)) {
  FUNC_0(VAR_2->dev, "broken irq connection detected, switching to polling mode.\n");
  VAR_2->broken_irq_mode = 1;
  return 0;
 }

 if (!VAR_3)
  return -VAR_0;
 return 0;
}
