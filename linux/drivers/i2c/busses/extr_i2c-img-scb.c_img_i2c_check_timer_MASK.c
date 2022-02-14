
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct img_i2c {int int_enable; int lock; TYPE_2__ adap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct img_i2c* FUNC_1 (int ,struct timer_list*,int ) ;
 struct img_i2c* VAR_5 ;
 unsigned int FUNC_2 (struct img_i2c*,int ) ;
 int FUNC_3 (struct img_i2c*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_6)
{
 struct img_i2c *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_4);
 unsigned long VAR_8;
 unsigned int VAR_9;

 FUNC_4(&VAR_7->lock, VAR_8);
 VAR_9 = FUNC_2(VAR_7, VAR_3);


 if (VAR_9 & VAR_1) {
  FUNC_0(VAR_7->adap.dev.parent,
   "abort condition detected by check timer\n");

  FUNC_3(VAR_7, VAR_2,
          VAR_7->int_enable | VAR_0);
 }

 FUNC_5(&VAR_7->lock, VAR_8);
}
