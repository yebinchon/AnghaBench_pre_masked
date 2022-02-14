
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_offset_t ;
struct tte {int tte_data; } ;
typedef TYPE_2__* pmap_t ;
struct TYPE_6__ {int wired_count; } ;
struct TYPE_7__ {TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (char*,struct tte*) ;

__attribute__((used)) static int
FUNC_3(pmap_t VAR_2, pmap_t VAR_3, struct tte *VAR_4, vm_offset_t VAR_5)
{

 FUNC_0(VAR_2, VAR_0);
 if ((VAR_4->tte_data & VAR_1) == 0)
  FUNC_2("pmap_unwire_tte: tp %p is missing TD_WIRED", VAR_4);
 FUNC_1(&VAR_4->tte_data, VAR_1);
 VAR_2->pm_stats.wired_count--;
 return (1);
}
