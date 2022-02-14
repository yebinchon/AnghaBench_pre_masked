
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct its_node {int dummy; } ;
struct its_collection {int dummy; } ;
struct TYPE_3__ {int event_id; TYPE_2__* dev; } ;
struct its_cmd_desc {TYPE_1__ its_discard_cmd; } ;
struct its_cmd_block {int dummy; } ;
struct TYPE_4__ {int device_id; } ;


 int VAR_0 ;
 struct its_collection* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct its_cmd_block*,int ) ;
 int FUNC_2 (struct its_cmd_block*,int ) ;
 int FUNC_3 (struct its_cmd_block*,int ) ;
 int FUNC_4 (struct its_cmd_block*) ;
 struct its_collection* FUNC_5 (struct its_collection*) ;

__attribute__((used)) static struct its_collection *FUNC_6(struct its_node *VAR_1,
          struct its_cmd_block *VAR_2,
          struct its_cmd_desc *VAR_3)
{
 struct its_collection *VAR_4;

 VAR_4 = FUNC_0(VAR_3->its_discard_cmd.dev,
          VAR_3->its_discard_cmd.event_id);

 FUNC_1(VAR_2, VAR_0);
 FUNC_2(VAR_2, VAR_3->its_discard_cmd.dev->device_id);
 FUNC_3(VAR_2, VAR_3->its_discard_cmd.event_id);

 FUNC_4(VAR_2);

 return FUNC_5(VAR_4);
}
