
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pc87427_data {int* address; int * fan_status; void** fan_min; void** fan; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct pc87427_data *VAR_5, u8 VAR_6)
{
 int VAR_7 = VAR_5->address[VAR_0];

 FUNC_3(FUNC_0(VAR_6), VAR_7 + VAR_1);
 VAR_5->fan[VAR_6] = FUNC_2(VAR_7 + VAR_2);
 VAR_5->fan_min[VAR_6] = FUNC_2(VAR_7 + VAR_3);
 VAR_5->fan_status[VAR_6] = FUNC_1(VAR_7 + VAR_4);

 FUNC_3(VAR_5->fan_status[VAR_6], VAR_7 + VAR_4);
}
