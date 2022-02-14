
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
struct TYPE_4__ {struct slbtnode** ua_child; struct slb* slb_entries; } ;
struct slbtnode {scalar_t__ ua_base; scalar_t__ ua_level; TYPE_1__ u; } ;
struct slb {int slbe; } ;
typedef TYPE_2__* pmap_t ;
struct TYPE_5__ {struct slbtnode* pm_slb_tree_root; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct slbtnode*) ;

struct slb *
FUNC_4(pmap_t VAR_3, vm_offset_t VAR_4)
{
 uint64_t VAR_5 = VAR_4 >> VAR_0;
 struct slbtnode *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3->pm_slb_tree_root;

 for (;;) {
  FUNC_0(FUNC_3(VAR_6), ("uad base %016jx level %d bad!",
      VAR_6->ua_base, VAR_6->ua_level));
  VAR_7 = FUNC_2(VAR_5, VAR_6->ua_level);





  if (VAR_6->ua_level == VAR_2)
   return ((VAR_6->u.slb_entries[VAR_7].slbe & VAR_1) ?
       &VAR_6->u.slb_entries[VAR_7] : ((void*)0));







  VAR_6 = VAR_6->u.ua_child[VAR_7];
  if (VAR_6 == ((void*)0) ||
      FUNC_1(VAR_5, VAR_6->ua_level) != VAR_6->ua_base)
   return (((void*)0));
 }

 return (((void*)0));
}
