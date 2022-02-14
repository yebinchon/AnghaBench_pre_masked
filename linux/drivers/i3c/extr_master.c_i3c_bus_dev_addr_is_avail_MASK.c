
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i3c_bus {int dummy; } ;
typedef enum i3c_addr_slot_status { ____Placeholder_i3c_addr_slot_status } i3c_addr_slot_status ;


 int VAR_0 ;
 int FUNC_0 (struct i3c_bus*,int ) ;

__attribute__((used)) static bool FUNC_1(struct i3c_bus *VAR_1, u8 VAR_2)
{
 enum i3c_addr_slot_status VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);

 return VAR_3 == VAR_0;
}
