
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_driver_data {int attn_fifo; int enabled; } ;
struct rmi_device {int dev; } ;
struct rmi4_attn_data {unsigned long irq_status; size_t size; void* data; } ;


 int VAR_0 ;
 struct rmi_driver_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct rmi4_attn_data) ;
 void* FUNC_2 (void*,size_t,int ) ;

void FUNC_3(struct rmi_device *VAR_1, unsigned long VAR_2,
         void *VAR_3, size_t VAR_4)
{
 struct rmi_driver_data *VAR_5 = FUNC_0(&VAR_1->dev);
 struct rmi4_attn_data VAR_6;
 void *VAR_7;

 if (!VAR_5->enabled)
  return;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_0);
 if (!VAR_7)
  return;

 VAR_6.irq_status = VAR_2;
 VAR_6.size = VAR_4;
 VAR_6.data = VAR_7;

 FUNC_1(&VAR_5->attn_fifo, VAR_6);
}
