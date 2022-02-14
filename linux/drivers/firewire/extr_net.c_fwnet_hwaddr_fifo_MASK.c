
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifo_lo; int fifo_hi; } ;
union fwnet_hwaddr {TYPE_1__ uc; } ;
typedef int u64 ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __u64 FUNC_2(union fwnet_hwaddr *VAR_0)
{
 return (u64)FUNC_0(&VAR_0->uc.fifo_hi) << 32
        | FUNC_1(&VAR_0->uc.fifo_lo);
}
