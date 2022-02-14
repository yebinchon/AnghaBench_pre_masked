
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fw_card {int * topology_map; TYPE_1__* root_node; } ;
typedef int __be32 ;
struct TYPE_2__ {int node_id; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct fw_card *VAR_0,
    u32 *VAR_1, int VAR_2)
{
 int VAR_3 = (VAR_0->root_node->node_id & 0x3f) + 1;
 __be32 *VAR_4 = VAR_0->topology_map;

 *VAR_4++ = FUNC_1((VAR_2 + 2) << 16);
 *VAR_4++ = FUNC_1(FUNC_0(VAR_0->topology_map[1]) + 1);
 *VAR_4++ = FUNC_1((VAR_3 << 16) | VAR_2);

 while (VAR_2--)
  *VAR_4++ = FUNC_2(VAR_1++);

 FUNC_3(VAR_0->topology_map);
}
