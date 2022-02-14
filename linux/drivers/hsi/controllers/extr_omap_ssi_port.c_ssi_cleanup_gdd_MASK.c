
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_ssi_port {int pdev; } ;
struct omap_ssi_controller {scalar_t__ sys; TYPE_1__* gdd_trn; scalar_t__ gdd; } ;
struct hsi_port {int dummy; } ;
struct hsi_msg {scalar_t__ ttype; struct hsi_client* cl; } ;
struct hsi_controller {int dummy; } ;
struct hsi_client {int dummy; } ;
struct TYPE_2__ {struct hsi_msg* msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 struct omap_ssi_controller* FUNC_1 (struct hsi_controller*) ;
 struct hsi_port* FUNC_2 (struct hsi_client*) ;
 struct omap_ssi_port* FUNC_3 (struct hsi_port*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct hsi_controller *VAR_4, struct hsi_client *VAR_5)
{
 struct omap_ssi_controller *VAR_6 = FUNC_1(VAR_4);
 struct hsi_port *VAR_7 = FUNC_2(VAR_5);
 struct omap_ssi_port *VAR_8 = FUNC_3(VAR_7);
 struct hsi_msg *VAR_9;
 unsigned int VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_9 = VAR_6->gdd_trn[VAR_10].msg;
  if ((!VAR_9) || (VAR_9->cl != VAR_5))
   continue;
  FUNC_9(0, VAR_6->gdd + FUNC_0(VAR_10));
  VAR_11 |= (1 << VAR_10);




  if (VAR_9->ttype == VAR_0) {
   FUNC_4(VAR_8->pdev);
   FUNC_5(VAR_8->pdev);
  }
  VAR_6->gdd_trn[VAR_10].msg = ((void*)0);
 }
 VAR_12 = FUNC_6(VAR_6->sys + VAR_1);
 VAR_12 &= ~VAR_11;
 FUNC_8(VAR_12, VAR_6->sys + VAR_1);
 FUNC_7(VAR_11, VAR_6->sys + VAR_2);
}
