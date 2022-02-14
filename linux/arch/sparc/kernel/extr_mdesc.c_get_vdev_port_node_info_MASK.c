
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent_cfg_hdl; int name; int id; } ;
union md_node_info {TYPE_1__ vdev_port; } ;
typedef int u64 ;
struct mdesc_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 void* FUNC_1 (struct mdesc_handle*,int ,char*,int *) ;
 int * FUNC_2 (struct mdesc_handle*,int ) ;

__attribute__((used)) static int FUNC_3(struct mdesc_handle *VAR_1, u64 VAR_2,
       union md_node_info *VAR_3)
{
 const u64 *VAR_4;
 const char *VAR_5;
 const u64 *VAR_6;







 VAR_6 = FUNC_1(VAR_1, VAR_2, "id", ((void*)0));
 VAR_5 = FUNC_1(VAR_1, VAR_2, "name", ((void*)0));
 VAR_4 = FUNC_2(VAR_1, VAR_2);

 if (!VAR_6 || !VAR_5 || !VAR_4)
  return -1;

 VAR_3->vdev_port.id = *VAR_6;
 VAR_3->vdev_port.name = FUNC_0(VAR_5, VAR_0);
 if (!VAR_3->vdev_port.name)
  return -1;
 VAR_3->vdev_port.parent_cfg_hdl = *VAR_4;

 return 0;
}
