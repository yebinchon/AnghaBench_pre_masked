
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct its_node {int dummy; } ;
struct its_collection {int dummy; } ;
struct TYPE_4__ {TYPE_1__* col; } ;
struct its_cmd_desc {TYPE_2__ its_mapc_cmd; } ;
struct its_cmd_block {int dummy; } ;
struct TYPE_3__ {int col_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_cmd_block*,int ) ;
 int FUNC_1 (struct its_cmd_block*,int ) ;
 int FUNC_2 (struct its_cmd_block*) ;

__attribute__((used)) static struct its_collection *FUNC_3(struct its_node *VAR_1,
         struct its_cmd_block *VAR_2,
         struct its_cmd_desc *VAR_3)
{
 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_3->its_mapc_cmd.col->col_id);

 FUNC_2(VAR_2);

 return ((void*)0);
}
