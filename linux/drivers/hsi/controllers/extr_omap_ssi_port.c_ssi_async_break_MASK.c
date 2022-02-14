
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ mode; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct omap_ssi_port {int pdev; int lock; int brkqueue; TYPE_3__ ssr; scalar_t__ sst_base; TYPE_2__ sst; } ;
struct omap_ssi_controller {scalar_t__ sys; } ;
struct TYPE_4__ {int parent; } ;
struct hsi_port {int num; TYPE_1__ device; } ;
struct hsi_msg {scalar_t__ ttype; int link; int status; int (* complete ) (struct hsi_msg*) ;int cl; } ;
struct hsi_controller {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_6 ;
 struct omap_ssi_controller* FUNC_1 (struct hsi_controller*) ;
 struct hsi_port* FUNC_2 (int ) ;
 struct omap_ssi_port* FUNC_3 (struct hsi_port*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct hsi_msg*) ;
 struct hsi_controller* FUNC_12 (int ) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct hsi_msg *VAR_7)
{
 struct hsi_port *VAR_8 = FUNC_2(VAR_7->cl);
 struct omap_ssi_port *VAR_9 = FUNC_3(VAR_8);
 struct hsi_controller *VAR_10 = FUNC_12(VAR_8->device.parent);
 struct omap_ssi_controller *VAR_11 = FUNC_1(VAR_10);
 int VAR_12 = 0;
 u32 VAR_13;

 FUNC_5(VAR_9->pdev);
 if (VAR_7->ttype == VAR_1) {
  if (VAR_9->sst.mode != VAR_5) {
   VAR_12 = -VAR_0;
   goto out;
  }
  FUNC_13(1, VAR_9->sst_base + VAR_6);
  VAR_7->status = VAR_2;
  VAR_7->complete(VAR_7);
 } else {
  if (VAR_9->ssr.mode != VAR_5) {
   VAR_12 = -VAR_0;
   goto out;
  }
  FUNC_9(&VAR_9->lock);
  VAR_13 = FUNC_8(VAR_11->sys +
     FUNC_0(VAR_8->num, 0));
  FUNC_13(VAR_13 | VAR_4,
   VAR_11->sys + FUNC_0(VAR_8->num, 0));
  VAR_7->status = VAR_3;
  FUNC_4(&VAR_7->link, &VAR_9->brkqueue);
  FUNC_10(&VAR_9->lock);
 }
out:
 FUNC_6(VAR_9->pdev);
 FUNC_7(VAR_9->pdev);

 return VAR_12;
}
