
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vga_switcheroo_client {int active; int id; int driver_power_control; int pdev; TYPE_2__* ops; scalar_t__ fb_info; } ;
struct TYPE_6__ {int mux_hw_lock; TYPE_1__* handler; int clients; } ;
struct TYPE_5__ {int (* reprobe ) (int ) ;} ;
struct TYPE_4__ {int (* switchto ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct vga_switcheroo_client* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct vga_switcheroo_client*) ;
 int FUNC_8 (struct vga_switcheroo_client*) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static int FUNC_9(struct vga_switcheroo_client *VAR_3)
{
 int VAR_4;
 struct vga_switcheroo_client *VAR_5;

 VAR_5 = FUNC_1(&VAR_2.clients);
 if (!VAR_5)
  return 0;

 VAR_5->active = 0;


 if (!VAR_5->driver_power_control)
  FUNC_4(VAR_5->id, VAR_0);

 if (VAR_3->fb_info)
  FUNC_0(VAR_3->fb_info);

 FUNC_2(&VAR_2.mux_hw_lock);
 VAR_4 = VAR_2.handler->switchto(VAR_3->id);
 FUNC_3(&VAR_2.mux_hw_lock);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->ops->reprobe)
  VAR_3->ops->reprobe(VAR_3->pdev);

 if (FUNC_7(VAR_5) == VAR_1)
  FUNC_8(VAR_5);


 if (!VAR_3->driver_power_control)
  FUNC_4(VAR_3->id, VAR_1);

 VAR_3->active = 1;
 return 0;
}
