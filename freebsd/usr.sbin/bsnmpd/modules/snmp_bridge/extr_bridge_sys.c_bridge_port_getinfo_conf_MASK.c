
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_ifsflags; scalar_t__ ifbr_path_cost; int ifbr_priority; int ifbr_state; } ;
struct bridge_port {void* oper_ptp; int admin_ptp; void* oper_edge; void* admin_edge; void* priv_set; int span_enable; int enable; scalar_t__ path_cost; scalar_t__ admin_path_cost; int priority; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ifbreq *VAR_17, struct bridge_port *VAR_18)
{
 VAR_18->state = FUNC_0(VAR_17->ifbr_state);
 VAR_18->priority = VAR_17->ifbr_priority;
 if (VAR_17->ifbr_ifsflags & VAR_0)
  VAR_18->admin_path_cost = VAR_17->ifbr_path_cost;
 else
  VAR_18->admin_path_cost = 0;

 VAR_18->path_cost = VAR_17->ifbr_path_cost;

 if (VAR_17->ifbr_ifsflags & VAR_7)
  VAR_18->enable = VAR_16;
 else
  VAR_18->enable = VAR_15;


 if (VAR_17->ifbr_ifsflags & VAR_6)
  VAR_18->span_enable = VAR_14;
 else
  VAR_18->span_enable = VAR_13;

 if (VAR_17->ifbr_ifsflags & VAR_5)
  VAR_18->priv_set = VAR_12;
 else
  VAR_18->priv_set = VAR_11;

 if (VAR_17->ifbr_ifsflags & VAR_1)
  VAR_18->admin_edge = VAR_12;
 else
  VAR_18->admin_edge = VAR_11;

 if (VAR_17->ifbr_ifsflags & VAR_3)
  VAR_18->oper_edge = VAR_12;
 else
  VAR_18->oper_edge = VAR_11;

 if (VAR_17->ifbr_ifsflags & VAR_2) {
  VAR_18->admin_ptp = VAR_8;
  if (VAR_17->ifbr_ifsflags & VAR_4)
   VAR_18->oper_ptp = VAR_12;
  else
   VAR_18->oper_ptp = VAR_11;
 } else if (VAR_17->ifbr_ifsflags & VAR_4) {
  VAR_18->admin_ptp = VAR_10;
  VAR_18->oper_ptp = VAR_12;
 } else {
  VAR_18->admin_ptp = VAR_9;
  VAR_18->oper_ptp = VAR_11;
 }
}
