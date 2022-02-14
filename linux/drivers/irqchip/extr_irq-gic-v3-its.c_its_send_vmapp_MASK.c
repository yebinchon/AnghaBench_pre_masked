
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_vpe {size_t col_idx; } ;
struct its_node {int * collections; } ;
struct TYPE_2__ {int valid; int * col; struct its_vpe* vpe; } ;
struct its_cmd_desc {TYPE_1__ its_vmapp_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_node*,int ,struct its_cmd_desc*) ;

__attribute__((used)) static void FUNC_1(struct its_node *VAR_1,
      struct its_vpe *VAR_2, bool VAR_3)
{
 struct its_cmd_desc VAR_4;

 VAR_4.its_vmapp_cmd.vpe = VAR_2;
 VAR_4.its_vmapp_cmd.valid = VAR_3;
 VAR_4.its_vmapp_cmd.col = &VAR_1->collections[VAR_2->col_idx];

 FUNC_0(VAR_1, VAR_0, &VAR_4);
}
