
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct i3c_ibi_setup {int dummy; } ;
struct i3c_dev_desc {int dummy; } ;
struct TYPE_2__ {unsigned int num_slots; int lock; struct i3c_dev_desc** slots; } ;
struct cdns_i3c_master {TYPE_1__ ibi; } ;
struct cdns_i3c_i2c_dev_data {unsigned int ibi; int * ibi_pool; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct i3c_master_controller* FUNC_2 (struct i3c_dev_desc*) ;
 struct cdns_i3c_i2c_dev_data* FUNC_3 (struct i3c_dev_desc*) ;
 int * FUNC_4 (struct i3c_dev_desc*,struct i3c_ibi_setup const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct cdns_i3c_master* FUNC_8 (struct i3c_master_controller*) ;

__attribute__((used)) static int FUNC_9(struct i3c_dev_desc *VAR_1,
           const struct i3c_ibi_setup *VAR_2)
{
 struct i3c_master_controller *VAR_3 = FUNC_2(VAR_1);
 struct cdns_i3c_master *VAR_4 = FUNC_8(VAR_3);
 struct cdns_i3c_i2c_dev_data *VAR_5 = FUNC_3(VAR_1);
 unsigned long VAR_6;
 unsigned int VAR_7;

 VAR_5->ibi_pool = FUNC_4(VAR_1, VAR_2);
 if (FUNC_0(VAR_5->ibi_pool))
  return FUNC_1(VAR_5->ibi_pool);

 FUNC_6(&VAR_4->ibi.lock, VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_4->ibi.num_slots; VAR_7++) {
  if (!VAR_4->ibi.slots[VAR_7]) {
   VAR_5->ibi = VAR_7;
   VAR_4->ibi.slots[VAR_7] = VAR_1;
   break;
  }
 }
 FUNC_7(&VAR_4->ibi.lock, VAR_6);

 if (VAR_7 < VAR_4->ibi.num_slots)
  return 0;

 FUNC_5(VAR_5->ibi_pool);
 VAR_5->ibi_pool = ((void*)0);

 return -VAR_0;
}
