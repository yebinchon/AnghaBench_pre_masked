
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pdev; } ;
struct qxl_device {TYPE_2__* ram_header; TYPE_3__ ddev; scalar_t__ irq_received_error; int irq_received_io_cmd; int irq_received_cursor; int irq_received_display; int irq_received; int client_monitors_config_work; int io_cmd_event; int cursor_event; int display_event; } ;
struct TYPE_5__ {int int_mask; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct qxl_device *VAR_2)
{
 int VAR_3;

 FUNC_4(&VAR_2->display_event);
 FUNC_4(&VAR_2->cursor_event);
 FUNC_4(&VAR_2->io_cmd_event);
 FUNC_1(&VAR_2->client_monitors_config_work,
    VAR_1);
 FUNC_2(&VAR_2->irq_received, 0);
 FUNC_2(&VAR_2->irq_received_display, 0);
 FUNC_2(&VAR_2->irq_received_cursor, 0);
 FUNC_2(&VAR_2->irq_received_io_cmd, 0);
 VAR_2->irq_received_error = 0;
 VAR_3 = FUNC_3(&VAR_2->ddev, VAR_2->ddev.pdev->irq);
 VAR_2->ram_header->int_mask = VAR_0;
 if (FUNC_5(VAR_3 != 0)) {
  FUNC_0("Failed installing irq: %d\n", VAR_3);
  return 1;
 }
 return 0;
}
