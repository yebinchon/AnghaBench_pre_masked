
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_node {int dummy; } ;
struct its_collection {int dummy; } ;
struct TYPE_2__ {int valid; struct its_collection* col; } ;
struct its_cmd_desc {TYPE_1__ its_mapc_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct its_node*,int ,struct its_cmd_desc*) ;

__attribute__((used)) static void FUNC_1(struct its_node *VAR_1, struct its_collection *VAR_2,
     int VAR_3)
{
 struct its_cmd_desc VAR_4;

 VAR_4.its_mapc_cmd.col = VAR_2;
 VAR_4.its_mapc_cmd.valid = !!VAR_3;

 FUNC_0(VAR_1, VAR_0, &VAR_4);
}
