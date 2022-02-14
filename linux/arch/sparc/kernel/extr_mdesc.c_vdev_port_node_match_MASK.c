
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; scalar_t__ parent_cfg_hdl; int name; } ;
union md_node_info {TYPE_1__ vdev_port; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(union md_node_info *VAR_1,
     union md_node_info *VAR_2)
{
 if (VAR_1->vdev_port.id != VAR_2->vdev_port.id)
  return 0;

 if (VAR_1->vdev_port.parent_cfg_hdl !=
     VAR_2->vdev_port.parent_cfg_hdl)
  return 0;

 if (FUNC_0(VAR_1->vdev_port.name,
      VAR_2->vdev_port.name, VAR_0) != 0)
  return 0;

 return 1;
}
