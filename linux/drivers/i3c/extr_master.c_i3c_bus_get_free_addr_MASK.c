
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i3c_bus {int dummy; } ;
typedef enum i3c_addr_slot_status { ____Placeholder_i3c_addr_slot_status } i3c_addr_slot_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct i3c_bus*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct i3c_bus *VAR_3, u8 VAR_4)
{
 enum i3c_addr_slot_status VAR_5;
 u8 VAR_6;

 for (VAR_6 = VAR_4; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3, VAR_6);
  if (VAR_5 == VAR_1)
   return VAR_6;
 }

 return -VAR_0;
}
