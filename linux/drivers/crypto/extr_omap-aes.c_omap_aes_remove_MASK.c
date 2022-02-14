
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_aes_dev {int dev; int done_task; int engine; TYPE_3__* pdata; int list; } ;
struct aead_alg {int dummy; } ;
struct TYPE_6__ {int algs_info_size; TYPE_2__* aead_algs_info; TYPE_1__* algs_info; } ;
struct TYPE_5__ {int size; struct aead_alg* algs_list; } ;
struct TYPE_4__ {int registered; int * algs_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct aead_alg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct omap_aes_dev*) ;
 struct omap_aes_dev* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct omap_aes_dev *VAR_3 = FUNC_5(VAR_2);
 struct aead_alg *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_3)
  return -VAR_0;

 FUNC_7(&VAR_1);
 FUNC_3(&VAR_3->list);
 FUNC_8(&VAR_1);

 for (VAR_5 = VAR_3->pdata->algs_info_size - 1; VAR_5 >= 0; VAR_5--)
  for (VAR_6 = VAR_3->pdata->algs_info[VAR_5].registered - 1; VAR_6 >= 0; VAR_6--)
   FUNC_2(
     &VAR_3->pdata->algs_info[VAR_5].algs_list[VAR_6]);

 for (VAR_5 = VAR_3->pdata->aead_algs_info->size - 1; VAR_5 >= 0; VAR_5--) {
  VAR_4 = &VAR_3->pdata->aead_algs_info->algs_list[VAR_5];
  FUNC_1(VAR_4);
 }

 FUNC_0(VAR_3->engine);

 FUNC_9(&VAR_3->done_task);
 FUNC_4(VAR_3);
 FUNC_6(VAR_3->dev);
 VAR_3 = ((void*)0);

 return 0;
}
