
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_domain_t ;
struct TYPE_3__ {scalar_t__ uzd_imax; scalar_t__ uzd_imin; long uzd_nitems; int uzd_wss; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(uma_zone_domain_t VAR_0)
{
 long VAR_1;

 FUNC_0(VAR_0->uzd_imax >= VAR_0->uzd_imin);
 VAR_1 = VAR_0->uzd_imax - VAR_0->uzd_imin;
 VAR_0->uzd_imax = VAR_0->uzd_imin = VAR_0->uzd_nitems;
 VAR_0->uzd_wss = (4 * VAR_1 + VAR_0->uzd_wss) / 5;
}
