
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcma_drv_cc {int early_setup_done; int capabilities; void* capabilities_ext; TYPE_2__* core; void* status; int gpio_lock; } ;
struct bcma_bus {scalar_t__ hosttype; } ;
struct TYPE_3__ {int rev; } ;
struct TYPE_4__ {TYPE_1__ id; struct bcma_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (struct bcma_drv_cc*,int ) ;
 int FUNC_1 (struct bcma_drv_cc*) ;
 int FUNC_2 (struct bcma_drv_cc*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct bcma_drv_cc *VAR_5)
{
 struct bcma_bus *VAR_6 = VAR_5->core->bus;

 if (VAR_5->early_setup_done)
  return;

 FUNC_3(&VAR_5->gpio_lock);

 if (VAR_5->core->id.rev >= 11)
  VAR_5->status = FUNC_0(VAR_5, VAR_3);
 VAR_5->capabilities = FUNC_0(VAR_5, VAR_0);
 if (VAR_5->core->id.rev >= 35)
  VAR_5->capabilities_ext = FUNC_0(VAR_5, VAR_1);

 if (VAR_5->capabilities & VAR_2)
  FUNC_2(VAR_5);

 if (VAR_6->hosttype == VAR_4)
  FUNC_1(VAR_5);

 VAR_5->early_setup_done = 1;
}
