
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device_info {char* name; int id; int dma_mask; int size_data; int * data; int num_res; int * res; int * parent; } ;


 int FUNC_0 (struct platform_device_info*) ;

__attribute__((used)) static void FUNC_1(void)
{



 struct platform_device_info VAR_0 = {
  .parent = ((void*)0),
  .name = "msm",
  .id = -1,
  .res = ((void*)0),
  .num_res = 0,
  .data = ((void*)0),
  .size_data = 0,
  .dma_mask = ~0,
 };
 FUNC_0(&VAR_0);
}
