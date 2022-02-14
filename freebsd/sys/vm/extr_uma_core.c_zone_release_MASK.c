
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_slab_t ;
typedef TYPE_3__* uma_keg_t ;
typedef int uint8_t ;
struct TYPE_13__ {int uk_pgoff; int uk_hash; } ;
struct TYPE_12__ {TYPE_3__* us_keg; } ;
struct TYPE_11__ {int uz_flags; TYPE_3__* uz_keg; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 uintptr_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,void*) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(uma_zone_t VAR_3, void **VAR_4, int VAR_5)
{
 void *VAR_6;
 uma_slab_t VAR_7;
 uma_keg_t VAR_8;
 uint8_t *VAR_9;
 int VAR_10;

 VAR_8 = VAR_3->uz_keg;
 FUNC_0(VAR_8);
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_6 = VAR_4[VAR_10];
  if (!(VAR_3->uz_flags & VAR_2)) {
   VAR_9 = (uint8_t *)((uintptr_t)VAR_6 & (~VAR_0));
   if (VAR_3->uz_flags & VAR_1) {
    VAR_7 = FUNC_3(&VAR_8->uk_hash, VAR_9);
   } else {
    VAR_9 += VAR_8->uk_pgoff;
    VAR_7 = (uma_slab_t)VAR_9;
   }
  } else {
   VAR_7 = FUNC_5((vm_offset_t)VAR_6);
   FUNC_2(VAR_7->us_keg == VAR_8);
  }
  FUNC_4(VAR_3, VAR_7, VAR_6);
 }
 FUNC_1(VAR_8);
}
