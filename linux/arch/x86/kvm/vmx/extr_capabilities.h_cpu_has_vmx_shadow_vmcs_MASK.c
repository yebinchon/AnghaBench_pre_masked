
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int cpu_based_2nd_exec_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static inline bool FUNC_1(void)
{
 u64 VAR_4;


 FUNC_0(VAR_0, VAR_4);
 if (!(VAR_4 & VAR_1))
  return 0;

 return VAR_3.cpu_based_2nd_exec_ctrl &
  VAR_2;
}
