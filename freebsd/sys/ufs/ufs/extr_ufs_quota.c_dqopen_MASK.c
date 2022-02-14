
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; int uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct ufsmount {int * um_qflags; int * um_cred; } ;
struct thread {int dummy; } ;
struct iovec {int iov_len; struct dqhdr64* iov_base; } ;
struct dqhdr64 {int dqh_reclen; int dqh_hdrlen; int dqh_version; int dqh_magic; } ;
struct dqblk64 {int dummy; } ;
typedef int dqh ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ufsmount*) ;
 int FUNC_2 (struct ufsmount*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct vnode*,struct uio*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct vnode *VAR_5, struct ufsmount *VAR_6, int VAR_7)
{
 struct dqhdr64 VAR_8;
 struct iovec VAR_9;
 struct uio VAR_10;
 int VAR_11;

 FUNC_0(VAR_5, "dqopen");
 VAR_10.uio_iov = &VAR_9;
 VAR_10.uio_iovcnt = 1;
 VAR_9.iov_base = &VAR_8;
 VAR_9.iov_len = sizeof(VAR_8);
 VAR_10.uio_resid = sizeof(VAR_8);
 VAR_10.uio_offset = 0;
 VAR_10.uio_segflg = VAR_4;
 VAR_10.uio_rw = VAR_3;
 VAR_10.uio_td = (struct thread *)0;
 VAR_11 = FUNC_3(VAR_5, &VAR_10, 0, VAR_6->um_cred[VAR_7]);

 if (VAR_11 != 0)
  return (VAR_11);
 if (VAR_10.uio_resid > 0) {

  return (0);
 }

 FUNC_1(VAR_6);
 if (FUNC_5(VAR_8.dqh_magic, VAR_1) == 0 &&
     FUNC_4(VAR_8.dqh_version) == VAR_2 &&
     FUNC_4(VAR_8.dqh_hdrlen) == (uint32_t)sizeof(struct dqhdr64) &&
     FUNC_4(VAR_8.dqh_reclen) == (uint32_t)sizeof(struct dqblk64)) {

  VAR_6->um_qflags[VAR_7] |= VAR_0;
 } else {
  VAR_6->um_qflags[VAR_7] &= ~VAR_0;
 }
 FUNC_2(VAR_6);

 return (0);
}
