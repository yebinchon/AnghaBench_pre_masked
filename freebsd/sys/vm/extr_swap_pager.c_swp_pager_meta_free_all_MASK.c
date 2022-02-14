
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_3__* vm_object_t ;
struct swblk {scalar_t__* d; scalar_t__ p; } ;
typedef int daddr_t ;
struct TYPE_6__ {int swp_blks; } ;
struct TYPE_7__ {TYPE_1__ swp; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ un_pager; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct swblk* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (int ,struct swblk*) ;

__attribute__((used)) static void
FUNC_7(vm_object_t VAR_4)
{
 struct swblk *VAR_5;
 daddr_t VAR_6, VAR_7;
 vm_pindex_t VAR_8;
 int VAR_9;

 FUNC_2(VAR_4);
 if (VAR_4->type != VAR_0)
  return;

 FUNC_4(&VAR_7, &VAR_6);
 for (VAR_8 = 0; (VAR_5 = FUNC_0(
     &VAR_4->un_pager.swp.swp_blks, VAR_8)) != ((void*)0);) {
  VAR_8 = VAR_5->p + VAR_2;
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   if (VAR_5->d[VAR_9] == VAR_1)
    continue;
   FUNC_5(&VAR_7, &VAR_6, VAR_5->d[VAR_9]);
  }
  FUNC_1(&VAR_4->un_pager.swp.swp_blks, VAR_5->p);
  FUNC_6(VAR_3, VAR_5);
 }
 FUNC_3(VAR_7, VAR_6);
}
