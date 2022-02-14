
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi4_attn_data {int * data; int irq_status; int member_0; } ;
struct rmi_driver_data {int attn_fifo; struct rmi4_attn_data attn_data; int * irq_status; } ;
struct rmi_device {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rmi_driver_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct rmi4_attn_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,char*,int) ;
 int FUNC_5 (struct rmi_device*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct rmi_device *VAR_4 = VAR_3;
 struct rmi_driver_data *VAR_5 = FUNC_0(&VAR_4->dev);
 struct rmi4_attn_data VAR_6 = {0};
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1(&VAR_5->attn_fifo, &VAR_6);
 if (VAR_8) {
  *(VAR_5->irq_status) = VAR_6.irq_status;
  VAR_5->attn_data = VAR_6;
 }

 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7)
  FUNC_4(VAR_1, &VAR_4->dev,
   "Failed to process interrupt request: %d\n", VAR_7);

 if (VAR_8) {
  FUNC_3(VAR_6.data);
  VAR_6.data = ((void*)0);
 }

 if (!FUNC_2(&VAR_5->attn_fifo))
  return FUNC_6(VAR_2, VAR_3);

 return VAR_0;
}
