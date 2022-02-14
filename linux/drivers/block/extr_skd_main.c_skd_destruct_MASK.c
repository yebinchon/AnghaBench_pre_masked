
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {TYPE_1__* pdev; int msgbuf_cache; int sglist_cache; int databuf_cache; int start_queue; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct skd_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct skd_device*) ;
 int FUNC_5 (struct skd_device*) ;
 int FUNC_6 (struct skd_device*) ;
 int FUNC_7 (struct skd_device*) ;

__attribute__((used)) static void FUNC_8(struct skd_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(&VAR_0->start_queue);

 FUNC_1(&VAR_0->pdev->dev, "disk\n");
 FUNC_4(VAR_0);

 FUNC_1(&VAR_0->pdev->dev, "sksb\n");
 FUNC_7(VAR_0);

 FUNC_1(&VAR_0->pdev->dev, "skmsg\n");
 FUNC_6(VAR_0);

 FUNC_1(&VAR_0->pdev->dev, "skcomp\n");
 FUNC_5(VAR_0);

 FUNC_3(VAR_0->databuf_cache);
 FUNC_3(VAR_0->sglist_cache);
 FUNC_3(VAR_0->msgbuf_cache);

 FUNC_1(&VAR_0->pdev->dev, "skdev\n");
 FUNC_2(VAR_0);
}
