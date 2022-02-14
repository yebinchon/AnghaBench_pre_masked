
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
 void* FUNC_0 (unsigned long long,unsigned long long) ;
 int VAR_4 ;
 int FUNC_1 (struct uio*,int) ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int ,struct file**) ;
 int FUNC_4 (struct timeval*) ;
 void* VAR_5 ;
 int FUNC_5 (struct socket*,int *,struct uio*,int *,int *,int ,struct thread*) ;
 int FUNC_6 (struct timeval*,struct timeval*,int *) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_6, struct kttcp_io_args *VAR_7)
{
 struct file *VAR_8;
 int VAR_9;
 struct timeval VAR_10, VAR_11;
 unsigned long long VAR_12 = 0;
 struct uio VAR_13;
 struct iovec VAR_14;

 FUNC_1(&VAR_14, sizeof(VAR_14));
 FUNC_1(&VAR_13, sizeof(VAR_13));
 VAR_13.uio_iov = &VAR_14;
 VAR_13.uio_segflg = VAR_4;

 VAR_9 = FUNC_3(VAR_6, VAR_7->kio_socket, &VAR_8);
 if (VAR_9 != 0)
  return VAR_9;

 if ((VAR_8->f_flag & VAR_3) == 0) {
  FUNC_2(VAR_8, VAR_6);
  return VAR_1;
 }
 if (VAR_8->f_type == VAR_0) {
  VAR_12 = VAR_7->kio_totalsize;
  FUNC_4(&VAR_10);
  do {
   VAR_5 = FUNC_0(VAR_12, (unsigned long long)VAR_5);
   VAR_14.iov_len = VAR_5;
   VAR_13.uio_resid = VAR_5;
   VAR_13.uio_offset = 0;
   VAR_9 = FUNC_5((struct socket *)VAR_8->f_data, ((void*)0),
           &VAR_13, ((void*)0), ((void*)0), 0, VAR_6);
   VAR_12 -= VAR_13.uio_offset;
  } while (VAR_9 == 0 && VAR_12 != 0);
  FUNC_4(&VAR_11);
 } else
  VAR_9 = VAR_2;
 FUNC_2(VAR_8, VAR_6);
 if (VAR_9 != 0)
  return VAR_9;
 FUNC_6(&VAR_11, &VAR_10, &VAR_7->kio_elapsed);

 VAR_7->kio_bytesdone = VAR_7->kio_totalsize - VAR_12;

 return 0;
}
