
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madeye_port {int gsi_agent; int smi_agent; } ;
struct ib_device {scalar_t__ node_type; int phys_port_cnt; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct ib_device*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct madeye_port*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct ib_device *VAR_2)
{
 struct madeye_port *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = (struct madeye_port *)
  FUNC_1(VAR_2, &VAR_1);
 if (!VAR_3)
  return;

 if (VAR_2->node_type == VAR_0) {
  VAR_5 = 0;
  VAR_6 = 0;
 } else {
  VAR_5 = 1;
  VAR_6 = VAR_2->phys_port_cnt;
 }

 for (VAR_4 = 0; VAR_4 <= VAR_6 - VAR_5; VAR_4++) {
  if (!FUNC_0(VAR_3[VAR_4].smi_agent))
   FUNC_2(VAR_3[VAR_4].smi_agent);
  if (!FUNC_0(VAR_3[VAR_4].gsi_agent))
   FUNC_2(VAR_3[VAR_4].gsi_agent);
 }
 FUNC_3(VAR_3);
}
