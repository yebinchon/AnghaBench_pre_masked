
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
struct TYPE_5__ {TYPE_3__* vpe; int its_list; int seq_num; TYPE_1__* col; } ;
struct its_cmd_desc {TYPE_2__ its_vmovp_cmd; } ;
struct its_cmd_block {int dummy; } ;
struct TYPE_6__ {int vpe_id; } ;
struct TYPE_4__ {scalar_t__ target_address; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_cmd_block*,int ) ;
 int FUNC_1 (struct its_cmd_block*,int ) ;
 int FUNC_2 (struct its_cmd_block*,int ) ;
 int FUNC_3 (struct its_cmd_block*,scalar_t__) ;
 int FUNC_4 (struct its_cmd_block*,int ) ;
 int FUNC_5 (struct its_cmd_block*) ;
 struct its_vpe* FUNC_6 (struct its_node*,TYPE_3__*) ;

__attribute__((used)) static struct its_vpe *FUNC_7(struct its_node *VAR_1,
        struct its_cmd_block *VAR_2,
        struct its_cmd_desc *VAR_3)
{
 u64 VAR_4;

 VAR_4 = VAR_3->its_vmovp_cmd.col->target_address + VAR_1->vlpi_redist_offset;
 FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_2, VAR_3->its_vmovp_cmd.seq_num);
 FUNC_1(VAR_2, VAR_3->its_vmovp_cmd.its_list);
 FUNC_4(VAR_2, VAR_3->its_vmovp_cmd.vpe->vpe_id);
 FUNC_3(VAR_2, VAR_4);

 FUNC_5(VAR_2);

 return FUNC_6(VAR_1, VAR_3->its_vmovp_cmd.vpe);
}
