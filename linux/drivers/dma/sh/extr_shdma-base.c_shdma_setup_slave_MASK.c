
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shdma_ops {int (* set_slave ) (struct shdma_chan*,int,int ,int) ;} ;
struct shdma_dev {struct shdma_ops* ops; } ;
struct TYPE_3__ {int device; } ;
struct shdma_chan {int hw_req; int real_slave_id; int slave_id; TYPE_2__* dev; TYPE_1__ dma_chan; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct shdma_chan*,int,int ,int) ;
 int FUNC_2 (struct shdma_chan*,int,int ,int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 struct shdma_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct shdma_chan *VAR_4, dma_addr_t VAR_5)
{
 struct shdma_dev *VAR_6 = FUNC_4(VAR_4->dma_chan.device);
 const struct shdma_ops *VAR_7 = VAR_6->ops;
 int VAR_8, VAR_9;

 if (VAR_4->dev->of_node) {
  VAR_9 = VAR_4->hw_req;
  VAR_8 = VAR_7->set_slave(VAR_4, VAR_9, VAR_5, 1);
  if (VAR_8 < 0)
   return VAR_8;
 } else {
  VAR_9 = VAR_4->real_slave_id;
 }

 if (VAR_4->real_slave_id < 0 || VAR_4->real_slave_id >= VAR_3)
  return -VAR_1;

 if (FUNC_3(VAR_4->real_slave_id, VAR_2))
  return -VAR_0;

 VAR_8 = VAR_7->set_slave(VAR_4, VAR_9, VAR_5, 0);
 if (VAR_8 < 0) {
  FUNC_0(VAR_4->real_slave_id, VAR_2);
  return VAR_8;
 }

 VAR_4->slave_id = VAR_4->real_slave_id;

 return 0;
}
