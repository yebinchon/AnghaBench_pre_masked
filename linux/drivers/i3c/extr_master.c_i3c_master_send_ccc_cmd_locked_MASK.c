
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct i3c_master_controller {TYPE_2__* ops; TYPE_1__ bus; scalar_t__ init_done; } ;
struct i3c_ccc_cmd {int id; scalar_t__ err; int ndests; int dests; } ;
struct TYPE_4__ {int (* send_ccc_cmd ) (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;int (* supports_ccc_cmd ) (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;
 int FUNC_3 (struct i3c_master_controller*,struct i3c_ccc_cmd*) ;

__attribute__((used)) static int FUNC_4(struct i3c_master_controller *VAR_4,
       struct i3c_ccc_cmd *VAR_5)
{
 int VAR_6;

 if (!VAR_5 || !VAR_4)
  return -VAR_0;

 if (FUNC_0(VAR_4->init_done &&
      !FUNC_1(&VAR_4->bus.lock)))
  return -VAR_0;

 if (!VAR_4->ops->send_ccc_cmd)
  return -VAR_1;

 if ((VAR_5->id & VAR_2) && (!VAR_5->dests || !VAR_5->ndests))
  return -VAR_0;

 if (VAR_4->ops->supports_ccc_cmd &&
     !VAR_4->ops->supports_ccc_cmd(VAR_4, VAR_5))
  return -VAR_1;

 VAR_6 = VAR_4->ops->send_ccc_cmd(VAR_4, VAR_5);
 if (VAR_6) {
  if (VAR_5->err != VAR_3)
   return VAR_5->err;

  return VAR_6;
 }

 return 0;
}
