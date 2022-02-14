
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rvt_qp {int dummy; } ;
struct ib_other_headers {void** bth; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct rvt_qp *VAR_0,
         struct ib_other_headers *VAR_1,
         u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 VAR_1->bth[0] = FUNC_0(VAR_2);
 VAR_1->bth[1] = FUNC_0(VAR_3);
 VAR_1->bth[2] = FUNC_0(VAR_4);
}
