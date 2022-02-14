
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct i3c_dev_desc {int dummy; } ;
struct TYPE_2__ {int lock; int ** slots; } ;
struct cdns_i3c_master {TYPE_1__ ibi; } ;
struct cdns_i3c_i2c_dev_data {size_t ibi; int ibi_pool; } ;


 struct i3c_master_controller* FUNC_0 (struct i3c_dev_desc*) ;
 struct cdns_i3c_i2c_dev_data* FUNC_1 (struct i3c_dev_desc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct cdns_i3c_master* FUNC_5 (struct i3c_master_controller*) ;

__attribute__((used)) static void FUNC_6(struct i3c_dev_desc *VAR_0)
{
 struct i3c_master_controller *VAR_1 = FUNC_0(VAR_0);
 struct cdns_i3c_master *VAR_2 = FUNC_5(VAR_1);
 struct cdns_i3c_i2c_dev_data *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;

 FUNC_3(&VAR_2->ibi.lock, VAR_4);
 VAR_2->ibi.slots[VAR_3->ibi] = ((void*)0);
 VAR_3->ibi = -1;
 FUNC_4(&VAR_2->ibi.lock, VAR_4);

 FUNC_2(VAR_3->ibi_pool);
}
