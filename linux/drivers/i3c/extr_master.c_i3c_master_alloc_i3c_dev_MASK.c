
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct i3c_device_info {int dummy; } ;
struct TYPE_2__ {struct i3c_master_controller* master; } ;
struct i3c_dev_desc {int ibi_lock; struct i3c_device_info info; TYPE_1__ common; } ;


 int VAR_0 ;
 struct i3c_dev_desc* FUNC_0 (int ) ;
 int VAR_1 ;
 struct i3c_dev_desc* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct i3c_dev_desc *
FUNC_3(struct i3c_master_controller *VAR_2,
    const struct i3c_device_info *VAR_3)
{
 struct i3c_dev_desc *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->common.master = VAR_2;
 VAR_4->info = *VAR_3;
 FUNC_2(&VAR_4->ibi_lock);

 return VAR_4;
}
