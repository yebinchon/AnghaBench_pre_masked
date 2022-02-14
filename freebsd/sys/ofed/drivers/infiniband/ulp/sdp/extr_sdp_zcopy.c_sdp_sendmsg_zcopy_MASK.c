
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_srcavail_state {int abort_flags; } ;
struct socket {int dummy; } ;
struct sdp_sock {int socket; scalar_t__ rx_sa; } ;
struct kiocb {int dummy; } ;
struct iovec {size_t iov_len; scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 long VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct socket*,struct tx_srcavail_state*,struct iovec*,long*) ;
 int FUNC_2 (struct tx_srcavail_state*) ;
 struct tx_srcavail_state* FUNC_3 (int,int ) ;
 int FUNC_4 (struct socket*,char*,...) ;
 int FUNC_5 (struct socket*,int *,char*,...) ;
 struct sdp_sock* FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*,char*) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct tx_srcavail_state*) ;

int FUNC_11(struct kiocb *VAR_8, struct socket *VAR_9, struct iovec *VAR_10)
{
 struct sdp_sock *VAR_11 = FUNC_6(VAR_9);
 int VAR_12 = 0;
 long VAR_13;
 struct tx_srcavail_state *VAR_14;
 int VAR_15;
 size_t VAR_16 = 0;
 int VAR_17 = 0;

 FUNC_4(VAR_9, "Sending iov: %p, iov_len: 0x%lx\n",
   VAR_10->iov_base, VAR_10->iov_len);
 FUNC_5(VAR_9, ((void*)0), "sdp_sendmsg_zcopy start");
 if (VAR_11->rx_sa) {
  FUNC_4(VAR_9, "Deadlock prevent: crossing SrcAvail\n");
  return 0;
 }

 FUNC_8(VAR_11->socket, VAR_5);

 FUNC_0(VAR_7);

 VAR_13 = VAR_4 ;


 VAR_15 = (unsigned long)VAR_10->iov_base & (VAR_3 - 1);

 VAR_14 = FUNC_3(sizeof(struct tx_srcavail_state), VAR_2);
 if (!VAR_14) {
  FUNC_7(VAR_9, "Error allocating zcopy context\n");
  VAR_12 = -VAR_0;
  goto err_alloc_tx_sa;
 }

 VAR_16 = VAR_10->iov_len;
 do {
  FUNC_10(VAR_14);

  VAR_12 = FUNC_1(VAR_9, VAR_14, VAR_10, &VAR_13);

  if (VAR_10->iov_len && VAR_10->iov_len < VAR_6) {
   FUNC_4(VAR_9, "0x%lx bytes left, switching to bcopy\n",
    VAR_10->iov_len);
   break;
  }
 } while (!VAR_12 && VAR_10->iov_len > 0 && !VAR_14->abort_flags);

 FUNC_2(VAR_14);
err_alloc_tx_sa:
 VAR_17 = VAR_16 - VAR_10->iov_len;

 FUNC_5(VAR_9, ((void*)0), "sdp_sendmsg_zcopy end rc: %d copied: %d", VAR_12, VAR_17);

 FUNC_9(VAR_11->socket, VAR_5);

 if (VAR_12 < 0 && VAR_12 != -VAR_0 && VAR_12 != -VAR_1)
  return VAR_12;

 return VAR_17;
}
