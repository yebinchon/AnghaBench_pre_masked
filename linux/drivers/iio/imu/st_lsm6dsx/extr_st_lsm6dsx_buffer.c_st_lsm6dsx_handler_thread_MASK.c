
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_lsm6dsx_hw {int fifo_lock; TYPE_2__* settings; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int (* read_fifo ) (struct st_lsm6dsx_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ fifo_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct st_lsm6dsx_hw*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct st_lsm6dsx_hw *VAR_4 = VAR_3;
 int VAR_5;

 FUNC_0(&VAR_4->fifo_lock);
 VAR_5 = VAR_4->settings->fifo_ops.read_fifo(VAR_4);
 FUNC_1(&VAR_4->fifo_lock);

 return VAR_5 ? VAR_0 : VAR_1;
}
