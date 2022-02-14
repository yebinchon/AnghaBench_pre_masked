
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rackmeter_dma {int dummy; } ;
struct rackmeter {scalar_t__ ubuf; int dma_buf_p; int dma_buf_v; int i2s_regs; int dma_regs; int irq; } ;
struct TYPE_3__ {int dev; } ;
struct macio_dev {TYPE_1__ ofdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 struct rackmeter* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int ,struct rackmeter*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rackmeter*) ;
 TYPE_2__* FUNC_8 (struct macio_dev*) ;
 int FUNC_9 (struct macio_dev*) ;
 int FUNC_10 (struct rackmeter*) ;

__attribute__((used)) static int FUNC_11(struct macio_dev* VAR_0)
{
 struct rackmeter *VAR_1 = FUNC_1(&VAR_0->ofdev.dev);


 FUNC_10(VAR_1);


 FUNC_2(&VAR_0->ofdev.dev, ((void*)0));


 FUNC_0(VAR_1->dma_regs);


 FUNC_4(VAR_1->irq, VAR_1);


 FUNC_6(VAR_1->dma_regs);
 FUNC_6(VAR_1->i2s_regs);


 FUNC_3(&FUNC_8(VAR_0)->dev,
     sizeof(struct rackmeter_dma),
     VAR_1->dma_buf_v, VAR_1->dma_buf_p);


 FUNC_5((unsigned long)VAR_1->ubuf);







 FUNC_7(VAR_1);

 return 0;
}
