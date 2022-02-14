
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct opa_vnic_vema_port {int dummy; } ;
struct TYPE_2__ {int status; int attr_id; } ;
struct opa_vnic_vema_mad {TYPE_1__ mad_hdr; } ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;
 int FUNC_2 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;
 int FUNC_3 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;
 int FUNC_4 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*,int) ;
 int FUNC_5 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;
 int FUNC_6 (struct opa_vnic_vema_port*,struct opa_vnic_vema_mad*,struct opa_vnic_vema_mad*) ;

__attribute__((used)) static void FUNC_7(struct opa_vnic_vema_port *VAR_1,
       struct opa_vnic_vema_mad *VAR_2,
       struct opa_vnic_vema_mad *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_2->mad_hdr.attr_id);

 switch (VAR_4) {
 case 134:
  FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 case 130:
  FUNC_6(VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  FUNC_3(VAR_1, VAR_2, VAR_3);
  break;
 case 132:

 case 133:
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  FUNC_5(VAR_1, VAR_2, VAR_3);
  break;
 case 131:
  FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 default:
  VAR_3->mad_hdr.status = VAR_0;
  break;
 }
}
