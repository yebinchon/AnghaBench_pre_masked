
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t channels; } ;
struct TYPE_5__ {size_t channels; } ;
struct omap_ssi_port {int pdev; int lock; struct list_head* rxqueue; TYPE_3__ ssr; struct list_head* txqueue; TYPE_2__ sst; } ;
struct list_head {int dummy; } ;
struct hsi_port {int device; } ;
struct TYPE_4__ {int nents; } ;
struct hsi_msg {size_t channel; int ttype; int status; int link; scalar_t__ break_frame; TYPE_1__ sgt; int cl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ,int ,size_t) ;
 struct hsi_port* FUNC_2 (int ) ;
 struct omap_ssi_port* FUNC_3 (struct hsi_port*) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct hsi_msg*) ;
 int FUNC_12 (struct list_head*) ;

__attribute__((used)) static int FUNC_13(struct hsi_msg *VAR_3)
{
 struct hsi_port *VAR_4 = FUNC_2(VAR_3->cl);
 struct omap_ssi_port *VAR_5 = FUNC_3(VAR_4);
 struct list_head *VAR_6;
 int VAR_7 = 0;

 FUNC_0(!VAR_3);

 if (VAR_3->sgt.nents > 1)
  return -VAR_0;

 if (VAR_3->break_frame)
  return FUNC_11(VAR_3);

 if (VAR_3->ttype) {
  FUNC_0(VAR_3->channel >= VAR_5->sst.channels);
  VAR_6 = &VAR_5->txqueue[VAR_3->channel];
 } else {
  FUNC_0(VAR_3->channel >= VAR_5->ssr.channels);
  VAR_6 = &VAR_5->rxqueue[VAR_3->channel];
 }
 VAR_3->status = VAR_2;

 FUNC_6(VAR_5->pdev);
 FUNC_9(&VAR_5->lock);
 FUNC_4(&VAR_3->link, VAR_6);
 VAR_7 = FUNC_12(VAR_6);
 if (VAR_7 < 0) {
  FUNC_5(&VAR_3->link);
  VAR_3->status = VAR_1;
 }
 FUNC_10(&VAR_5->lock);
 FUNC_7(VAR_5->pdev);
 FUNC_8(VAR_5->pdev);
 FUNC_1(&VAR_4->device, "msg status %d ttype %d ch %d\n",
    VAR_3->status, VAR_3->ttype, VAR_3->channel);

 return VAR_7;
}
