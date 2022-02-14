
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rackmeter {int dma_regs; } ;
struct TYPE_2__ {int dev; } ;
struct macio_dev {TYPE_1__ ofdev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct rackmeter* FUNC_1 (int *) ;
 int FUNC_2 (struct rackmeter*) ;

__attribute__((used)) static int FUNC_3(struct macio_dev* VAR_1)
{
 struct rackmeter *VAR_2 = FUNC_1(&VAR_1->ofdev.dev);

 if (VAR_2 == ((void*)0))
  return -VAR_0;


 FUNC_2(VAR_2);


 FUNC_0(VAR_2->dma_regs);

 return 0;
}
