
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_node {int port_count; struct fw_node** ports; } ;



__attribute__((used)) static void FUNC_0(struct fw_node *VAR_0, struct fw_node *VAR_1, int VAR_2)
{
 struct fw_node *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->ports[VAR_2];
 VAR_0->ports[VAR_2] = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_3->port_count; VAR_4++) {
  if (VAR_3->ports[VAR_4] == VAR_1) {
   VAR_3->ports[VAR_4] = VAR_0;
   break;
  }
 }
}
