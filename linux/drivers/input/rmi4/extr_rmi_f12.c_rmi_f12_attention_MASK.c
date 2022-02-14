
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_function {int dev; struct rmi_device* rmi_dev; } ;
struct TYPE_2__ {int size; scalar_t__ data; } ;
struct rmi_driver_data {TYPE_1__ attn_data; } ;
struct rmi_device {int dev; } ;
struct rmi_2d_sensor {int pkt_size; int attn_size; int input; int * data_pkt; } ;
struct f12_data {size_t data1_offset; scalar_t__ data1; int data_addr; struct rmi_2d_sensor sensor; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 int FUNC_5 (struct f12_data*,int *,int) ;
 int FUNC_6 (struct rmi_device*,int ,int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 int VAR_3;
 struct rmi_function *VAR_4 = VAR_2;
 struct rmi_device *VAR_5 = VAR_4->rmi_dev;
 struct rmi_driver_data *VAR_6 = FUNC_2(&VAR_5->dev);
 struct f12_data *VAR_7 = FUNC_2(&VAR_4->dev);
 struct rmi_2d_sensor *VAR_8 = &VAR_7->sensor;
 int VAR_9 = VAR_8->pkt_size;

 if (VAR_6->attn_data.data) {
  if (VAR_8->attn_size > VAR_6->attn_data.size)
   VAR_9 = VAR_6->attn_data.size;
  else
   VAR_9 = VAR_8->attn_size;
  FUNC_4(VAR_8->data_pkt, VAR_6->attn_data.data,
   VAR_9);
  VAR_6->attn_data.data += VAR_9;
  VAR_6->attn_data.size -= VAR_9;
 } else {
  VAR_3 = FUNC_6(VAR_5, VAR_7->data_addr,
     VAR_8->data_pkt, VAR_8->pkt_size);
  if (VAR_3 < 0) {
   FUNC_1(&VAR_4->dev, "Failed to read object data. Code: %d.\n",
    VAR_3);
   return FUNC_0(VAR_3);
  }
 }

 if (VAR_7->data1)
  FUNC_5(VAR_7,
   &VAR_8->data_pkt[VAR_7->data1_offset], VAR_9);

 FUNC_3(VAR_8->input);

 return VAR_0;
}
