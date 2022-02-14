
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_bufobj; } ;
struct buf {int * b_bufobj; int b_flags; struct vnode* b_vp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(struct vnode *VAR_1, struct buf *VAR_2)
{

 FUNC_0(VAR_2->b_vp == ((void*)0), ("pbgetvp: not free"));
 FUNC_0(VAR_2->b_bufobj == ((void*)0), ("pbgetvp: not free (bufobj)"));

 VAR_2->b_vp = VAR_1;
 VAR_2->b_flags |= VAR_0;
 VAR_2->b_bufobj = &VAR_1->v_bufobj;
}
