
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct its_vpe {int dummy; } ;
struct its_node {int dummy; } ;
struct TYPE_3__ {TYPE_2__* vpe; } ;
struct its_cmd_desc {TYPE_1__ its_vinvall_cmd; } ;
struct its_cmd_block {int dummy; } ;
struct TYPE_4__ {int vpe_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_cmd_block*,int ) ;
 int FUNC_1 (struct its_cmd_block*,int ) ;
 int FUNC_2 (struct its_cmd_block*) ;
 struct its_vpe* FUNC_3 (struct its_node*,TYPE_2__*) ;

__attribute__((used)) static struct its_vpe *FUNC_4(struct its_node *VAR_1,
          struct its_cmd_block *VAR_2,
          struct its_cmd_desc *VAR_3)
{
 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_3->its_vinvall_cmd.vpe->vpe_id);

 FUNC_2(VAR_2);

 return FUNC_3(VAR_1, VAR_3->its_vinvall_cmd.vpe);
}
