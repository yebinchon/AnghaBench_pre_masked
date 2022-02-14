
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vm_object_t ;
struct TYPE_2__ {scalar_t__ bv_cnt; } ;
struct bufobj {scalar_t__ bo_numoutput; TYPE_1__ bo_dirty; } ;
struct vnode {int v_iflag; struct bufobj v_bufobj; int * v_object; } ;
struct mount {int dummy; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,scalar_t__) ;
 int FUNC_8 (struct vnode*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct bufobj*,int ,int ) ;
 int FUNC_10 (struct vnode*,int ,int ) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (struct mount*) ;
 scalar_t__ FUNC_15 (struct vnode*,struct mount**,int ) ;

__attribute__((used)) static int
FUNC_16(struct vnode *VAR_9)
{
 int VAR_10;
 int VAR_11;
 struct bufobj *VAR_12;
 struct mount *VAR_13;
 vm_object_t VAR_14;


 VAR_12 = &VAR_9->v_bufobj;
 FUNC_0(VAR_12);
 FUNC_2(VAR_9);
 if (VAR_12->bo_numoutput > 0 ||
     VAR_12->bo_dirty.bv_cnt > 0 ||
     ((VAR_14 = VAR_9->v_object) != ((void*)0) &&
      FUNC_12(VAR_14))) {
  FUNC_3(VAR_9);
  FUNC_1(VAR_12);

  if (FUNC_15(VAR_9, &VAR_13, VAR_7) != 0) {
   if (FUNC_6(VAR_9) != VAR_2)
    VAR_11 = 1;
   else
    VAR_11 = 0;
   FUNC_8(VAR_9, 0);
   (void) FUNC_15(VAR_9, &VAR_13, VAR_8);
   FUNC_7(VAR_9, VAR_2);
  } else if (FUNC_6(VAR_9) != VAR_2) {
   VAR_11 = 1;

   FUNC_7(VAR_9, VAR_3);
  } else
   VAR_11 = 0;


  FUNC_2(VAR_9);

  if ((VAR_9->v_iflag & VAR_6) != 0) {
   FUNC_3(VAR_9);
   if (VAR_11 != 0)
    FUNC_7(VAR_9, VAR_1);
   FUNC_14(VAR_13);
   return (VAR_0);
  }

  if ((VAR_14 = VAR_9->v_object) != ((void*)0) &&
      FUNC_12(VAR_14)) {
   FUNC_3(VAR_9);
   FUNC_4(VAR_14);
   FUNC_13(VAR_14, 0, 0, VAR_5);
   FUNC_5(VAR_14);
  } else
   FUNC_3(VAR_9);


  FUNC_0(VAR_12);
  VAR_10 = FUNC_9(&VAR_9->v_bufobj, 0, 0);
  if (VAR_10 != 0) {

   FUNC_1(VAR_12);
   if (VAR_11 != 0)
    FUNC_7(VAR_9, VAR_1);
   FUNC_14(VAR_13);
   return (VAR_10);
  }

  if (VAR_12->bo_dirty.bv_cnt > 0) {
   FUNC_1(VAR_12);
   if ((VAR_10 = FUNC_10(VAR_9, VAR_4, 0)) != 0) {
    if (VAR_11 != 0)
     FUNC_7(VAR_9, VAR_1);
    FUNC_14(VAR_13);
    return (VAR_10);
   }
   FUNC_0(VAR_12);
   if (VAR_12->bo_numoutput > 0 || VAR_12->bo_dirty.bv_cnt > 0)
    FUNC_11("ffs_rawread_sync: dirty bufs");
  }
  FUNC_1(VAR_12);
  if (VAR_11 != 0)
   FUNC_7(VAR_9, VAR_1);
  FUNC_14(VAR_13);
 } else {
  FUNC_3(VAR_9);
  FUNC_1(VAR_12);
 }
 return 0;
}
