
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rvt_swqe {int psn; } ;
struct rvt_sge_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rvt_sge_state*,struct rvt_swqe*,int) ;

__attribute__((used)) static u32 FUNC_1(struct rvt_sge_state *VAR_1, struct rvt_swqe *VAR_2,
         u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = ((VAR_3 - VAR_2->psn) & VAR_0) * VAR_4;
 return FUNC_0(VAR_1, VAR_2, VAR_5);
}
