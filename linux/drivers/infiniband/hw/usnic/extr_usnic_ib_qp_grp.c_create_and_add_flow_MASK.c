
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_transport_spec {int trans_type; } ;
struct usnic_ib_qp_grp_flow {int link; } ;
struct usnic_ib_qp_grp {int flows_lst; } ;
typedef enum usnic_transport_type { ____Placeholder_usnic_transport_type } usnic_transport_type ;


 int VAR_0 ;
 struct usnic_ib_qp_grp_flow* FUNC_0 (int ) ;
 int FUNC_1 (struct usnic_ib_qp_grp_flow*) ;


 struct usnic_ib_qp_grp_flow* FUNC_2 (struct usnic_ib_qp_grp*,struct usnic_transport_spec*) ;
 struct usnic_ib_qp_grp_flow* FUNC_3 (struct usnic_ib_qp_grp*,struct usnic_transport_spec*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct usnic_ib_qp_grp_flow*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static struct usnic_ib_qp_grp_flow*
FUNC_7(struct usnic_ib_qp_grp *VAR_1,
   struct usnic_transport_spec *VAR_2)
{
 struct usnic_ib_qp_grp_flow *VAR_3;
 enum usnic_transport_type VAR_4;

 VAR_4 = VAR_2->trans_type;
 switch (VAR_4) {
 case 128:
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  break;
 default:
  FUNC_6("Unsupported transport %u\n",
    VAR_2->trans_type);
  return FUNC_0(-VAR_0);
 }

 if (!FUNC_1(VAR_3)) {
  FUNC_4(&VAR_3->link, &VAR_1->flows_lst);
  FUNC_5(VAR_3);
 }


 return VAR_3;
}
