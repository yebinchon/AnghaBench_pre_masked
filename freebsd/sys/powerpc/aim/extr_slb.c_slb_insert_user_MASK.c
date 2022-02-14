
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct slb {int dummy; } ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {int pm_slb_len; struct slb** pm_slb; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;

void
FUNC_2(pmap_t VAR_2, struct slb *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_2, VAR_0);

 if (VAR_2->pm_slb_len < VAR_1) {
  VAR_4 = VAR_2->pm_slb_len;
  VAR_2->pm_slb_len++;
 } else {
  VAR_4 = FUNC_1() % VAR_1;
 }


 VAR_2->pm_slb[VAR_4] = VAR_3;
}
