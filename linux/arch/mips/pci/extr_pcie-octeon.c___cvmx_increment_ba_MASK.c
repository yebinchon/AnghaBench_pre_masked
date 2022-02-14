
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ba; } ;
struct TYPE_3__ {int ba; } ;
union cvmx_sli_mem_access_subidx {TYPE_2__ s; TYPE_1__ cn68xx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(union cvmx_sli_mem_access_subidx *VAR_1)
{
 if (FUNC_0(VAR_0))
  VAR_1->cn68xx.ba++;
 else
  VAR_1->s.ba++;
}
