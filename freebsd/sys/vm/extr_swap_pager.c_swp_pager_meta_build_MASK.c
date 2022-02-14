
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
typedef scalar_t__ daddr_t ;
struct TYPE_9__ {int swp_blks; scalar_t__ writemappings; } ;
struct TYPE_10__ {TYPE_1__ swp; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ un_pager; int * handle; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,struct swblk*) ;
 struct swblk* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int volatile*,int,int) ;
 int FUNC_8 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 int VAR_8 ;
 int FUNC_13 (TYPE_3__*,struct swblk*) ;
 int VAR_9 ;
 struct swblk* FUNC_14 (int ,int) ;
 int FUNC_15 (int ,struct swblk*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static daddr_t
FUNC_19(vm_object_t VAR_10, vm_pindex_t VAR_11, daddr_t VAR_12)
{
 static volatile int VAR_13, VAR_14;
 struct swblk *VAR_15, *VAR_16;
 vm_pindex_t VAR_17, VAR_18;
 daddr_t VAR_19;
 int VAR_20, VAR_21;

 FUNC_4(VAR_10);




 if (VAR_10->type != VAR_2) {
  FUNC_10(&VAR_10->un_pager.swp.swp_blks);





  FUNC_8();

  VAR_10->type = VAR_2;
  VAR_10->un_pager.swp.writemappings = 0;
  FUNC_0(VAR_10->handle == ((void*)0), ("default pager with handle"));
 }

 VAR_18 = FUNC_12(VAR_11, VAR_4);
 VAR_15 = FUNC_3(&VAR_10->un_pager.swp.swp_blks, VAR_18);
 if (VAR_15 == ((void*)0)) {
  if (VAR_12 == VAR_3)
   return (VAR_3);
  for (;;) {
   VAR_15 = FUNC_14(VAR_8, VAR_0 | (VAR_6 ==
       VAR_7 ? VAR_1 : 0));
   if (VAR_15 != ((void*)0)) {
    VAR_15->p = VAR_18;
    for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++)
     VAR_15->d[VAR_21] = VAR_3;
    if (FUNC_7(&VAR_13,
        1, 0))
     FUNC_11("swblk zone ok\n");
    break;
   }
   FUNC_6(VAR_10);
   if (FUNC_16(VAR_8)) {
    if (FUNC_7(&VAR_13,
        0, 1))
     FUNC_11("swap blk zone exhausted, "
         "increase kern.maxswzone\n");
    FUNC_18(VAR_5);
    FUNC_9("swzonxb", 10);
   } else
    FUNC_17(VAR_8);
   FUNC_5(VAR_10);
   VAR_15 = FUNC_3(&VAR_10->un_pager.swp.swp_blks,
       VAR_18);
   if (VAR_15 != ((void*)0))





    goto allocated;
  }
  for (;;) {
   VAR_20 = FUNC_2(
       &VAR_10->un_pager.swp.swp_blks, VAR_15);
   if (VAR_20 == 0) {
    if (FUNC_7(&VAR_14,
        1, 0))
     FUNC_11("swpctrie zone ok\n");
    break;
   }
   FUNC_6(VAR_10);
   if (FUNC_16(VAR_9)) {
    if (FUNC_7(&VAR_14,
        0, 1))
     FUNC_11("swap pctrie zone exhausted, "
         "increase kern.maxswzone\n");
    FUNC_18(VAR_5);
    FUNC_9("swzonxp", 10);
   } else
    FUNC_17(VAR_9);
   FUNC_5(VAR_10);
   VAR_16 = FUNC_3(&VAR_10->un_pager.swp.swp_blks,
       VAR_18);
   if (VAR_16 != ((void*)0)) {
    FUNC_15(VAR_8, VAR_15);
    VAR_15 = VAR_16;
    goto allocated;
   }
  }
 }
allocated:
 FUNC_1(VAR_15->p == VAR_18);

 VAR_17 = VAR_11 % VAR_4;

 VAR_19 = VAR_15->d[VAR_17];

 VAR_15->d[VAR_17] = VAR_12;




 if (VAR_12 == VAR_3)
     FUNC_13(VAR_10, VAR_15);
 return (VAR_19);
}
