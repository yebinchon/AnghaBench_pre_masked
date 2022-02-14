
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ia64_sal_os_state {TYPE_2__* pal_min_state; } ;
struct ia64_psr {scalar_t__ cpl; int bn; scalar_t__ i; scalar_t__ ri; } ;
typedef int slidx_table_t ;
typedef int peidx_table_t ;
struct TYPE_7__ {scalar_t__ pmsa_iip; scalar_t__ pmsa_ipsr; scalar_t__* pmsa_gr; scalar_t__ pmsa_br0; } ;
typedef TYPE_2__ pal_min_state_area_t ;
typedef int pal_bus_check_info_t ;
struct TYPE_8__ {scalar_t__ gp; scalar_t__ fp; } ;
typedef TYPE_3__ ia64_fptr_t ;
struct TYPE_6__ {int minstate; } ;
struct TYPE_10__ {TYPE_1__ valid; } ;
struct TYPE_9__ {int pmsa_xpsr; int pmsa_ipsr; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 TYPE_5__* FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(slidx_table_t *VAR_1,
   peidx_table_t *VAR_2, pal_bus_check_info_t *VAR_3,
   struct ia64_sal_os_state *VAR_4)
{
 u64 VAR_5;
 pal_min_state_area_t *VAR_6;
 struct ia64_psr *VAR_7, *VAR_8;
 ia64_fptr_t *VAR_9 = (ia64_fptr_t*)VAR_0;


 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return FUNC_0("target address not valid");
 if (!FUNC_4(VAR_2) || !(FUNC_4(VAR_2)->valid.minstate))
  return FUNC_0("minstate not valid");
 VAR_7 =(struct ia64_psr *)&(FUNC_5(VAR_2)->pmsa_ipsr);
 VAR_8 =(struct ia64_psr *)&(FUNC_5(VAR_2)->pmsa_xpsr);






 VAR_6 = VAR_4->pal_min_state;
 if (VAR_7->cpl != 0 ||
    ((VAR_8->cpl != 0) && FUNC_2(VAR_6->pmsa_iip))) {





  VAR_6->pmsa_gr[8-1] = VAR_5;
  VAR_6->pmsa_gr[9-1] = VAR_6->pmsa_iip;
  VAR_6->pmsa_gr[10-1] = VAR_6->pmsa_ipsr;

  VAR_6->pmsa_br0 = VAR_6->pmsa_iip;

  VAR_6->pmsa_iip = VAR_9->fp;
  VAR_6->pmsa_gr[1-1] = VAR_9->gp;

  VAR_8 = (struct ia64_psr *)&VAR_6->pmsa_ipsr;
  VAR_8->cpl = 0;
  VAR_8->ri = 0;
  VAR_8->bn = 1;
  VAR_8->i = 0;

  return FUNC_3("user memory corruption. "
    "kill affected process - recovered.");
 }

 return FUNC_0("kernel context not recovered, iip 0x%lx\n",
    VAR_6->pmsa_iip);
}
