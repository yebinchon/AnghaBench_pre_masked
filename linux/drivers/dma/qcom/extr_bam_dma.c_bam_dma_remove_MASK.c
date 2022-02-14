
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct bam_device {size_t num_channels; int bamclk; int task; TYPE_2__* channels; int dev; int irq; int common; } ;
struct TYPE_4__ {int task; int chan; } ;
struct TYPE_5__ {int fifo_phys; int fifo_virt; TYPE_1__ vc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bam_device*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct bam_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 struct bam_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct bam_device *VAR_3 = FUNC_7(VAR_2);
 u32 VAR_4;

 FUNC_8(&VAR_2->dev);

 FUNC_6(VAR_2->dev.of_node);
 FUNC_4(&VAR_3->common);


 FUNC_10(0, FUNC_0(VAR_3, 0, VAR_1));

 FUNC_3(VAR_3->dev, VAR_3->irq, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_channels; VAR_4++) {
  FUNC_1(&VAR_3->channels[VAR_4].vc.chan);
  FUNC_9(&VAR_3->channels[VAR_4].vc.task);

  if (!VAR_3->channels[VAR_4].fifo_virt)
   continue;

  FUNC_5(VAR_3->dev, VAR_0,
       VAR_3->channels[VAR_4].fifo_virt,
       VAR_3->channels[VAR_4].fifo_phys);
 }

 FUNC_9(&VAR_3->task);

 FUNC_2(VAR_3->bamclk);

 return 0;
}
