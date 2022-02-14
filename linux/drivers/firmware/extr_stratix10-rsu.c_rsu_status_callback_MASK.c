
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stratix10_svc_client {int dev; struct stratix10_rsu_priv* priv; } ;
struct stratix10_svc_cb_data {scalar_t__ status; scalar_t__ kaddr1; } ;
struct TYPE_2__ {void* error_details; void* error_location; scalar_t__ current_image; scalar_t__ fail_image; void* state; void* version; } ;
struct stratix10_rsu_priv {int completion; TYPE_1__ status; } ;
struct arm_smccc_res {scalar_t__ a0; int a3; scalar_t__ a1; int a2; } ;


 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct stratix10_svc_client *VAR_5,
    struct stratix10_svc_cb_data *VAR_6)
{
 struct stratix10_rsu_priv *VAR_7 = VAR_5->priv;
 struct arm_smccc_res *VAR_8 = (struct arm_smccc_res *)VAR_6->kaddr1;

 if (VAR_6->status == FUNC_0(VAR_4)) {
  VAR_7->status.version = FUNC_1(VAR_3,
       VAR_8->a2);
  VAR_7->status.state = FUNC_1(VAR_2, VAR_8->a2);
  VAR_7->status.fail_image = VAR_8->a1;
  VAR_7->status.current_image = VAR_8->a0;
  VAR_7->status.error_location =
   FUNC_1(VAR_1, VAR_8->a3);
  VAR_7->status.error_details =
   FUNC_1(VAR_0, VAR_8->a3);
 } else {
  FUNC_3(VAR_5->dev, "COMMAND_RSU_STATUS returned 0x%lX\n",
   VAR_8->a0);
  VAR_7->status.version = 0;
  VAR_7->status.state = 0;
  VAR_7->status.fail_image = 0;
  VAR_7->status.current_image = 0;
  VAR_7->status.error_location = 0;
  VAR_7->status.error_details = 0;
 }

 FUNC_2(&VAR_7->completion);
}
