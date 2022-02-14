
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct group_des {int nports; int last; int first_id; int pipename; int custom_port; TYPE_1__* ports; } ;
struct TYPE_4__ {int num_groups; int base_name; } ;
struct TYPE_3__ {struct group_des* group; } ;


 TYPE_2__ VAR_0 ;
 struct group_des* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(void)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 struct group_des *VAR_6 = ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_0.num_groups; VAR_3++) {
  VAR_6 = &VAR_1[VAR_3];
  VAR_6->ports = &VAR_2[VAR_5];
  for (VAR_4 = 0; VAR_4 < VAR_6->nports; VAR_4++)
   VAR_6->ports[VAR_4].group = VAR_6;
  VAR_5 += VAR_6->nports;
  if (!VAR_6->custom_port)
   FUNC_1(VAR_6->pipename, VAR_0.base_name);
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   struct group_des *VAR_7 = &VAR_1[VAR_4];
   if (!FUNC_0(VAR_7->pipename, VAR_6->pipename))
    VAR_6->first_id += VAR_7->nports;
  }
 }
 VAR_6->last = 1;
}
