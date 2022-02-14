
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pc87427_data {int* address; void** pwm; void** pwm_enable; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pc87427_data *VAR_4, u8 VAR_5)
{
 int VAR_6 = VAR_4->address[VAR_0];

 FUNC_2(FUNC_0(VAR_5), VAR_6 + VAR_1);
 VAR_4->pwm_enable[VAR_5] = FUNC_1(VAR_6 + VAR_3);
 VAR_4->pwm[VAR_5] = FUNC_1(VAR_6 + VAR_2);
}
