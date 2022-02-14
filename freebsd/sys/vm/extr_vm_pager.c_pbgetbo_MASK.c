
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int dummy; } ;
struct buf {struct bufobj* b_bufobj; int b_flags; int * b_vp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(struct bufobj *VAR_1, struct buf *VAR_2)
{

 FUNC_0(VAR_2->b_vp == ((void*)0), ("pbgetbo: not free (vnode)"));
 FUNC_0(VAR_2->b_bufobj == ((void*)0), ("pbgetbo: not free (bufobj)"));

 VAR_2->b_flags |= VAR_0;
 VAR_2->b_bufobj = VAR_1;
}
