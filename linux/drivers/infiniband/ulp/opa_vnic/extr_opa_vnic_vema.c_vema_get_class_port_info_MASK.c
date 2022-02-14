
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opa_vnic_vema_port {int class_port_info; } ;
struct opa_vnic_vema_mad {scalar_t__ data; } ;
struct opa_class_port_info {int cap_mask2_resp_time; int cap_mask; int class_version; int base_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct opa_class_port_info*,int *,int) ;

__attribute__((used)) static void FUNC_3(struct opa_vnic_vema_port *VAR_4,
         struct opa_vnic_vema_mad *VAR_5,
         struct opa_vnic_vema_mad *VAR_6)
{
 struct opa_class_port_info *VAR_7;

 VAR_7 = (struct opa_class_port_info *)VAR_6->data;
 FUNC_2(VAR_7, &VAR_4->class_port_info, sizeof(*VAR_7));
 VAR_7->base_version = VAR_1,
 VAR_7->class_version = VAR_0;





 VAR_7->cap_mask = FUNC_0((VAR_2 |
        (VAR_3 << 8)));






 VAR_7->cap_mask2_resp_time = FUNC_1(18);
}
