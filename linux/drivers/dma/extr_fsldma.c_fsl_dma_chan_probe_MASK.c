
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_3__ {int channels; } ;
struct fsldma_device {int feature; scalar_t__ irq; int dev; TYPE_1__ common; struct fsldma_chan** chan; } ;
struct TYPE_4__ {int device_node; TYPE_1__* device; } ;
struct fsldma_chan {int feature; int id; int idle; int regs; scalar_t__ irq; TYPE_2__ common; int pm_state; int ld_completed; int ld_running; int ld_pending; int desc_lock; int set_request_count; int set_dst_loop_size; int set_src_loop_size; int toggle_ext_start; int toggle_ext_pause; int name; int tasklet; int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int,char const*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_5 (struct fsldma_chan*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (struct fsldma_chan*) ;
 struct fsldma_chan* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct device_node*,int ,struct resource*) ;
 int FUNC_12 (struct device_node*,int ) ;
 int FUNC_13 (struct fsldma_chan*,int ) ;
 int FUNC_14 (int ,int,char*,size_t) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_17(struct fsldma_device *VAR_12,
 struct device_node *VAR_13, u32 VAR_14, const char *VAR_15)
{
 struct fsldma_chan *VAR_16;
 struct resource VAR_17;
 int VAR_18;


 VAR_16 = FUNC_9(sizeof(*VAR_16), VAR_4);
 if (!VAR_16) {
  VAR_18 = -VAR_1;
  goto out_return;
 }


 VAR_16->regs = FUNC_12(VAR_13, 0);
 if (!VAR_16->regs) {
  FUNC_2(VAR_12->dev, "unable to ioremap registers\n");
  VAR_18 = -VAR_1;
  goto out_free_chan;
 }

 VAR_18 = FUNC_11(VAR_13, 0, &VAR_17);
 if (VAR_18) {
  FUNC_2(VAR_12->dev, "unable to find 'reg' property\n");
  goto out_iounmap_regs;
 }

 VAR_16->feature = VAR_14;
 if (!VAR_12->feature)
  VAR_12->feature = VAR_16->feature;





 FUNC_1(VAR_12->feature != VAR_16->feature);

 VAR_16->dev = VAR_12->dev;
 VAR_16->id = (VAR_17.start & 0xfff) < 0x300 ?
     ((VAR_17.start - 0x100) & 0xfff) >> 7 :
     ((VAR_17.start - 0x200) & 0xfff) >> 7;
 if (VAR_16->id >= VAR_3) {
  FUNC_2(VAR_12->dev, "too many channels for device\n");
  VAR_18 = -VAR_0;
  goto out_iounmap_regs;
 }

 VAR_12->chan[VAR_16->id] = VAR_16;
 FUNC_16(&VAR_16->tasklet, VAR_6, (unsigned long)VAR_16);
 FUNC_14(VAR_16->name, sizeof(VAR_16->name), "chan%d", VAR_16->id);


 FUNC_5(VAR_16);


 FUNC_13(VAR_16, 0);

 switch (VAR_16->feature & VAR_2) {
 case 128:
  VAR_16->toggle_ext_pause = VAR_10;

 case 129:
  VAR_16->toggle_ext_start = VAR_11;
  VAR_16->set_src_loop_size = VAR_9;
  VAR_16->set_dst_loop_size = VAR_7;
  VAR_16->set_request_count = VAR_8;
 }

 FUNC_15(&VAR_16->desc_lock);
 FUNC_0(&VAR_16->ld_pending);
 FUNC_0(&VAR_16->ld_running);
 FUNC_0(&VAR_16->ld_completed);
 VAR_16->idle = 1;




 VAR_16->common.device = &VAR_12->common;
 FUNC_4(&VAR_16->common);


 VAR_16->irq = FUNC_7(VAR_13, 0);


 FUNC_10(&VAR_16->common.device_node, &VAR_12->common.channels);

 FUNC_3(VAR_12->dev, "#%d (%s), irq %d\n", VAR_16->id, VAR_15,
   VAR_16->irq ? VAR_16->irq : VAR_12->irq);

 return 0;

out_iounmap_regs:
 FUNC_6(VAR_16->regs);
out_free_chan:
 FUNC_8(VAR_16);
out_return:
 return VAR_18;
}
