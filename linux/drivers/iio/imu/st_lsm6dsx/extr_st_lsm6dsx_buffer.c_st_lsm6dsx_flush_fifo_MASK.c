
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_lsm6dsx_hw {int fifo_lock; TYPE_2__* settings; } ;
struct TYPE_3__ {int (* read_fifo ) (struct st_lsm6dsx_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ fifo_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct st_lsm6dsx_hw*,int ) ;
 int FUNC_3 (struct st_lsm6dsx_hw*) ;

int FUNC_4(struct st_lsm6dsx_hw *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->fifo_lock);

 VAR_1->settings->fifo_ops.read_fifo(VAR_1);
 VAR_2 = FUNC_2(VAR_1, VAR_0);

 FUNC_1(&VAR_1->fifo_lock);

 return VAR_2;
}
