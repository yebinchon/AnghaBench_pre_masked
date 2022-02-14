
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; } ;
struct TYPE_4__ {int status_and_code; } ;
struct hfi1_devdata {TYPE_1__ err_info_xmit_constraint; scalar_t__ rcv_ovfl_cnt; TYPE_2__ err_info_rcvport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ,int ) ;

void FUNC_1(struct hfi1_devdata *VAR_7)
{

 FUNC_0(VAR_7, VAR_1, VAR_0, 0);
 VAR_7->err_info_rcvport.status_and_code &= ~VAR_6;

 FUNC_0(VAR_7, VAR_4, VAR_0, 0);
 FUNC_0(VAR_7, VAR_2, VAR_0, 0);

 FUNC_0(VAR_7, VAR_3, VAR_0, 0);

 FUNC_0(VAR_7, VAR_5, VAR_0, 0);
 VAR_7->rcv_ovfl_cnt = 0;
 VAR_7->err_info_xmit_constraint.status &= ~VAR_6;
}
