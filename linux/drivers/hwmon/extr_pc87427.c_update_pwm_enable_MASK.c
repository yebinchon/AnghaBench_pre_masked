
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pc87427_data {int* address; int * pwm_enable; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pc87427_data *VAR_3, int VAR_4, u8 VAR_5)
{
 int VAR_6 = VAR_3->address[VAR_0];
 VAR_3->pwm_enable[VAR_4] &= ~VAR_2;
 VAR_3->pwm_enable[VAR_4] |= VAR_5;
 FUNC_0(VAR_3->pwm_enable[VAR_4], VAR_6 + VAR_1);
}
