
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_ibi_slot {int dummy; } ;
struct i3c_dev_desc {int dummy; } ;
struct cdns_i3c_i2c_dev_data {int ibi_pool; } ;


 struct cdns_i3c_i2c_dev_data* FUNC_0 (struct i3c_dev_desc*) ;
 int FUNC_1 (int ,struct i3c_ibi_slot*) ;

__attribute__((used)) static void FUNC_2(struct i3c_dev_desc *VAR_0,
          struct i3c_ibi_slot *VAR_1)
{
 struct cdns_i3c_i2c_dev_data *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->ibi_pool, VAR_1);
}
