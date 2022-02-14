
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_bufobj; } ;
struct swdevt {struct vnode* sw_id; scalar_t__ sw_first; } ;
struct buf {scalar_t__ b_iocmd; scalar_t__ b_blkno; int b_iooffset; struct vnode* b_vp; int * b_bufobj; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct buf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct vnode*) ;

__attribute__((used)) static void
FUNC_6(struct buf *VAR_1, struct swdevt *VAR_2)
{
 struct vnode *VAR_3;

 VAR_1->b_blkno = FUNC_3(VAR_1->b_blkno - VAR_2->sw_first);

 VAR_3 = VAR_2->sw_id;
 FUNC_5(VAR_3);
 if (VAR_1->b_iocmd == VAR_0) {
  if (VAR_1->b_bufobj)
   FUNC_1(VAR_1->b_bufobj);
  FUNC_2(&VAR_3->v_bufobj);
 }
 if (VAR_1->b_bufobj != &VAR_3->v_bufobj)
  VAR_1->b_bufobj = &VAR_3->v_bufobj;
 VAR_1->b_vp = VAR_3;
 VAR_1->b_iooffset = FUNC_4(VAR_1->b_blkno);
 FUNC_0(VAR_1);
 return;
}
