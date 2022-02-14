
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_switcheroo_handler {int dummy; } ;
typedef enum vga_switcheroo_handler_flags_t { ____Placeholder_vga_switcheroo_handler_flags_t } vga_switcheroo_handler_flags_t ;
struct TYPE_2__ {int handler_flags; struct vga_switcheroo_handler const* handler; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_5(
     const struct vga_switcheroo_handler *VAR_3,
     enum vga_switcheroo_handler_flags_t VAR_4)
{
 FUNC_0(&VAR_1);
 if (VAR_2.handler) {
  FUNC_1(&VAR_1);
  return -VAR_0;
 }

 VAR_2.handler = VAR_3;
 VAR_2.handler_flags = VAR_4;
 if (FUNC_4()) {
  FUNC_2("enabled\n");
  FUNC_3();
 }
 FUNC_1(&VAR_1);
 return 0;
}
