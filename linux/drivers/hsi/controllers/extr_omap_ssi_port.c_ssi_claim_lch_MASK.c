
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_ssi_controller {TYPE_1__* gdd_trn; } ;
struct TYPE_6__ {int parent; } ;
struct hsi_port {TYPE_3__ device; } ;
struct TYPE_5__ {int sgl; } ;
struct hsi_msg {TYPE_2__ sgt; int cl; } ;
struct hsi_controller {int dummy; } ;
struct TYPE_4__ {int sg; struct hsi_msg* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_ssi_controller* FUNC_0 (struct hsi_controller*) ;
 struct hsi_port* FUNC_1 (int ) ;
 struct hsi_controller* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hsi_msg *VAR_2)
{

 struct hsi_port *VAR_3 = FUNC_1(VAR_2->cl);
 struct hsi_controller *VAR_4 = FUNC_2(VAR_3->device.parent);
 struct omap_ssi_controller *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (!VAR_5->gdd_trn[VAR_6].msg) {
   VAR_5->gdd_trn[VAR_6].msg = VAR_2;
   VAR_5->gdd_trn[VAR_6].sg = VAR_2->sgt.sgl;
   return VAR_6;
  }

 return -VAR_0;
}
