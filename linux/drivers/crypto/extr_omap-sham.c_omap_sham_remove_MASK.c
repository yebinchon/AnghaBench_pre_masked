
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct omap_sham_dev {int dma_lch; int polling_mode; int done_task; TYPE_2__* pdata; int list; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int algs_info_size; TYPE_1__* algs_info; } ;
struct TYPE_4__ {int registered; int * algs_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct omap_sham_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 TYPE_3__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct omap_sham_dev *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  return -VAR_0;
 FUNC_5(&VAR_1.lock);
 FUNC_2(&VAR_3->list);
 FUNC_6(&VAR_1.lock);
 for (VAR_4 = VAR_3->pdata->algs_info_size - 1; VAR_4 >= 0; VAR_4--)
  for (VAR_5 = VAR_3->pdata->algs_info[VAR_4].registered - 1; VAR_5 >= 0; VAR_5--)
   FUNC_0(
     &VAR_3->pdata->algs_info[VAR_4].algs_list[VAR_5]);
 FUNC_7(&VAR_3->done_task);
 FUNC_4(&VAR_2->dev);

 if (!VAR_3->polling_mode)
  FUNC_1(VAR_3->dma_lch);

 return 0;
}
