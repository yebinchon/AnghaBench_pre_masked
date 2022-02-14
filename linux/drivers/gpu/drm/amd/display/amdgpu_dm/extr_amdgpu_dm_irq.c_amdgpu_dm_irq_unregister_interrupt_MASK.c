
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dc_interrupt_params {int irq_source; int int_context; } ;
struct amdgpu_device {int dummy; } ;
typedef int int_params ;
typedef enum dc_irq_source { ____Placeholder_dc_irq_source } dc_irq_source ;


 int FUNC_0 (char*,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct dc_interrupt_params*,int ,int) ;
 struct list_head* FUNC_2 (struct amdgpu_device*,void*,struct dc_interrupt_params*) ;
 int FUNC_3 (int,void*) ;

void FUNC_4(struct amdgpu_device *VAR_1,
     enum dc_irq_source VAR_2,
     void *VAR_3)
{
 struct list_head *VAR_4;
 struct dc_interrupt_params VAR_5;
 int VAR_6;

 if (0 == FUNC_3(VAR_2, VAR_3))
  return;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.irq_source = VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {

  VAR_5.int_context = VAR_6;

  VAR_4 = FUNC_2(VAR_1, VAR_3, &VAR_5);

  if (VAR_4 != ((void*)0))
   break;
 }

 if (VAR_4 == ((void*)0)) {


  FUNC_0(
  "DM_IRQ: failed to find irq handler:%p for irq_source:%d!\n",
   VAR_3, VAR_2);
 }
}
