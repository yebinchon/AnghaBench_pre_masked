
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_ssi_port {int wktest; } ;
struct omap_ssi_controller {scalar_t__ sys; } ;
struct TYPE_4__ {int parent; } ;
struct hsi_port {int num; TYPE_2__ device; } ;
struct TYPE_3__ {int parent; } ;
struct hsi_controller {TYPE_1__ device; } ;
struct hsi_client {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct omap_ssi_controller* FUNC_3 (struct hsi_controller*) ;
 struct hsi_port* FUNC_4 (struct hsi_client*) ;
 struct omap_ssi_port* FUNC_5 (struct hsi_port*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct hsi_controller* FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;

void FUNC_10(struct hsi_client *VAR_0, unsigned int VAR_1)
{
 struct hsi_port *VAR_2 = FUNC_4(VAR_0);
 struct omap_ssi_port *VAR_3 = FUNC_5(VAR_2);
 struct hsi_controller *VAR_4 = FUNC_8(VAR_2->device.parent);
 struct omap_ssi_controller *VAR_5 = FUNC_3(VAR_4);

 VAR_3->wktest = !!VAR_1;
 if (VAR_3->wktest) {
  FUNC_6(VAR_4->device.parent);
  FUNC_9(FUNC_2(0),
    VAR_5->sys + FUNC_1(VAR_2->num));
 } else {
  FUNC_9(FUNC_2(0),
    VAR_5->sys + FUNC_0(VAR_2->num));
  FUNC_7(VAR_4->device.parent);
 }
}
