
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; } ;
union md_node_info {TYPE_1__ ds_port; } ;



__attribute__((used)) static bool FUNC_0(union md_node_info *VAR_0,
          union md_node_info *VAR_1)
{
 if (VAR_0->ds_port.id != VAR_1->ds_port.id)
  return 0;

 return 1;
}
