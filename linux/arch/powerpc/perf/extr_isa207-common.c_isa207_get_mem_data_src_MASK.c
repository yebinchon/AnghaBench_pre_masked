
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union perf_mem_data_src {int val; } ;
typedef int u64 ;
typedef int u32 ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(union perf_mem_data_src *VAR_11, u32 VAR_12,
       struct pt_regs *VAR_13)
{
 u64 VAR_14;
 u32 VAR_15;
 u64 VAR_16;
 u64 VAR_17;


 if (!(VAR_12 & VAR_8)) {
  VAR_11->val = 0;
  return;
 }

 VAR_16 = FUNC_2(VAR_9);
 VAR_17 = (VAR_16 & VAR_4) >> VAR_5;
 if (VAR_17 == 1 || VAR_17 == 2) {
  VAR_14 = (VAR_16 & VAR_2) >> VAR_3;
  VAR_15 = (VAR_16 & VAR_0) >> VAR_1;

  VAR_11->val = FUNC_1(VAR_14, VAR_15);
  VAR_11->val |= (VAR_17 == 1) ? FUNC_0(VAR_7, VAR_6) : FUNC_0(VAR_7, VAR_10);
 }
}
