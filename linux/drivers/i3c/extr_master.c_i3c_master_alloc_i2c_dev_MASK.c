
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct TYPE_3__ {struct i3c_master_controller* master; } ;
struct i2c_dev_desc {int lvr; int addr; struct i2c_dev_boardinfo const* boardinfo; TYPE_1__ common; } ;
struct TYPE_4__ {int addr; } ;
struct i2c_dev_boardinfo {int lvr; TYPE_2__ base; } ;


 int VAR_0 ;
 struct i2c_dev_desc* FUNC_0 (int ) ;
 int VAR_1 ;
 struct i2c_dev_desc* FUNC_1 (int,int ) ;

__attribute__((used)) static struct i2c_dev_desc *
FUNC_2(struct i3c_master_controller *VAR_2,
    const struct i2c_dev_boardinfo *VAR_3)
{
 struct i2c_dev_desc *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->common.master = VAR_2;
 VAR_4->boardinfo = VAR_3;
 VAR_4->addr = VAR_3->base.addr;
 VAR_4->lvr = VAR_3->lvr;

 return VAR_4;
}
