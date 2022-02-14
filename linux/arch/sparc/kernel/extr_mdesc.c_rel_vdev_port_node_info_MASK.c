
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * name; } ;
union md_node_info {TYPE_1__ vdev_port; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(union md_node_info *VAR_0)
{
 if (VAR_0 && VAR_0->vdev_port.name) {
  FUNC_0(VAR_0->vdev_port.name);
  VAR_0->vdev_port.name = ((void*)0);
 }
}
