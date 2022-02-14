
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_fsync_args {int a_waitfor; struct vnode* a_vp; } ;
struct TYPE_2__ {scalar_t__ bv_cnt; } ;
struct bufobj {scalar_t__ bo_numoutput; TYPE_1__ bo_dirty; } ;
struct vnode {scalar_t__ v_type; struct bufobj v_bufobj; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct vnode*,int ,int ) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct vop_fsync_args *VAR_3)
{
 struct vnode *VAR_4;
 struct bufobj *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->a_vp;
 VAR_5 = &VAR_4->v_bufobj;
retry:
 VAR_6 = FUNC_3(VAR_4, VAR_3->a_waitfor, 0);
 if (VAR_6)
  return (VAR_6);
 if (VAR_3->a_waitfor == VAR_0 && FUNC_2(VAR_4)) {
  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6)
   return (VAR_6);






  FUNC_0(VAR_5);
  if ((VAR_4->v_type == VAR_2 || VAR_4->v_type == VAR_1) &&
      (VAR_5->bo_numoutput > 0 || VAR_5->bo_dirty.bv_cnt > 0)) {
   FUNC_1(VAR_5);
   goto retry;
  }
  FUNC_1(VAR_5);
 }
 return (0);
}
