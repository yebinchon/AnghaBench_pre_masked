
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_11__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct lpbfifo_data {int dummy; } ;
struct TYPE_13__ {int enable; } ;
struct TYPE_12__ {int * chan; int irq; TYPE_7__* regs; int regs_size; int regs_phys; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_7__* FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 TYPE_2__ VAR_7 ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int ,int ,struct resource*) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 struct resource VAR_10;
 int VAR_11 = 0;

 FUNC_9(&VAR_7, 0, sizeof(struct lpbfifo_data));
 FUNC_14(&VAR_7.lock);

 VAR_7.chan = FUNC_5(&VAR_9->dev, "rx-tx");
 if (VAR_7.chan == ((void*)0))
  return -VAR_4;

 if (FUNC_10(VAR_9->dev.of_node, 0, &VAR_10) != 0) {
  FUNC_0(&VAR_9->dev, "bad 'reg' in 'sclpc' device tree node\n");
  VAR_11 = -VAR_2;
  goto err0;
 }

 VAR_7.regs_phys = VAR_10.start;
 VAR_7.regs_size = FUNC_13(&VAR_10);

 if (!FUNC_3(&VAR_9->dev, VAR_7.regs_phys,
     VAR_7.regs_size, VAR_0)) {
  FUNC_0(&VAR_9->dev, "unable to request region\n");
  VAR_11 = -VAR_1;
  goto err0;
 }

 VAR_7.regs = FUNC_2(&VAR_9->dev,
     VAR_7.regs_phys, VAR_7.regs_size);
 if (!VAR_7.regs) {
  FUNC_0(&VAR_9->dev, "mapping registers failed\n");
  VAR_11 = -VAR_3;
  goto err0;
 }

 FUNC_11(&VAR_7.regs->enable,
    VAR_6 | VAR_5);

 if (FUNC_6(&VAR_9->dev) != 0) {
  FUNC_0(&VAR_9->dev, "bad '/localbus' device tree node\n");
  VAR_11 = -VAR_2;
  goto err0;
 }

 VAR_7.irq = FUNC_8(VAR_9->dev.of_node, 0);
 if (!VAR_7.irq) {
  FUNC_0(&VAR_9->dev, "mapping irq failed\n");
  VAR_11 = -VAR_2;
  goto err0;
 }

 if (FUNC_12(VAR_7.irq, VAR_8, 0,
      VAR_0, &VAR_9->dev) != 0) {
  FUNC_0(&VAR_9->dev, "requesting irq failed\n");
  VAR_11 = -VAR_2;
  goto err1;
 }

 FUNC_1(&VAR_9->dev, "probe succeeded\n");
 return 0;

 err1:
 FUNC_7(VAR_7.irq);
 err0:
 FUNC_4(VAR_7.chan);
 return VAR_11;
}
