
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ufs2_daddr_t ;
struct vnode {int v_vflag; TYPE_1__* v_rdev; } ;
struct snapdata {int sn_lock; scalar_t__ sn_listsize; int * sn_blklist; int sn_head; } ;
struct TYPE_2__ {struct snapdata* si_snapdata; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int VAR_4 ;
 int FUNC_4 (struct snapdata*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int *) ;

__attribute__((used)) static void
FUNC_7(struct vnode *VAR_5)
{
 struct snapdata *VAR_6;
 ufs2_daddr_t *VAR_7;

 FUNC_0(VAR_5, "try_free_snapdata");
 VAR_6 = VAR_5->v_rdev->si_snapdata;

 if (VAR_6 == ((void*)0) || FUNC_1(&VAR_6->sn_head) != ((void*)0) ||
     (VAR_5->v_vflag & VAR_4) == 0) {
  FUNC_3(VAR_5);
  return;
 }

 VAR_5->v_rdev->si_snapdata = ((void*)0);
 VAR_5->v_vflag &= ~VAR_4;
 FUNC_6(&VAR_6->sn_lock, VAR_0|VAR_1, FUNC_2(VAR_5));
 VAR_7 = VAR_6->sn_blklist;
 VAR_6->sn_blklist = ((void*)0);
 VAR_6->sn_listsize = 0;
 FUNC_6(&VAR_6->sn_lock, VAR_2, ((void*)0));
 if (VAR_7 != ((void*)0))
  FUNC_5(VAR_7, VAR_3);
 FUNC_4(VAR_6);
}
