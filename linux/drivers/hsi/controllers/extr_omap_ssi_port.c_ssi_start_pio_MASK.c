
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_ssi_port {int pdev; } ;
struct omap_ssi_controller {scalar_t__ sys; } ;
struct TYPE_3__ {int parent; } ;
struct hsi_port {int num; TYPE_1__ device; } ;
struct hsi_msg {scalar_t__ ttype; int status; scalar_t__ actual_len; int channel; int cl; } ;
struct hsi_controller {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct omap_ssi_controller* FUNC_5 (struct hsi_controller*) ;
 struct hsi_port* FUNC_6 (int ) ;
 struct omap_ssi_port* FUNC_7 (struct hsi_port*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 struct hsi_controller* FUNC_12 (int ) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct hsi_msg *VAR_4)
{
 struct hsi_port *VAR_5 = FUNC_6(VAR_4->cl);
 struct omap_ssi_port *VAR_6 = FUNC_7(VAR_5);
 struct hsi_controller *VAR_7 = FUNC_12(VAR_5->device.parent);
 struct omap_ssi_controller *VAR_8 = FUNC_5(VAR_7);
 u32 VAR_9;

 FUNC_9(VAR_6->pdev);

 if (!FUNC_8(VAR_6->pdev)) {
  FUNC_4(&VAR_5->device, "ssi_start_pio called without runtime PM!\n");
  FUNC_10(VAR_6->pdev);
  return -VAR_0;
 }

 if (VAR_4->ttype == VAR_1) {
  VAR_9 = FUNC_0(VAR_4->channel);

  FUNC_9(VAR_6->pdev);
 } else {
  VAR_9 = FUNC_1(VAR_4->channel) | VAR_3;
 }
 FUNC_3(&VAR_5->device, "Single %s transfer\n",
      VAR_4->ttype ? "write" : "read");
 VAR_9 |= FUNC_11(VAR_8->sys + FUNC_2(VAR_5->num, 0));
 FUNC_13(VAR_9, VAR_8->sys + FUNC_2(VAR_5->num, 0));
 FUNC_10(VAR_6->pdev);
 VAR_4->actual_len = 0;
 VAR_4->status = VAR_2;

 return 0;
}
