
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef int * vm_page_t ;
typedef int vm_ooffset_t ;
typedef TYPE_3__* vm_object_t ;
struct vnode {struct mount* v_mount; TYPE_3__* v_object; } ;
struct mount {int mnt_kern_flag; } ;
struct TYPE_8__ {int vnp_size; } ;
struct TYPE_9__ {TYPE_1__ vnp; } ;
struct TYPE_10__ {scalar_t__ type; scalar_t__ size; TYPE_2__ un_pager; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct vnode*,char*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (int *,int,int) ;
 int * FUNC_9 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *) ;

void
FUNC_13(struct vnode *VAR_7, vm_ooffset_t VAR_8)
{
 vm_object_t VAR_9;
 vm_page_t VAR_10;
 vm_pindex_t VAR_11;

 if ((VAR_9 = VAR_7->v_object) == ((void*)0))
  return;
 FUNC_2(VAR_9);
 if (VAR_9->type == VAR_2) {
  FUNC_3(VAR_9);
  return;
 }
 FUNC_0(VAR_9->type == VAR_3,
     ("not vnode-backed object %p", VAR_9));
 if (VAR_8 == VAR_9->un_pager.vnp.vnp_size) {



  FUNC_3(VAR_9);
  return;
 }
 VAR_11 = FUNC_1(VAR_8 + VAR_4);
 if (VAR_8 < VAR_9->un_pager.vnp.vnp_size) {



  if (VAR_11 < VAR_9->size)
   FUNC_7(VAR_9, VAR_11, VAR_9->size,
       0);
  if (!(VAR_8 & VAR_4))
   goto out;
  VAR_10 = FUNC_9(VAR_9, FUNC_1(VAR_8), VAR_6);
  if (VAR_10 == ((void*)0))
   goto out;
  if (!FUNC_10(VAR_10)) {
   int VAR_12 = (int)VAR_8 & VAR_4;
   int VAR_13 = VAR_5 - VAR_12;





   FUNC_5(VAR_10, VAR_12, VAR_13);






   FUNC_11(VAR_10, VAR_12, VAR_13);






   VAR_12 = FUNC_6(VAR_12, VAR_0);
   FUNC_8(VAR_10, VAR_12, VAR_5 - VAR_12);
  }
  FUNC_12(VAR_10);
 }
out:
 VAR_9->un_pager.vnp.vnp_size = VAR_8;
 VAR_9->size = VAR_11;
 FUNC_3(VAR_9);
}
