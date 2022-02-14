
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct its_vpe {int dummy; } ;
struct its_node {int dummy; } ;
struct TYPE_5__ {TYPE_3__* vpe; int virt_id; int event_id; TYPE_1__* dev; scalar_t__ db_enabled; } ;
struct its_cmd_desc {TYPE_2__ its_vmapti_cmd; } ;
struct its_cmd_block {int dummy; } ;
struct TYPE_6__ {int vpe_db_lpi; int vpe_id; } ;
struct TYPE_4__ {int device_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_cmd_block*,int ) ;
 int FUNC_1 (struct its_cmd_block*,int) ;
 int FUNC_2 (struct its_cmd_block*,int ) ;
 int FUNC_3 (struct its_cmd_block*,int ) ;
 int FUNC_4 (struct its_cmd_block*,int ) ;
 int FUNC_5 (struct its_cmd_block*,int ) ;
 int FUNC_6 (struct its_cmd_block*) ;
 struct its_vpe* FUNC_7 (struct its_node*,TYPE_3__*) ;

__attribute__((used)) static struct its_vpe *FUNC_8(struct its_node *VAR_1,
         struct its_cmd_block *VAR_2,
         struct its_cmd_desc *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->its_vmapti_cmd.db_enabled)
  VAR_4 = VAR_3->its_vmapti_cmd.vpe->vpe_db_lpi;
 else
  VAR_4 = 1023;

 FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_2, VAR_3->its_vmapti_cmd.dev->device_id);
 FUNC_5(VAR_2, VAR_3->its_vmapti_cmd.vpe->vpe_id);
 FUNC_3(VAR_2, VAR_3->its_vmapti_cmd.event_id);
 FUNC_1(VAR_2, VAR_4);
 FUNC_4(VAR_2, VAR_3->its_vmapti_cmd.virt_id);

 FUNC_6(VAR_2);

 return FUNC_7(VAR_1, VAR_3->its_vmapti_cmd.vpe);
}
