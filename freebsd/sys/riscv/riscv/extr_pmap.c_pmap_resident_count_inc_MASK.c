
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* pmap_t ;
struct TYPE_5__ {int resident_count; } ;
struct TYPE_6__ {TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static __inline void
FUNC_1(pmap_t VAR_1, int VAR_2)
{

 FUNC_0(VAR_1, VAR_0);
 VAR_1->pm_stats.resident_count += VAR_2;
}
