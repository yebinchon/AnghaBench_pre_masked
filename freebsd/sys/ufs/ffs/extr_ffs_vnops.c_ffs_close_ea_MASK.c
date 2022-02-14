
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_mount; } ;
struct uio {int uio_iovcnt; scalar_t__ uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct ufs2_dinode {scalar_t__ di_extsize; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct iovec {scalar_t__ iov_len; int * iov_base; } ;
struct inode {int i_ea_error; scalar_t__ i_ea_len; scalar_t__ i_ea_refs; int * i_ea_area; struct ufs2_dinode* i_din2; } ;
struct TYPE_2__ {struct ucred* mnt_cred; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ucred* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,struct uio*,int,struct ucred*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*,int ,int,struct ucred*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct vnode *VAR_7, int VAR_8, struct ucred *VAR_9, struct thread *VAR_10)
{
 struct inode *VAR_11;
 struct uio VAR_12;
 struct iovec VAR_13;
 int VAR_14;
 struct ufs2_dinode *VAR_15;

 VAR_11 = FUNC_1(VAR_7);

 FUNC_3(VAR_7);
 if (VAR_11->i_ea_area == ((void*)0)) {
  FUNC_5(VAR_7);
  return (VAR_0);
 }
 VAR_15 = VAR_11->i_din2;
 VAR_14 = VAR_11->i_ea_error;
 if (VAR_8 && VAR_14 == 0) {
  FUNC_0(VAR_7, "ffs_close_ea commit");
  if (VAR_9 == VAR_4)
   VAR_9 = VAR_7->v_mount->mnt_cred;
  VAR_13.iov_base = VAR_11->i_ea_area;
  VAR_13.iov_len = VAR_11->i_ea_len;
  VAR_12.uio_iov = &VAR_13;
  VAR_12.uio_iovcnt = 1;
  VAR_12.uio_offset = 0;
  VAR_12.uio_resid = VAR_11->i_ea_len;
  VAR_12.uio_segflg = VAR_5;
  VAR_12.uio_rw = VAR_6;
  VAR_12.uio_td = VAR_10;

  if (VAR_11->i_ea_len < VAR_15->di_extsize)
   VAR_14 = FUNC_4(VAR_7, 0, VAR_1, VAR_9);
  VAR_14 = FUNC_2(VAR_7, &VAR_12, VAR_1 | VAR_2, VAR_9);
 }
 if (--VAR_11->i_ea_refs == 0) {
  FUNC_6(VAR_11->i_ea_area, VAR_3);
  VAR_11->i_ea_area = ((void*)0);
  VAR_11->i_ea_len = 0;
  VAR_11->i_ea_error = 0;
 }
 FUNC_5(VAR_7);
 return (VAR_14);
}
