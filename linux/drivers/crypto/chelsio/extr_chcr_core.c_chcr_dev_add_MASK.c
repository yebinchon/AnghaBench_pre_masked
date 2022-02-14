
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chcr_dev {int inflight; int state; } ;
struct uld_ctx {int entry; struct chcr_dev dev; } ;
struct TYPE_2__ {int drv_mutex; struct uld_ctx* last_dev; int act_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct uld_ctx *VAR_2)
{
 struct chcr_dev *VAR_3;

 VAR_3 = &VAR_2->dev;
 VAR_3->state = VAR_0;
 FUNC_0(&VAR_3->inflight, 0);
 FUNC_2(&VAR_1.drv_mutex);
 FUNC_1(&VAR_2->entry, &VAR_1.act_dev);
 if (!VAR_1.last_dev)
  VAR_1.last_dev = VAR_2;
 FUNC_3(&VAR_1.drv_mutex);
}
