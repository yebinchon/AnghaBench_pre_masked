
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {uintptr_t sched_nr; } ;
struct dn_schk {TYPE_1__ sch; } ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(uintptr_t VAR_1, int VAR_2, void *VAR_3)
{
 uint32_t VAR_4 = !(VAR_2 & VAR_0) ? VAR_1 :
  ((struct dn_schk *)VAR_1)->sch.sched_nr;
 return ( (VAR_4>>8)^(VAR_4>>4)^VAR_4 );
}
