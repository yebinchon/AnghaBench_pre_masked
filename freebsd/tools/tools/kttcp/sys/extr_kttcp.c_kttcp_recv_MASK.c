
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_offset; void* uio_resid; void* iov_len; int uio_segflg; struct uio* uio_iov; } ;
struct timeval {int dummy; } ;
struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct kttcp_io_args {unsigned long long kio_totalsize; unsigned long long kio_bytesdone; int kio_elapsed; int kio_socket; } ;
struct iovec {scalar_t__ uio_offset; void* uio_resid; void* iov_len; int uio_segflg; struct iovec* uio_iov; } ;
struct file {int f_flag; scalar_t__ f_type; scalar_t__ f_data; } ;
typedef int auio ;
typedef int aiov ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned long long,unsigned long long) ;
 int VAR_5 ;
 int FUNC_1 (struct uio*,int) ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int ,struct file**) ;
 int FUNC_4 (struct timeval*) ;
 void* VAR_6 ;
 int FUNC_5 (struct socket*,int *,struct uio*,int *,int *,int *) ;
 int FUNC_6 (struct timeval*,struct timeval*,int *) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_7, struct kttcp_io_args *VAR_8)
{
 struct file *VAR_9;
 int VAR_10;
 struct timeval VAR_11, VAR_12;
 unsigned long long VAR_13 = 0;
 struct uio VAR_14;
 struct iovec VAR_15;

 FUNC_1(&VAR_15, sizeof(VAR_15));
 FUNC_1(&VAR_14, sizeof(VAR_14));
 VAR_14.uio_iov = &VAR_15;
 VAR_14.uio_segflg = VAR_5;

 VAR_10 = FUNC_3(VAR_7, VAR_8->kio_socket, &VAR_9);
 if (VAR_10 != 0)
  return VAR_10;

 if ((VAR_9->f_flag & VAR_4) == 0) {
  FUNC_2(VAR_9, VAR_7);
  return VAR_1;
 }
 if (VAR_9->f_type == VAR_0) {
  VAR_13 = VAR_8->kio_totalsize;
  FUNC_4(&VAR_11);
  do {
   VAR_6 = FUNC_0(VAR_13, (unsigned long long)VAR_6);
   VAR_15.iov_len = VAR_6;
   VAR_14.uio_resid = VAR_6;
   VAR_14.uio_offset = 0;
   VAR_10 = FUNC_5((struct socket *)VAR_9->f_data,
       ((void*)0), &VAR_14, ((void*)0), ((void*)0), ((void*)0));
   VAR_13 -= VAR_14.uio_offset;
  } while (VAR_10 == 0 && VAR_13 > 0 && VAR_14.uio_offset != 0);
  FUNC_4(&VAR_12);
  if (VAR_10 == VAR_3)
   VAR_10 = 0;
 } else
  VAR_10 = VAR_2;
 FUNC_2(VAR_9, VAR_7);
 if (VAR_10 != 0)
  return VAR_10;
 FUNC_6(&VAR_12, &VAR_11, &VAR_8->kio_elapsed);

 VAR_8->kio_bytesdone = VAR_8->kio_totalsize - VAR_13;

 return 0;
}
