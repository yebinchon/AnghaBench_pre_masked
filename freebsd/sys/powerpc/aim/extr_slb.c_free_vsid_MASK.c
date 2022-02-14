
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {struct slbtnode** ua_child; TYPE_1__* slb_entries; } ;
struct slbtnode {scalar_t__ ua_base; scalar_t__ ua_level; TYPE_2__ u; int ua_alloc; } ;
typedef TYPE_3__* pmap_t ;
struct TYPE_8__ {struct slbtnode* pm_slb_tree_root; } ;
struct TYPE_6__ {scalar_t__ slbe; scalar_t__ slbv; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct slbtnode*) ;

void
FUNC_7(pmap_t VAR_2, uint64_t VAR_3, int VAR_4)
{
 struct slbtnode *VAR_5;
 int VAR_6;

 FUNC_1(VAR_2, VAR_0);

 VAR_5 = VAR_2->pm_slb_tree_root;

 for (;;) {
  FUNC_0(FUNC_6(VAR_5),
     ("uad base %09jx level %d bad!", VAR_5->ua_base, VAR_5->ua_level));

  VAR_6 = FUNC_5(VAR_3, VAR_5->ua_level);
  if (VAR_5->ua_level == VAR_1) {
   VAR_5->u.slb_entries[VAR_6].slbv = 0;
   FUNC_3();
   VAR_5->u.slb_entries[VAR_6].slbe = 0;
   FUNC_2(&VAR_5->ua_alloc, VAR_6);
   return;
  }

  VAR_5 = VAR_5->u.ua_child[VAR_6];
  if (VAR_5 == ((void*)0) ||
      FUNC_4(VAR_3, VAR_5->ua_level) != VAR_5->ua_base) {

   FUNC_0(0,
       ("Asked to remove an entry that was never inserted!"));
   return;
  }
 }
}
