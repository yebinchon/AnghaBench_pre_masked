
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nports; } ;
struct rvt_dev_info {TYPE_3__** ports; TYPE_1__ dparms; } ;
struct TYPE_5__ {scalar_t__ rb_node; } ;
struct TYPE_6__ {TYPE_2__ mcast_tree; } ;



int FUNC_0(struct rvt_dev_info *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->dparms.nports; VAR_1++)
  if (VAR_0->ports[VAR_1]->mcast_tree.rb_node)
   VAR_2++;
 return VAR_2;
}
