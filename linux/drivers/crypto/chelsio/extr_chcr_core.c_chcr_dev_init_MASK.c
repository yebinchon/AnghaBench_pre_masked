
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chcr_dev {int inflight; int wqretry; int state; int detach_comp; int detach_work; int lock_chcr_dev; } ;
struct uld_ctx {int entry; struct chcr_dev dev; } ;
struct TYPE_2__ {int drv_mutex; struct uld_ctx* last_dev; int inact_dev; int dev_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct uld_ctx *VAR_4)
{
 struct chcr_dev *VAR_5;

 VAR_5 = &VAR_4->dev;
 FUNC_7(&VAR_5->lock_chcr_dev);
 FUNC_0(&VAR_5->detach_work, VAR_2);
 FUNC_3(&VAR_5->detach_comp);
 VAR_5->state = VAR_0;
 VAR_5->wqretry = VAR_1;
 FUNC_1(&VAR_3.dev_count);
 FUNC_2(&VAR_5->inflight, 0);
 FUNC_5(&VAR_3.drv_mutex);
 FUNC_4(&VAR_4->entry, &VAR_3.inact_dev);
 if (!VAR_3.last_dev)
  VAR_3.last_dev = VAR_4;
 FUNC_6(&VAR_3.drv_mutex);
}
