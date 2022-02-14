
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i3c_bus {int* addrslots; } ;
typedef enum i3c_addr_slot_status { ____Placeholder_i3c_addr_slot_status } i3c_addr_slot_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum i3c_addr_slot_status
FUNC_0(struct i3c_bus *VAR_4, u16 VAR_5)
{
 int VAR_6, VAR_7 = VAR_5 * 2;

 if (VAR_5 > VAR_1)
  return VAR_2;

 VAR_6 = VAR_4->addrslots[VAR_7 / VAR_0];
 VAR_6 >>= VAR_7 % VAR_0;

 return VAR_6 & VAR_3;
}
