
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct its_vpe {int vpe_id; } ;
struct its_node {int dummy; } ;
struct its_cmd_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_cmd_block*,int ) ;
 int FUNC_1 (struct its_cmd_block*,int ) ;
 int FUNC_2 (struct its_cmd_block*) ;

__attribute__((used)) static void FUNC_3(struct its_node *VAR_1,
    struct its_cmd_block *VAR_2,
    struct its_vpe *VAR_3)
{
 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_3->vpe_id);

 FUNC_2(VAR_2);
}
