
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i3c_bus {unsigned long* addrslots; } ;
typedef enum i3c_addr_slot_status { ____Placeholder_i3c_addr_slot_status } i3c_addr_slot_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct i3c_bus *VAR_3, u16 VAR_4,
      enum i3c_addr_slot_status VAR_5)
{
 int VAR_6 = VAR_4 * 2;
 unsigned long *VAR_7;

 if (VAR_4 > VAR_1)
  return;

 VAR_7 = VAR_3->addrslots + (VAR_6 / VAR_0);
 *VAR_7 &= ~((unsigned long)VAR_2 <<
      (VAR_6 % VAR_0));
 *VAR_7 |= (unsigned long)VAR_5 << (VAR_6 % VAR_0);
}
