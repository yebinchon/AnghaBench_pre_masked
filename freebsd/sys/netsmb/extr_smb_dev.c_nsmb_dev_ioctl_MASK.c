
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct uio {int uio_iovcnt; int uio_resid; struct thread* uio_td; int uio_rw; int uio_segflg; int uio_offset; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct smbioc_t2rq {int dummy; } ;
struct smbioc_rw {int ioc_cnt; int ioc_fh; int ioc_offset; int ioc_base; } ;
struct smbioc_rq {int dummy; } ;
struct smbioc_ossn {int dummy; } ;
struct smbioc_oshare {int dummy; } ;
struct smbioc_lookup {int dummy; } ;
struct smbioc_flags {void* ioc_level; int ioc_mask; int ioc_flags; } ;
struct TYPE_3__ {int co_flags; } ;
struct smb_vc {TYPE_1__ obj; } ;
struct TYPE_4__ {int co_flags; } ;
struct smb_share {TYPE_2__ obj; } ;
struct smb_dev {struct smb_share* sd_share; void* sd_level; struct smb_vc* sd_vc; } ;
struct smb_cred {int dummy; } ;
struct iovec {int iov_len; int iov_base; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (void**) ;
 int FUNC_3 (struct smb_cred*,int ) ;
 struct smb_cred* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct smb_cred*,struct thread*,int *) ;
 int FUNC_6 (struct smb_share*,int ,struct uio*,struct smb_cred*) ;
 int FUNC_7 (struct smb_share*,struct smb_cred*) ;
 int FUNC_8 (struct smb_share*,struct smb_cred*) ;
 int FUNC_9 (struct smb_share*) ;
 int FUNC_10 (struct smb_share*,struct smb_cred*) ;
 int FUNC_11 (struct smb_share*) ;
 int FUNC_12 (struct smbioc_lookup*,struct smb_cred*,struct smb_vc**,struct smb_share**) ;
 int FUNC_13 (struct smbioc_ossn*,struct smb_cred*,struct smb_vc**) ;
 int FUNC_14 (struct smb_vc*,struct smbioc_oshare*,struct smb_cred*,struct smb_share**) ;
 int FUNC_15 (struct smb_share*,struct smbioc_rq*,struct smb_cred*) ;
 int FUNC_16 (struct smb_share*,struct smbioc_t2rq*,struct smb_cred*) ;
 int FUNC_17 (struct smb_vc*,struct smb_cred*) ;
 int FUNC_18 (struct smb_vc*,struct smb_cred*) ;
 int FUNC_19 (struct smb_vc*) ;
 int FUNC_20 (struct smb_vc*,struct smb_cred*) ;
 int FUNC_21 (struct smb_vc*) ;
 int FUNC_22 (struct smb_share*,int ,struct uio*,struct smb_cred*) ;

__attribute__((used)) static int
FUNC_23(struct cdev *VAR_13, u_long VAR_14, caddr_t VAR_15, int VAR_16, struct thread *VAR_17)
{
 struct smb_dev *VAR_18;
 struct smb_vc *VAR_19;
 struct smb_share *VAR_20;
 struct smb_cred *VAR_21;
 int VAR_22 = 0;

 VAR_22 = FUNC_2((void **)&VAR_18);
 if (VAR_22)
  return (VAR_22);
 VAR_21 = FUNC_4(sizeof(struct smb_cred), VAR_4, VAR_5);
 FUNC_0();
 FUNC_5(VAR_21, VAR_17, ((void*)0));
 switch (VAR_14) {
     case 134:
  if (VAR_18->sd_vc) {
   VAR_22 = VAR_1;
   goto out;
  }
  VAR_22 = FUNC_13((struct smbioc_ossn*)VAR_15,
      VAR_21, &VAR_19);
  if (VAR_22)
   break;
  VAR_18->sd_vc = VAR_19;
  FUNC_21(VAR_19);
  VAR_18->sd_level = VAR_7;
  break;
     case 133:
  if (VAR_18->sd_share) {
   VAR_22 = VAR_1;
   goto out;
  }
  if (VAR_18->sd_vc == ((void*)0)) {
   VAR_22 = VAR_3;
   goto out;
  }
  VAR_22 = FUNC_14(VAR_18->sd_vc,
      (struct smbioc_oshare*)VAR_15, VAR_21, &VAR_20);
  if (VAR_22)
   break;
  VAR_18->sd_share = VAR_20;
  FUNC_11(VAR_20);
  VAR_18->sd_level = VAR_6;
  break;
     case 131:
  if (VAR_18->sd_share == ((void*)0)) {
   VAR_22 = VAR_3;
   goto out;
  }
  VAR_22 = FUNC_15(VAR_18->sd_share,
      (struct smbioc_rq*)VAR_15, VAR_21);
  break;
     case 129:
  if (VAR_18->sd_share == ((void*)0)) {
   VAR_22 = VAR_3;
   goto out;
  }
  VAR_22 = FUNC_16(VAR_18->sd_share,
      (struct smbioc_t2rq*)VAR_15, VAR_21);
  break;
     case 130: {
  struct smbioc_flags *VAR_23 = (struct smbioc_flags*)VAR_15;
  int VAR_24;

  if (VAR_23->ioc_level == VAR_7) {
   if (VAR_23->ioc_mask & VAR_9) {
    VAR_24 = VAR_23->ioc_flags & VAR_9;
    if ((VAR_19 = VAR_18->sd_vc) == ((void*)0)) {
     VAR_22 = VAR_3;
     goto out;
    }
    VAR_22 = FUNC_17(VAR_19, VAR_21);
    if (VAR_22)
     break;
    if (VAR_24 && (VAR_19->obj.co_flags & VAR_9) == 0) {
     VAR_19->obj.co_flags |= VAR_9;
     FUNC_19(VAR_19);
    } else if (!VAR_24 && (VAR_19->obj.co_flags & VAR_9)) {
     VAR_19->obj.co_flags &= ~VAR_9;
     FUNC_20(VAR_19, VAR_21);
    }
    FUNC_18(VAR_19, VAR_21);
   } else
    VAR_22 = VAR_0;
  } else if (VAR_23->ioc_level == VAR_6) {
   if (VAR_23->ioc_mask & VAR_8) {
    VAR_24 = VAR_23->ioc_flags & VAR_8;
    if ((VAR_20 = VAR_18->sd_share) == ((void*)0)) {
     VAR_22 = VAR_3;
     goto out;
    }
    VAR_22 = FUNC_7(VAR_20, VAR_21);
    if (VAR_22)
     break;
    if (VAR_24 && (VAR_20->obj.co_flags & VAR_8) == 0) {
     VAR_20->obj.co_flags |= VAR_8;
     FUNC_9(VAR_20);
    } else if (!VAR_24 && (VAR_20->obj.co_flags & VAR_8)) {
     VAR_20->obj.co_flags &= ~VAR_8;
     FUNC_10(VAR_20, VAR_21);
    }
    FUNC_8(VAR_20, VAR_21);
   } else
    VAR_22 = VAR_0;
   break;
  } else
   VAR_22 = VAR_0;
  break;
     }
     case 135:
  if (VAR_18->sd_vc || VAR_18->sd_share) {
   VAR_22 = VAR_1;
   goto out;
  }
  VAR_19 = ((void*)0);
  VAR_20 = ((void*)0);
  VAR_22 = FUNC_12((struct smbioc_lookup*)VAR_15, VAR_21, &VAR_19, &VAR_20);
  if (VAR_22)
   break;
  if (VAR_19) {
   VAR_18->sd_vc = VAR_19;
   FUNC_21(VAR_19);
   VAR_18->sd_level = VAR_7;
  }
  if (VAR_20) {
   VAR_18->sd_share = VAR_20;
   FUNC_11(VAR_20);
   VAR_18->sd_level = VAR_6;
  }
  break;
     case 132: case 128: {
  struct smbioc_rw *VAR_25 = (struct smbioc_rw*)VAR_15;
  struct uio VAR_26;
  struct iovec VAR_27;

  if ((VAR_20 = VAR_18->sd_share) == ((void*)0)) {
   VAR_22 = VAR_3;
   goto out;
   }
  VAR_27.iov_base = VAR_25->ioc_base;
  VAR_27.iov_len = VAR_25->ioc_cnt;
  VAR_26.uio_iov = &VAR_27;
  VAR_26.uio_iovcnt = 1;
  VAR_26.uio_offset = VAR_25->ioc_offset;
  VAR_26.uio_resid = VAR_25->ioc_cnt;
  VAR_26.uio_segflg = VAR_11;
  VAR_26.uio_rw = (VAR_14 == 132) ? VAR_10 : VAR_12;
  VAR_26.uio_td = VAR_17;
  if (VAR_14 == 132)
   VAR_22 = FUNC_6(VAR_20, VAR_25->ioc_fh, &VAR_26, VAR_21);
  else
   VAR_22 = FUNC_22(VAR_20, VAR_25->ioc_fh, &VAR_26, VAR_21);
  VAR_25->ioc_cnt -= VAR_26.uio_resid;
  break;
     }
     default:
  VAR_22 = VAR_2;
 }
out:
 FUNC_3(VAR_21, VAR_4);
 FUNC_1();
 return VAR_22;
}
