
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_ib_qp_grp_flow {int trans_type; int link; } ;




 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usnic_ib_qp_grp_flow*) ;
 int FUNC_3 (struct usnic_ib_qp_grp_flow*) ;
 int FUNC_4 (struct usnic_ib_qp_grp_flow*) ;

__attribute__((used)) static void FUNC_5(struct usnic_ib_qp_grp_flow *VAR_0)
{
 FUNC_4(VAR_0);
 FUNC_1(&VAR_0->link);

 switch (VAR_0->trans_type) {
 case 128:
  FUNC_2(VAR_0);
  break;
 case 129:
  FUNC_3(VAR_0);
  break;
 default:
  FUNC_0(1, "Unsupported transport %u\n",
    VAR_0->trans_type);
  break;
 }
}
