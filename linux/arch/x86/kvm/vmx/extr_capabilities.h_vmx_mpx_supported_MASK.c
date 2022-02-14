
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vmexit_ctrl; int vmentry_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(void)
{
 return (VAR_2.vmexit_ctrl & VAR_1) &&
  (VAR_2.vmentry_ctrl & VAR_0);
}
