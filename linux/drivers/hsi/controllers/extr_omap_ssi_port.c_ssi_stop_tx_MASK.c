
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_ssi_port {int pdev; int wk_lock; scalar_t__ wk_refcount; } ;
struct omap_ssi_controller {scalar_t__ sys; } ;
struct TYPE_2__ {int parent; } ;
struct hsi_port {int num; TYPE_1__ device; } ;
struct hsi_controller {int dummy; } ;
struct hsi_client {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 struct omap_ssi_controller* FUNC_4 (struct hsi_controller*) ;
 struct hsi_port* FUNC_5 (struct hsi_client*) ;
 struct omap_ssi_port* FUNC_6 (struct hsi_port*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct hsi_controller* FUNC_11 (int ) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct hsi_client *VAR_0)
{
 struct hsi_port *VAR_1 = FUNC_5(VAR_0);
 struct omap_ssi_port *VAR_2 = FUNC_6(VAR_1);
 struct hsi_controller *VAR_3 = FUNC_11(VAR_1->device.parent);
 struct omap_ssi_controller *VAR_4 = FUNC_4(VAR_3);

 FUNC_3(&VAR_1->device, "Wake out low %d\n", VAR_2->wk_refcount);

 FUNC_9(&VAR_2->wk_lock);
 FUNC_0(!VAR_2->wk_refcount);
 if (--VAR_2->wk_refcount) {
  FUNC_10(&VAR_2->wk_lock);
  return 0;
 }
 FUNC_12(FUNC_2(0), VAR_4->sys + FUNC_1(VAR_1->num));
 FUNC_10(&VAR_2->wk_lock);

 FUNC_7(VAR_2->pdev);
 FUNC_8(VAR_2->pdev);


 return 0;
}
