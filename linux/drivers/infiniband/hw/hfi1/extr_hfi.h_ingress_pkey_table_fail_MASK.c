
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct hfi1_pportdata {int port_rcv_constraint_errors; struct hfi1_devdata* dd; } ;
struct TYPE_2__ {int status; int pkey; int slid; } ;
struct hfi1_devdata {TYPE_1__ err_info_rcv_constraint; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct hfi1_pportdata *VAR_1, u16 VAR_2,
        u32 VAR_3)
{
 struct hfi1_devdata *VAR_4 = VAR_1->dd;

 FUNC_0(&VAR_1->port_rcv_constraint_errors);
 if (!(VAR_4->err_info_rcv_constraint.status & VAR_0)) {
  VAR_4->err_info_rcv_constraint.status |= VAR_0;
  VAR_4->err_info_rcv_constraint.slid = VAR_3;
  VAR_4->err_info_rcv_constraint.pkey = VAR_2;
 }
}
