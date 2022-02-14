
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int * kernel_send_context; int pio_map_lock; int pio_map; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

void FUNC_7(struct hfi1_devdata *VAR_0)
{

 if (FUNC_3(VAR_0->pio_map)) {
  FUNC_4(&VAR_0->pio_map_lock);
  FUNC_2(FUNC_3(VAR_0->pio_map));
  FUNC_0(VAR_0->pio_map, ((void*)0));
  FUNC_5(&VAR_0->pio_map_lock);
  FUNC_6();
 }
 FUNC_1(VAR_0->kernel_send_context);
 VAR_0->kernel_send_context = ((void*)0);
}
