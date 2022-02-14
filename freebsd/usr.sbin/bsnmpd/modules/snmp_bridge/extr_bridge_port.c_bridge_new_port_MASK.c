
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mibif {int name; int sysindex; int index; } ;
struct bridge_port {int admin_ptp; void* oper_ptp; void* oper_edge; void* admin_edge; void* proto_migr; int circuit; int p_name; int port_no; int if_idx; int sysindex; } ;
struct bridge_if {int f_bp; int sysindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *,struct bridge_port*,int *) ;
 int VAR_4 ;
 int FUNC_1 (struct bridge_port*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;

struct bridge_port *
FUNC_6(struct mibif *VAR_7, struct bridge_if *VAR_8)
{
 struct bridge_port *VAR_9;

 if ((VAR_9 = (struct bridge_port *) FUNC_2(sizeof(*VAR_9))) == ((void*)0)) {
  FUNC_5(VAR_1, "bridge new member: failed: %s",
   FUNC_3(VAR_5));
  return (((void*)0));
 }

 FUNC_1(VAR_9, sizeof(*VAR_9));

 VAR_9->sysindex = VAR_8->sysindex;
 VAR_9->if_idx = VAR_7->index;
 VAR_9->port_no = VAR_7->sysindex;
 FUNC_4(VAR_9->p_name, VAR_7->name, VAR_0);
 VAR_9->circuit = VAR_6;






 VAR_9->proto_migr = VAR_3;
 VAR_9->admin_edge = VAR_3;
 VAR_9->oper_edge = VAR_3;
 VAR_9->oper_ptp = VAR_3;
 VAR_9->admin_ptp = VAR_2;

 FUNC_0(&VAR_4, VAR_9, &(VAR_8->f_bp));

 return (VAR_9);
}
