
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct opa_16b_mgmt {void* src_qpn; void* dest_qpn; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct opa_16b_mgmt *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 VAR_1->dest_qpn = FUNC_0(VAR_2 & VAR_0);
 VAR_1->src_qpn = FUNC_0(VAR_3 & VAR_0);
}
