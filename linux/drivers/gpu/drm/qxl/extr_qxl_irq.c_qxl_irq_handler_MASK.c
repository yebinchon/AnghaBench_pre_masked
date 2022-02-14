
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct qxl_device {scalar_t__ io_base; TYPE_1__* ram_header; int client_monitors_config_work; int irq_received_error; int io_cmd_event; int irq_received_io_cmd; int cursor_event; int irq_received_cursor; int display_event; int irq_received_display; int irq_received; } ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int int_mask; int int_pending; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct qxl_device*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct drm_device *VAR_11 = (struct drm_device *) VAR_10;
 struct qxl_device *VAR_12 = (struct qxl_device *)VAR_11->dev_private;
 uint32_t VAR_13;

 VAR_13 = FUNC_6(&VAR_12->ram_header->int_pending, 0);

 if (!VAR_13)
  return VAR_1;

 FUNC_1(&VAR_12->irq_received);

 if (VAR_13 & VAR_4) {
  FUNC_1(&VAR_12->irq_received_display);
  FUNC_5(&VAR_12->display_event);
  FUNC_3(VAR_12, 0);
 }
 if (VAR_13 & VAR_3) {
  FUNC_1(&VAR_12->irq_received_cursor);
  FUNC_5(&VAR_12->cursor_event);
 }
 if (VAR_13 & VAR_6) {
  FUNC_1(&VAR_12->irq_received_io_cmd);
  FUNC_5(&VAR_12->io_cmd_event);
 }
 if (VAR_13 & VAR_5) {




  VAR_12->irq_received_error++;
  FUNC_0("driver is in bug mode\n");
 }
 if (VAR_13 & VAR_2) {
  FUNC_4(&VAR_12->client_monitors_config_work);
 }
 VAR_12->ram_header->int_mask = VAR_7;
 FUNC_2(0, VAR_12->io_base + VAR_8);
 return VAR_0;
}
