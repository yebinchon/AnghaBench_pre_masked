
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct idma64_chip {int irq; int dev; struct idma64* idma64; } ;
struct TYPE_3__ {int task; } ;
struct idma64_chan {TYPE_1__ vchan; } ;
struct TYPE_4__ {unsigned short chancnt; } ;
struct idma64 {struct idma64_chan* chan; TYPE_2__ dma; } ;


 int FUNC_0 (int ,int ,struct idma64*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct idma64_chip *VAR_0)
{
 struct idma64 *VAR_1 = VAR_0->idma64;
 unsigned short VAR_2;

 FUNC_1(&VAR_1->dma);





 FUNC_0(VAR_0->dev, VAR_0->irq, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->dma.chancnt; VAR_2++) {
  struct idma64_chan *VAR_3 = &VAR_1->chan[VAR_2];

  FUNC_2(&VAR_3->vchan.task);
 }

 return 0;
}
