
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_advlockasync_args {int a_op; int a_flags; int * a_cookiep; int * a_task; struct flock* a_fl; int * a_id; struct vnode* a_vp; } ;
struct vnode {int v_lockf; } ;
struct proc {int dummy; } ;
struct flock {int l_pid; int l_sysid; int l_whence; int l_type; int l_len; int l_start; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_7 ;
 struct proc* VAR_8 ;
 int FUNC_3 (struct vop_advlockasync_args*,int *,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct vnode *VAR_9, int VAR_10, struct flock *VAR_11,
    int VAR_12, int VAR_13, off_t VAR_14)
{
 struct vop_advlockasync_args VAR_15;
 struct flock VAR_16;
 struct proc *VAR_17;
 int VAR_18, VAR_19;

 VAR_15.a_vp = VAR_9;
 VAR_15.a_id = ((void*)0);
 VAR_15.a_op = VAR_10;
 VAR_15.a_fl = &VAR_16;
 VAR_15.a_flags = VAR_4|VAR_5|VAR_3;
 VAR_15.a_task = ((void*)0);
 VAR_15.a_cookiep = ((void*)0);
 VAR_16.l_start = VAR_11->l_start;
 VAR_16.l_len = VAR_11->l_len;
 VAR_16.l_type = VAR_11->l_type;
 VAR_16.l_whence = VAR_11->l_whence;
 VAR_16.l_pid = VAR_12;
 VAR_16.l_sysid = VAR_6 | VAR_13;

 for (;;) {
  VAR_18 = FUNC_3(&VAR_15, &VAR_9->v_lockf, VAR_14);
  if (VAR_18 == VAR_0) {
   FUNC_4("nlmdlk", 1);
   VAR_17 = VAR_8;
   VAR_19 = FUNC_6(VAR_7);
   FUNC_1(VAR_17);
   FUNC_7(0);
   FUNC_2(VAR_17);
   FUNC_5(VAR_19);
  } else if (VAR_18 == VAR_1) {







   VAR_18 = 0;
   break;
  } else
   break;
 }
 FUNC_0(VAR_18 == 0 || VAR_18 == VAR_2,
     ("Failed to register NFS lock locally - error=%d", VAR_18));
}
