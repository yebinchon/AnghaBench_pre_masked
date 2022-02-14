
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int cpu_based_2nd_exec_ctrl; int vmexit_ctrl; int vmentry_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static inline bool FUNC_1(void)
{
 u64 VAR_6;

 FUNC_0(VAR_0, VAR_6);
 return (VAR_6 & VAR_1) &&
  (VAR_5.cpu_based_2nd_exec_ctrl & VAR_2) &&
  (VAR_5.vmexit_ctrl & VAR_4) &&
  (VAR_5.vmentry_ctrl & VAR_3);
}
