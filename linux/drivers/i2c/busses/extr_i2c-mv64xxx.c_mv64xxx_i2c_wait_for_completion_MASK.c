
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int timeout; } ;
struct mv64xxx_i2c_data {long rc; int aborting; int lock; scalar_t__ block; TYPE_1__ adapter; int state; int waitq; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__,int) ;
 int FUNC_1 (struct mv64xxx_i2c_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 long FUNC_4 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_5(struct mv64xxx_i2c_data *VAR_2)
{
 long VAR_3;
 unsigned long VAR_4;
 char VAR_5 = 0;

 VAR_3 = FUNC_4(VAR_2->waitq,
  !VAR_2->block, VAR_2->adapter.timeout);

 FUNC_2(&VAR_2->lock, VAR_4);
 if (!VAR_3) {
  VAR_2->rc = -VAR_0;
  VAR_5 = 1;
 } else if (VAR_3 < 0) {
  VAR_2->rc = VAR_3;
  VAR_5 = 1;
 }

 if (VAR_5 && VAR_2->block) {
  VAR_2->aborting = 1;
  FUNC_3(&VAR_2->lock, VAR_4);

  VAR_3 = FUNC_4(VAR_2->waitq,
   !VAR_2->block, VAR_2->adapter.timeout);

  if ((VAR_3 <= 0) && VAR_2->block) {
   VAR_2->state = VAR_1;
   FUNC_0(&VAR_2->adapter.dev,
    "mv64xxx: I2C bus locked, block: %d, "
    "time_left: %d\n", VAR_2->block,
    (int)VAR_3);
   FUNC_1(VAR_2);
  }
 } else
  FUNC_3(&VAR_2->lock, VAR_4);
}
