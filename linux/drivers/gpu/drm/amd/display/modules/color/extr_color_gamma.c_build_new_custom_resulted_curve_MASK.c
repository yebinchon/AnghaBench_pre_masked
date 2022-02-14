
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct dc_transfer_func_distributed_points {void** blue; void** green; void** red; } ;


 void* FUNC_0 (void*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(
 uint32_t VAR_2,
 struct dc_transfer_func_distributed_points *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = 0;

 while (VAR_4 != VAR_2 + 1) {
  VAR_3->red[VAR_4] = FUNC_0(
   VAR_3->red[VAR_4], VAR_1,
   VAR_0);
  VAR_3->green[VAR_4] = FUNC_0(
   VAR_3->green[VAR_4], VAR_1,
   VAR_0);
  VAR_3->blue[VAR_4] = FUNC_0(
   VAR_3->blue[VAR_4], VAR_1,
   VAR_0);

  ++VAR_4;
 }
}
