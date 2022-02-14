
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pc87427_data {int* address; void** temp_status; void** temp_type; void** temp_crit; void** temp_min; void** temp_max; int * temp; } ;


 void* FUNC_0 (size_t) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct pc87427_data *VAR_8, u8 VAR_9)
{
 int VAR_10 = VAR_8->address[VAR_0];

 FUNC_4(FUNC_0(VAR_9), VAR_10 + VAR_1);
 VAR_8->temp[VAR_9] = FUNC_3(FUNC_2(VAR_10 + VAR_2));
 VAR_8->temp_max[VAR_9] = FUNC_1(VAR_10 + VAR_4);
 VAR_8->temp_min[VAR_9] = FUNC_1(VAR_10 + VAR_5);
 VAR_8->temp_crit[VAR_9] = FUNC_1(VAR_10 + VAR_3);
 VAR_8->temp_type[VAR_9] = FUNC_1(VAR_10 + VAR_7);
 VAR_8->temp_status[VAR_9] = FUNC_1(VAR_10 + VAR_6);

 FUNC_4(VAR_8->temp_status[VAR_9], VAR_10 + VAR_6);
}
