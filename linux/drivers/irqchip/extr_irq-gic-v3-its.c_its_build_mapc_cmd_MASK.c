
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_node {int dummy; } ;
struct its_collection {int target_address; int col_id; } ;
struct TYPE_2__ {struct its_collection* col; int valid; } ;
struct its_cmd_desc {TYPE_1__ its_mapc_cmd; } ;
struct its_cmd_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_cmd_block*,int ) ;
 int FUNC_1 (struct its_cmd_block*,int ) ;
 int FUNC_2 (struct its_cmd_block*,int ) ;
 int FUNC_3 (struct its_cmd_block*,int ) ;
 int FUNC_4 (struct its_cmd_block*) ;

__attribute__((used)) static struct its_collection *FUNC_5(struct its_node *VAR_1,
       struct its_cmd_block *VAR_2,
       struct its_cmd_desc *VAR_3)
{
 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_3->its_mapc_cmd.col->col_id);
 FUNC_2(VAR_2, VAR_3->its_mapc_cmd.col->target_address);
 FUNC_3(VAR_2, VAR_3->its_mapc_cmd.valid);

 FUNC_4(VAR_2);

 return VAR_3->its_mapc_cmd.col;
}
