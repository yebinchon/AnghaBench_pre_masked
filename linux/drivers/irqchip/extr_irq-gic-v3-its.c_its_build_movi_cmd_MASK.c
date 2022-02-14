
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct its_node {int dummy; } ;
struct its_collection {int dummy; } ;
struct TYPE_5__ {TYPE_1__* col; int event_id; TYPE_3__* dev; } ;
struct its_cmd_desc {TYPE_2__ its_movi_cmd; } ;
struct its_cmd_block {int dummy; } ;
struct TYPE_6__ {int device_id; } ;
struct TYPE_4__ {int col_id; } ;


 int VAR_0 ;
 struct its_collection* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (struct its_cmd_block*,int ) ;
 int FUNC_2 (struct its_cmd_block*,int ) ;
 int FUNC_3 (struct its_cmd_block*,int ) ;
 int FUNC_4 (struct its_cmd_block*,int ) ;
 int FUNC_5 (struct its_cmd_block*) ;
 struct its_collection* FUNC_6 (struct its_collection*) ;

__attribute__((used)) static struct its_collection *FUNC_7(struct its_node *VAR_1,
       struct its_cmd_block *VAR_2,
       struct its_cmd_desc *VAR_3)
{
 struct its_collection *VAR_4;

 VAR_4 = FUNC_0(VAR_3->its_movi_cmd.dev,
          VAR_3->its_movi_cmd.event_id);

 FUNC_1(VAR_2, VAR_0);
 FUNC_3(VAR_2, VAR_3->its_movi_cmd.dev->device_id);
 FUNC_4(VAR_2, VAR_3->its_movi_cmd.event_id);
 FUNC_2(VAR_2, VAR_3->its_movi_cmd.col->col_id);

 FUNC_5(VAR_2);

 return FUNC_6(VAR_4);
}
