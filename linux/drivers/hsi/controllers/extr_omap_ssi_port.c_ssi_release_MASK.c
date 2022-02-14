
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* mode; } ;
struct TYPE_5__ {void* mode; } ;
struct omap_ssi_port {scalar_t__ wk_refcount; int pdev; int lock; TYPE_3__ ssr; TYPE_2__ sst; int flags; } ;
struct TYPE_4__ {int parent; } ;
struct hsi_port {int claimed; TYPE_1__ device; } ;
struct hsi_controller {int dummy; } ;
struct hsi_client {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct hsi_port* FUNC_1 (struct hsi_client*) ;
 struct omap_ssi_port* FUNC_2 (struct hsi_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct hsi_controller*,struct hsi_client*) ;
 int FUNC_10 (struct hsi_client*) ;
 int FUNC_11 (struct omap_ssi_port*,void*) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 struct hsi_controller* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct hsi_client *VAR_2)
{
 struct hsi_port *VAR_3 = FUNC_1(VAR_2);
 struct omap_ssi_port *VAR_4 = FUNC_2(VAR_3);
 struct hsi_controller *VAR_5 = FUNC_13(VAR_3->device.parent);

 FUNC_4(VAR_4->pdev);
 FUNC_7(&VAR_4->lock);

 FUNC_9(VAR_5, VAR_2);

 FUNC_10(VAR_2);

 if (VAR_3->claimed <= 1) {




  if (FUNC_12(VAR_1, &VAR_4->flags))
   FUNC_6(VAR_4->pdev);
  FUNC_3(VAR_4->pdev);

  FUNC_11(VAR_4, VAR_0);
  VAR_4->sst.mode = VAR_0;
  VAR_4->ssr.mode = VAR_0;
  FUNC_5(VAR_4->pdev);
  FUNC_0(VAR_4->wk_refcount != 0);
 }
 FUNC_8(&VAR_4->lock);
 FUNC_6(VAR_4->pdev);

 return 0;
}
