
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_queue_inst {int proxy_id; int queue_id; int irq; int name; } ;
struct ti_msgmgr_desc {scalar_t__ is_sproxy; } ;
struct mbox_chan {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
typedef int of_rx_irq_name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int,...) ;
 int FUNC_1 (struct device_node*,char*) ;
 struct device_node* FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (int,int ,int ,int ,struct mbox_chan*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3,
          const struct ti_msgmgr_desc *VAR_4,
          struct ti_queue_inst *VAR_5,
          struct mbox_chan *VAR_6)
{
 int VAR_7 = 0;
 char VAR_8[7];
 struct device_node *VAR_9;

 FUNC_5(VAR_8, sizeof(VAR_8),
   "rx_%03d", VAR_4->is_sproxy ? VAR_5->proxy_id : VAR_5->queue_id);


 if (VAR_5->irq < 0) {
  VAR_9 = FUNC_2(VAR_3->of_node);
  if (!VAR_9)
   return -VAR_0;
  VAR_5->irq = FUNC_1(VAR_9, VAR_8);
  FUNC_3(VAR_9);

  if (VAR_5->irq < 0) {
   FUNC_0(VAR_3,
    "QID %d PID %d:No IRQ[%s]: %d\n",
    VAR_5->queue_id, VAR_5->proxy_id,
    VAR_8, VAR_5->irq);
   return VAR_5->irq;
  }
 }


 VAR_7 = FUNC_4(VAR_5->irq, VAR_2,
     VAR_1, VAR_5->name, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3, "Unable to get IRQ %d on %s(res=%d)\n",
   VAR_5->irq, VAR_5->name, VAR_7);
 }

 return VAR_7;
}
