
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct its_node {int dummy; } ;
struct its_collection {int dummy; } ;
struct TYPE_3__ {int valid; TYPE_2__* dev; } ;
struct its_cmd_desc {TYPE_1__ its_mapd_cmd; } ;
struct its_cmd_block {int dummy; } ;
struct TYPE_4__ {int device_id; int itt; int nr_ites; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct its_cmd_block*,int ) ;
 int FUNC_3 (struct its_cmd_block*,int ) ;
 int FUNC_4 (struct its_cmd_block*,unsigned long) ;
 int FUNC_5 (struct its_cmd_block*,scalar_t__) ;
 int FUNC_6 (struct its_cmd_block*,int ) ;
 int FUNC_7 (struct its_cmd_block*) ;
 unsigned long FUNC_8 (int ) ;

__attribute__((used)) static struct its_collection *FUNC_9(struct its_node *VAR_2,
       struct its_cmd_block *VAR_3,
       struct its_cmd_desc *VAR_4)
{
 unsigned long VAR_5;
 u8 VAR_6 = FUNC_1(VAR_4->its_mapd_cmd.dev->nr_ites);

 VAR_5 = FUNC_8(VAR_4->its_mapd_cmd.dev->itt);
 VAR_5 = FUNC_0(VAR_5, VAR_1);

 FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_4->its_mapd_cmd.dev->device_id);
 FUNC_5(VAR_3, VAR_6 - 1);
 FUNC_4(VAR_3, VAR_5);
 FUNC_6(VAR_3, VAR_4->its_mapd_cmd.valid);

 FUNC_7(VAR_3);

 return ((void*)0);
}
