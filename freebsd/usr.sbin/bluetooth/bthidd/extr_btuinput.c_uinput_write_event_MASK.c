
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
struct input_event {scalar_t__ value; void* code; void* type; } ;
typedef scalar_t__ int32_t ;
typedef int ie ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct input_event*,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,struct input_event*,int) ;

__attribute__((used)) static int32_t
FUNC_3(int32_t VAR_0, uint16_t VAR_1, uint16_t VAR_2, int32_t VAR_3)
{
 struct input_event VAR_4;

 FUNC_0(VAR_0 >= 0);

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type = VAR_1;
 VAR_4.code = VAR_2;
 VAR_4.value = VAR_3;
 return (FUNC_2(VAR_0, &VAR_4, sizeof(VAR_4)));
}
