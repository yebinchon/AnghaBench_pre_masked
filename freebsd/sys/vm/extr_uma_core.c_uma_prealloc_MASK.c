
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uma_zone_t ;
typedef TYPE_2__* uma_slab_t ;
typedef TYPE_3__* uma_keg_t ;
typedef TYPE_4__* uma_domain_t ;
struct vm_domainset_iter {int dummy; } ;
struct TYPE_16__ {TYPE_1__* dr_policy; } ;
struct TYPE_15__ {int ud_free_slab; } ;
struct TYPE_14__ {int uk_ipers; TYPE_5__ uk_dr; TYPE_4__* uk_domain; } ;
struct TYPE_13__ {size_t us_domain; TYPE_3__* us_keg; } ;
struct TYPE_12__ {int ds_mask; } ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int ,int,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct vm_domainset_iter*,int*) ;
 int FUNC_7 (struct vm_domainset_iter*,TYPE_5__*,int*,int*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(uma_zone_t VAR_3, int VAR_4)
{
 struct vm_domainset_iter VAR_5;
 uma_domain_t VAR_6;
 uma_slab_t VAR_7;
 uma_keg_t VAR_8;
 int VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_3, VAR_8);
 FUNC_1(VAR_8);
 VAR_11 = VAR_4 / VAR_8->uk_ipers;
 if (VAR_11 * VAR_8->uk_ipers < VAR_4)
  VAR_11++;
 while (VAR_11-- > 0) {
  VAR_9 = VAR_0;
  FUNC_7(&VAR_5, &VAR_8->uk_dr, &VAR_10,
      &VAR_9);
  for (;;) {
   VAR_7 = FUNC_5(VAR_8, VAR_3, VAR_10, VAR_1,
       VAR_9);
   if (VAR_7 != ((void*)0)) {
    FUNC_4(VAR_7->us_keg == VAR_8);
    VAR_6 = &VAR_8->uk_domain[VAR_7->us_domain];
    FUNC_3(&VAR_6->ud_free_slab, VAR_7,
        VAR_2);
    break;
   }
   FUNC_1(VAR_8);
   if (FUNC_6(&VAR_5, &VAR_10) != 0) {
    FUNC_2(VAR_8);
    FUNC_8(&VAR_8->uk_dr.dr_policy->ds_mask);
    FUNC_1(VAR_8);
   }
  }
 }
 FUNC_2(VAR_8);
}
