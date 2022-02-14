
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct commit {int generation; int graph_pos; int index; TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct repository*) ;

void FUNC_1(struct repository *VAR_3, struct commit *VAR_4)
{
 VAR_4->object.type = VAR_2;
 VAR_4->index = FUNC_0(VAR_3);
 VAR_4->graph_pos = VAR_0;
 VAR_4->generation = VAR_1;
}
