
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct uio {int uio_iovcnt; int uio_resid; struct thread* uio_td; scalar_t__ uio_offset; int uio_rw; int uio_segflg; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct socket {int so_vnet; } ;
struct sockaddr {int dummy; } ;
struct nbpcb {struct socket* nbp_tso; } ;
struct mbuf {int dummy; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
typedef int len ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct socket*,struct sockaddr**,struct uio*,struct mbuf**,struct mbuf**,int*) ;

__attribute__((used)) static int
FUNC_6(struct nbpcb *VAR_5, int *VAR_6,
 u_int8_t *VAR_7, int VAR_8, struct thread *VAR_9)
{
 struct socket *VAR_10 = VAR_5->nbp_tso;
 struct uio VAR_11;
 struct iovec VAR_12;
 u_int32_t VAR_13;
 int VAR_14;

 VAR_12.iov_base = (caddr_t)&VAR_13;
 VAR_12.iov_len = sizeof(VAR_13);
 VAR_11.uio_iov = &VAR_12;
 VAR_11.uio_iovcnt = 1;
 VAR_11.uio_segflg = VAR_4;
 VAR_11.uio_rw = VAR_3;
 VAR_11.uio_offset = 0;
 VAR_11.uio_resid = sizeof(VAR_13);
 VAR_11.uio_td = VAR_9;
 FUNC_1(VAR_10->so_vnet);
 VAR_14 = FUNC_5(VAR_10, (struct sockaddr **)((void*)0), &VAR_11,
     (struct mbuf **)((void*)0), (struct mbuf **)((void*)0), &VAR_8);
 FUNC_0();
 if (VAR_14)
  return VAR_14;
 if (VAR_11.uio_resid > 0) {
  FUNC_3("short reply\n");
  return VAR_1;
 }
 VAR_13 = FUNC_4(VAR_13);
 *VAR_7 = (VAR_13 >> 24) & 0xFF;
 VAR_13 &= 0x1ffff;
 if (VAR_13 > VAR_2) {
  FUNC_2("packet too long (%d)\n", VAR_13);
  return VAR_0;
 }
 *VAR_6 = VAR_13;
 return 0;
}
