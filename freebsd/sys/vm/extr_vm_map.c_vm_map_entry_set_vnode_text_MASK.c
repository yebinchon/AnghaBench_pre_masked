
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_4__* vm_object_t ;
typedef TYPE_5__* vm_map_entry_t ;
struct vnode {int dummy; } ;
struct TYPE_9__ {TYPE_4__* vm_object; } ;
struct TYPE_13__ {int eflags; TYPE_1__ object; } ;
struct TYPE_10__ {struct vnode* swp_tmpfs; } ;
struct TYPE_11__ {TYPE_2__ swp; } ;
struct TYPE_12__ {scalar_t__ type; int flags; TYPE_3__ un_pager; struct vnode* handle; struct TYPE_12__* backing_object; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*,int ) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,int) ;

void
FUNC_9(vm_map_entry_t VAR_9, bool VAR_10)
{
 vm_object_t VAR_11, VAR_12;
 struct vnode *VAR_13;

 if ((VAR_9->eflags & VAR_3) == 0)
  return;
 FUNC_0((VAR_9->eflags & VAR_2) == 0,
     ("Submap with execs"));
 VAR_11 = VAR_9->object.vm_object;
 FUNC_0(VAR_11 != ((void*)0), ("No object for text, entry %p", VAR_9));
 FUNC_1(VAR_11);
 while ((VAR_12 = VAR_11->backing_object) != ((void*)0)) {
  FUNC_1(VAR_12);
  FUNC_2(VAR_11);
  VAR_11 = VAR_12;
 }

 VAR_13 = ((void*)0);
 if (VAR_11->type == VAR_4) {




 } else if (VAR_11->type == VAR_6) {
  VAR_13 = VAR_11->handle;
 } else if (VAR_11->type == VAR_5) {
  FUNC_0((VAR_11->flags & VAR_8) != 0,
      ("vm_map_entry_set_vnode_text: swap and !TMPFS "
      "entry %p, object %p, add %d", VAR_9, VAR_11, VAR_10));





  if ((VAR_11->flags & VAR_7) != 0)
   VAR_13 = VAR_11->un_pager.swp.swp_tmpfs;
 } else {
  FUNC_0(0,
      ("vm_map_entry_set_vnode_text: wrong object type, "
      "entry %p, object %p, add %d", VAR_9, VAR_11, VAR_10));
 }
 if (VAR_13 != ((void*)0)) {
  if (VAR_10) {
   FUNC_3(VAR_13);
   FUNC_2(VAR_11);
  } else {
   FUNC_7(VAR_13);
   FUNC_2(VAR_11);
   FUNC_8(VAR_13, VAR_1 | VAR_0);
   FUNC_5(VAR_13);
   FUNC_4(VAR_13, 0);
   FUNC_6(VAR_13);
  }
 } else {
  FUNC_2(VAR_11);
 }
}
