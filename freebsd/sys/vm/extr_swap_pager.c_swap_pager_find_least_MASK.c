
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_3__* vm_object_t ;
struct swblk {int p; scalar_t__* d; } ;
struct TYPE_6__ {int swp_blks; } ;
struct TYPE_7__ {TYPE_1__ swp; } ;
struct TYPE_8__ {scalar_t__ type; int size; TYPE_2__ un_pager; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct swblk* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

vm_pindex_t
FUNC_5(vm_object_t VAR_3, vm_pindex_t VAR_4)
{
 struct swblk *VAR_5;
 int VAR_6;

 FUNC_2(VAR_3);
 if (VAR_3->type != VAR_0)
  return (VAR_3->size);

 VAR_5 = FUNC_1(&VAR_3->un_pager.swp.swp_blks,
     FUNC_3(VAR_4, VAR_2));
 if (VAR_5 == ((void*)0))
  return (VAR_3->size);
 if (VAR_5->p < VAR_4) {
  for (VAR_6 = VAR_4 % VAR_2; VAR_6 < VAR_2; VAR_6++) {
   if (VAR_5->d[VAR_6] != VAR_1)
    return (VAR_5->p + VAR_6);
  }
  VAR_5 = FUNC_1(&VAR_3->un_pager.swp.swp_blks,
      FUNC_4(VAR_4, VAR_2));
  if (VAR_5 == ((void*)0))
   return (VAR_3->size);
 }
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_5->d[VAR_6] != VAR_1)
   return (VAR_5->p + VAR_6);
 }





 FUNC_0(0);
 return (VAR_3->size);
}
