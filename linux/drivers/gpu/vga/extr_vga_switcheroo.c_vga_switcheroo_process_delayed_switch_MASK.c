
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_switcheroo_client {int dummy; } ;
struct TYPE_2__ {int delayed_switch_active; int delayed_client_id; int clients; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct vga_switcheroo_client* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct vga_switcheroo_client*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_7(void)
{
 struct vga_switcheroo_client *VAR_3;
 int VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_2(&VAR_1);
 if (!VAR_2.delayed_switch_active)
  goto err;

 FUNC_5("processing delayed switch to %d\n",
  VAR_2.delayed_client_id);

 VAR_3 = FUNC_1(&VAR_2.clients,
         VAR_2.delayed_client_id);
 if (!VAR_3 || !FUNC_0())
  goto err;

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  FUNC_4("delayed switching failed stage 2 %d\n", VAR_4);

 VAR_2.delayed_switch_active = 0;
 VAR_5 = 0;
err:
 FUNC_3(&VAR_1);
 return VAR_5;
}
