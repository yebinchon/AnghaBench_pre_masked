
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opa_vnic_adapter {int* flow_tbl; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct opa_vnic_adapter *VAR_1,
           u8 VAR_2)
{
 u8 VAR_3;


 VAR_3 = ((VAR_2 & 0xf) + (VAR_2 >> 4));
 return VAR_1->flow_tbl[VAR_3 & (VAR_0 - 1)];
}
