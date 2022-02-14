
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct its_vpe {int dummy; } ;
struct its_node {scalar_t__ vlpi_redist_offset; } ;
struct TYPE_5__ {TYPE_3__* vpe; int valid; TYPE_1__* col; } ;
struct its_cmd_desc {TYPE_2__ its_vmapp_cmd; } ;
struct its_cmd_block {int dummy; } ;
struct TYPE_6__ {int vpe_id; int vpt_page; } ;
struct TYPE_4__ {scalar_t__ target_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct its_cmd_block*,int ) ;
 int FUNC_1 (struct its_cmd_block*,scalar_t__) ;
 int FUNC_2 (struct its_cmd_block*,int ) ;
 int FUNC_3 (struct its_cmd_block*,int ) ;
 int FUNC_4 (struct its_cmd_block*,unsigned long) ;
 int FUNC_5 (struct its_cmd_block*,scalar_t__) ;
 int FUNC_6 (struct its_cmd_block*) ;
 int FUNC_7 (int ) ;
 struct its_vpe* FUNC_8 (struct its_node*,TYPE_3__*) ;
 unsigned long FUNC_9 (int ) ;

__attribute__((used)) static struct its_vpe *FUNC_10(struct its_node *VAR_2,
        struct its_cmd_block *VAR_3,
        struct its_cmd_desc *VAR_4)
{
 unsigned long VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_9(FUNC_7(VAR_4->its_vmapp_cmd.vpe->vpt_page));
 VAR_6 = VAR_4->its_vmapp_cmd.col->target_address + VAR_2->vlpi_redist_offset;

 FUNC_0(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_4->its_vmapp_cmd.vpe->vpe_id);
 FUNC_2(VAR_3, VAR_4->its_vmapp_cmd.valid);
 FUNC_1(VAR_3, VAR_6);
 FUNC_4(VAR_3, VAR_5);
 FUNC_5(VAR_3, VAR_1 - 1);

 FUNC_6(VAR_3);

 return FUNC_8(VAR_2, VAR_4->its_vmapp_cmd.vpe);
}
