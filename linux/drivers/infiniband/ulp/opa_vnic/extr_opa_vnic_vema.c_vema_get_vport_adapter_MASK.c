
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opa_vnic_vema_port {int vports; } ;
struct opa_vnic_vema_mad {int dummy; } ;
struct opa_vnic_adapter {int dummy; } ;


 int FUNC_0 (struct opa_vnic_vema_mad*) ;
 struct opa_vnic_adapter* FUNC_1 (int *,int ) ;

__attribute__((used)) static inline struct opa_vnic_adapter *
FUNC_2(struct opa_vnic_vema_mad *VAR_0,
         struct opa_vnic_vema_port *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_1->vports, VAR_2);
}
