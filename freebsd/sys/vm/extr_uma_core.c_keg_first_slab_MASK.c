
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * uma_slab_t ;
typedef TYPE_1__* uma_keg_t ;
typedef TYPE_2__* uma_domain_t ;
struct TYPE_6__ {int ud_part_slab; int ud_free_slab; } ;
struct TYPE_5__ {TYPE_2__* uk_domain; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uma_slab_t
FUNC_6(uma_keg_t VAR_2, int VAR_3, bool VAR_4)
{
 uma_domain_t VAR_5;
 uma_slab_t VAR_6;
 int VAR_7;

 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_1,
     ("keg_first_slab: domain %d out of range", VAR_3));
 FUNC_1(VAR_2);

 VAR_6 = ((void*)0);
 VAR_7 = VAR_3;
 do {
  VAR_5 = &VAR_2->uk_domain[VAR_3];
  if (!FUNC_2(&VAR_5->ud_part_slab))
   return (FUNC_3(&VAR_5->ud_part_slab));
  if (!FUNC_2(&VAR_5->ud_free_slab)) {
   VAR_6 = FUNC_3(&VAR_5->ud_free_slab);
   FUNC_5(VAR_6, VAR_0);
   FUNC_4(&VAR_5->ud_part_slab, VAR_6, VAR_0);
   return (VAR_6);
  }
  if (VAR_4)
   VAR_3 = (VAR_3 + 1) % VAR_1;
 } while (VAR_3 != VAR_7);

 return (((void*)0));
}
