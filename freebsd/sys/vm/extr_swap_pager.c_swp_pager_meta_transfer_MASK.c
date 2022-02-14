
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_3__* vm_object_t ;
struct swblk {scalar_t__ p; scalar_t__* d; } ;
typedef int daddr_t ;
struct TYPE_9__ {int swp_blks; } ;
struct TYPE_10__ {TYPE_1__ swp; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ un_pager; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct swblk* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (struct swblk*,int,scalar_t__) ;
 int FUNC_7 (int *,int *,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,struct swblk*) ;

__attribute__((used)) static void
FUNC_10(vm_object_t VAR_4, vm_object_t VAR_5,
    vm_pindex_t VAR_6, vm_pindex_t VAR_7)
{
 struct swblk *VAR_8;
 daddr_t VAR_9, VAR_10;
 vm_pindex_t VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_2(VAR_4);
 if (VAR_4->type != VAR_0 || VAR_7 == 0)
  return;

 FUNC_5(&VAR_10, &VAR_9);
 VAR_11 = VAR_6;
 VAR_12 = VAR_6 + VAR_7;
 for (;;) {
  VAR_8 = FUNC_0(&VAR_4->un_pager.swp.swp_blks,
      FUNC_3(VAR_6, VAR_2));
  if (VAR_8 == ((void*)0) || VAR_8->p >= VAR_12)
   break;
  VAR_15 = VAR_6 > VAR_8->p ? VAR_6 - VAR_8->p : 0;
  VAR_14 = VAR_12 - VAR_8->p < VAR_2 ? VAR_12 - VAR_8->p :
      VAR_2;
  for (VAR_13 = VAR_15; VAR_13 < VAR_14; VAR_13++) {
   if (VAR_8->d[VAR_13] == VAR_1)
    continue;
   if (VAR_5 == ((void*)0) ||
       !FUNC_8(VAR_4, VAR_5,
       VAR_8->p + VAR_13 - VAR_11, VAR_8->d[VAR_13])) {
    FUNC_7(&VAR_10, &VAR_9,
        VAR_8->d[VAR_13]);
   }
   VAR_8->d[VAR_13] = VAR_1;
  }
  VAR_6 = VAR_8->p + VAR_2;
  if (FUNC_6(VAR_8, 0, VAR_15) &&
      FUNC_6(VAR_8, VAR_14, VAR_2)) {
   FUNC_1(&VAR_4->un_pager.swp.swp_blks,
       VAR_8->p);
   FUNC_9(VAR_3, VAR_8);
  }
 }
 FUNC_4(VAR_10, VAR_9);
}
