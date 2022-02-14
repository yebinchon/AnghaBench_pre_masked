
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct img_hash_dev {int sys_clk; int hash_clk; int dma_lch; int dma_task; int done_task; int list; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct img_hash_dev*) ;
 int FUNC_3 (int *) ;
 struct img_hash_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct img_hash_dev *VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 FUNC_5(&VAR_0.lock);
 FUNC_3(&VAR_2->list);
 FUNC_6(&VAR_0.lock);

 FUNC_2(VAR_2);

 FUNC_7(&VAR_2->done_task);
 FUNC_7(&VAR_2->dma_task);

 FUNC_1(VAR_2->dma_lch);

 FUNC_0(VAR_2->hash_clk);
 FUNC_0(VAR_2->sys_clk);

 return 0;
}
