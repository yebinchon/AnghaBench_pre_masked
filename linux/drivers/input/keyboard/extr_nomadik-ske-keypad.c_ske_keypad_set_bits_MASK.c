
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ske_keypad {int ske_keypad_lock; scalar_t__ reg_base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ske_keypad *VAR_0, u16 VAR_1,
  u8 VAR_2, u8 VAR_3)
{
 u32 VAR_4;

 FUNC_1(&VAR_0->ske_keypad_lock);

 VAR_4 = FUNC_0(VAR_0->reg_base + VAR_1);
 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;
 FUNC_3(VAR_4, VAR_0->reg_base + VAR_1);

 FUNC_2(&VAR_0->ske_keypad_lock);
}
