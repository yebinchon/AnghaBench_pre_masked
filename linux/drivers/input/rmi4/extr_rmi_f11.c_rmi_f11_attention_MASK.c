
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int data_base_addr; } ;
struct rmi_function {TYPE_1__ fd; int dev; struct rmi_device* rmi_dev; } ;
struct TYPE_5__ {int size; scalar_t__ data; } ;
struct rmi_driver_data {TYPE_2__ attn_data; } ;
struct rmi_device {int dev; } ;
struct TYPE_6__ {int pkt_size; int attn_size; int data_pkt; } ;
struct f11_data {TYPE_3__ sensor; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (struct f11_data*,TYPE_3__*,int) ;
 int FUNC_4 (struct rmi_device*,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct rmi_function *VAR_3 = VAR_2;
 struct rmi_device *VAR_4 = VAR_3->rmi_dev;
 struct rmi_driver_data *VAR_5 = FUNC_1(&VAR_4->dev);
 struct f11_data *VAR_6 = FUNC_1(&VAR_3->dev);
 u16 VAR_7 = VAR_3->fd.data_base_addr;
 int VAR_8;
 int VAR_9 = VAR_6->sensor.pkt_size;

 if (VAR_5->attn_data.data) {




  if (VAR_6->sensor.attn_size > VAR_5->attn_data.size)
   VAR_9 = VAR_5->attn_data.size;
  else
   VAR_9 = VAR_6->sensor.attn_size;
  FUNC_2(VAR_6->sensor.data_pkt, VAR_5->attn_data.data,
   VAR_9);
  VAR_5->attn_data.data += VAR_9;
  VAR_5->attn_data.size -= VAR_9;
 } else {
  VAR_8 = FUNC_4(VAR_4,
    VAR_7, VAR_6->sensor.data_pkt,
    VAR_6->sensor.pkt_size);
  if (VAR_8 < 0)
   return FUNC_0(VAR_8);
 }

 FUNC_3(VAR_6, &VAR_6->sensor, VAR_9);

 return VAR_0;
}
