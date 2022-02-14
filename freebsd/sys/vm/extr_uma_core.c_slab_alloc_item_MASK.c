
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* uma_slab_t ;
typedef TYPE_2__* uma_keg_t ;
typedef TYPE_3__* uma_domain_t ;
typedef int uint8_t ;
struct TYPE_11__ {int ud_full_slab; } ;
struct TYPE_10__ {int uk_rsize; TYPE_3__* uk_domain; int uk_free; } ;
struct TYPE_9__ {scalar_t__ us_freecount; size_t us_domain; void* us_data; int us_free; TYPE_2__* us_keg; } ;


 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void *
FUNC_6(uma_keg_t VAR_2, uma_slab_t VAR_3)
{
 uma_domain_t VAR_4;
 void *VAR_5;
 uint8_t VAR_6;

 FUNC_5(VAR_2 == VAR_3->us_keg);
 FUNC_2(VAR_2);

 VAR_6 = FUNC_1(VAR_0, &VAR_3->us_free) - 1;
 FUNC_0(VAR_0, VAR_6, &VAR_3->us_free);
 VAR_5 = VAR_3->us_data + (VAR_2->uk_rsize * VAR_6);
 VAR_3->us_freecount--;
 VAR_2->uk_free--;


 if (VAR_3->us_freecount == 0) {
  FUNC_4(VAR_3, VAR_1);
  VAR_4 = &VAR_2->uk_domain[VAR_3->us_domain];
  FUNC_3(&VAR_4->ud_full_slab, VAR_3, VAR_1);
 }

 return (VAR_5);
}
