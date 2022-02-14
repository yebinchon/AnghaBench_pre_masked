
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int sock; } ;
struct TYPE_3__ {int port_num; } ;
struct usnic_ib_qp_grp_flow {int trans_type; TYPE_2__ udp; TYPE_1__ usnic_roce; } ;
typedef enum usnic_transport_type { ____Placeholder_usnic_transport_type } usnic_transport_type ;


 int VAR_0 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct usnic_ib_qp_grp_flow *VAR_1,
    uint32_t *VAR_2)
{
 enum usnic_transport_type VAR_3 = VAR_1->trans_type;
 int VAR_4;
 uint16_t VAR_5 = 0;

 switch (VAR_3) {
 case 128:
  *VAR_2 = VAR_1->usnic_roce.port_num;
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_1->udp.sock,
       ((void*)0), ((void*)0),
       &VAR_5);
  if (VAR_4)
   return VAR_4;





  *VAR_2 = VAR_5;
  break;
 default:
  FUNC_0("Unsupported transport %u\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
