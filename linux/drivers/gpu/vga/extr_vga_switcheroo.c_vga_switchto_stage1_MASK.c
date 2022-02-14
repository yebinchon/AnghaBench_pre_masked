
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_switcheroo_client {int pdev; } ;
struct TYPE_2__ {int clients; } ;


 scalar_t__ VAR_0 ;
 struct vga_switcheroo_client* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vga_switcheroo_client*) ;
 int FUNC_3 (struct vga_switcheroo_client*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct vga_switcheroo_client *VAR_2)
{
 struct vga_switcheroo_client *VAR_3;

 VAR_3 = FUNC_0(&VAR_1.clients);
 if (!VAR_3)
  return 0;

 if (FUNC_2(VAR_2) == VAR_0)
  FUNC_3(VAR_2);

 FUNC_1(VAR_2->pdev);
 return 0;
}
