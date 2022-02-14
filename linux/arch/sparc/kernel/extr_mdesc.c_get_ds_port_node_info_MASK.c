
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
union md_node_info {TYPE_1__ ds_port; } ;
typedef int u64 ;
struct mdesc_handle {int dummy; } ;


 int * FUNC_0 (struct mdesc_handle*,int ,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct mdesc_handle *VAR_0, u64 VAR_1,
     union md_node_info *VAR_2)
{
 const u64 *VAR_3;


 VAR_3 = FUNC_0(VAR_0, VAR_1, "id", ((void*)0));
 if (!VAR_3)
  return -1;

 VAR_2->ds_port.id = *VAR_3;

 return 0;
}
