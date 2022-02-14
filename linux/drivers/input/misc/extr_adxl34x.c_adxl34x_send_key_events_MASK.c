
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adxl34x_platform_data {int * ev_code_tap; } ;
struct adxl34x {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adxl34x *VAR_2,
  struct adxl34x_platform_data *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = VAR_0; VAR_6 <= VAR_1; VAR_6++) {
  if (VAR_4 & (1 << (VAR_1 - VAR_6)))
   FUNC_0(VAR_2->input,
      VAR_3->ev_code_tap[VAR_6], VAR_5);
 }
}
