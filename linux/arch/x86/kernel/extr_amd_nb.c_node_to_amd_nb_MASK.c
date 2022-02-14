
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amd_northbridge {int dummy; } ;
struct TYPE_2__ {int num; struct amd_northbridge* nb; } ;


 TYPE_1__ VAR_0 ;

struct amd_northbridge *FUNC_0(int VAR_1)
{
 return (VAR_1 < VAR_0.num) ? &VAR_0.nb[VAR_1] : ((void*)0);
}
