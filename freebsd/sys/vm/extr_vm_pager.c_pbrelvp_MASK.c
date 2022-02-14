
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_xflags; int b_flags; int * b_bufobj; int * b_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(struct buf *VAR_3)
{

 FUNC_0(VAR_3->b_vp != ((void*)0), ("pbrelvp: NULL"));
 FUNC_0(VAR_3->b_bufobj != ((void*)0), ("pbrelvp: NULL bufobj"));
 FUNC_0((VAR_3->b_xflags & (VAR_1 | VAR_0)) == 0,
     ("pbrelvp: pager buf on vnode list."));

 VAR_3->b_vp = ((void*)0);
 VAR_3->b_bufobj = ((void*)0);
 VAR_3->b_flags &= ~VAR_2;
}
