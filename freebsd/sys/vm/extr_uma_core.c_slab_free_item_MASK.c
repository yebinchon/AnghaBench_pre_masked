
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_slab_t ;
typedef TYPE_3__* uma_keg_t ;
typedef TYPE_4__* uma_domain_t ;
typedef uintptr_t uint8_t ;
struct TYPE_13__ {int ud_part_slab; int ud_free_slab; } ;
struct TYPE_12__ {scalar_t__ uk_ipers; uintptr_t uk_rsize; int uk_free; TYPE_4__* uk_domain; int uk_lock; } ;
struct TYPE_11__ {size_t us_domain; scalar_t__ us_freecount; int us_free; scalar_t__ us_data; TYPE_3__* us_keg; } ;
struct TYPE_10__ {int * uz_lockptr; TYPE_3__* uz_keg; } ;


 int FUNC_0 (int ,uintptr_t,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(uma_zone_t VAR_2, uma_slab_t VAR_3, void *VAR_4)
{
 uma_keg_t VAR_5;
 uma_domain_t VAR_6;
 uint8_t VAR_7;

 VAR_5 = VAR_2->uz_keg;
 FUNC_4(VAR_2->uz_lockptr == &VAR_5->uk_lock);
 FUNC_1(VAR_5);
 FUNC_4(VAR_5 == VAR_3->us_keg);

 VAR_6 = &VAR_5->uk_domain[VAR_3->us_domain];


 if (VAR_3->us_freecount+1 == VAR_5->uk_ipers) {
  FUNC_3(VAR_3, VAR_1);
  FUNC_2(&VAR_6->ud_free_slab, VAR_3, VAR_1);
 } else if (VAR_3->us_freecount == 0) {
  FUNC_3(VAR_3, VAR_1);
  FUNC_2(&VAR_6->ud_part_slab, VAR_3, VAR_1);
 }


 VAR_7 = ((uintptr_t)VAR_4 - (uintptr_t)VAR_3->us_data) / VAR_5->uk_rsize;
 FUNC_0(VAR_0, VAR_7, &VAR_3->us_free);
 VAR_3->us_freecount++;


 VAR_5->uk_free++;
}
