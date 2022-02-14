
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_i2c_bus {int dummy; } ;
struct hfi1_devdata {TYPE_1__* asic_data; } ;
struct TYPE_2__ {struct hfi1_i2c_bus* i2c_bus0; struct hfi1_i2c_bus* i2c_bus1; } ;


 int FUNC_0 (struct hfi1_devdata*,struct hfi1_i2c_bus*,int,int,int,void*,int) ;

__attribute__((used)) static int FUNC_1(struct hfi1_pportdata *VAR_0, u32 VAR_1, int VAR_2,
        int VAR_3, void *VAR_4, int VAR_5)
{
 struct hfi1_devdata *VAR_6 = VAR_0->dd;
 struct hfi1_i2c_bus *VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_7 = VAR_1 ? VAR_6->asic_data->i2c_bus1 : VAR_6->asic_data->i2c_bus0;
 VAR_8 = (VAR_2 & 0xff) >> 1;
 VAR_9 = (VAR_2 >> 8) & 0x3;
 return FUNC_0(VAR_6, VAR_7, VAR_8, VAR_3, VAR_9, VAR_4, VAR_5);
}
