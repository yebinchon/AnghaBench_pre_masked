
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct msghdr {scalar_t__ msg_controllen; TYPE_1__* msg_iov; } ;
struct cmsghdr {scalar_t__ cmsg_len; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {int buf_send; int buf_recv; } ;
struct TYPE_6__ {TYPE_2__ ipc_msg; int send_data_flag; } ;
struct TYPE_4__ {size_t iov_len; } ;


 struct cmsghdr* FUNC_0 (struct msghdr*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,size_t) ;
 scalar_t__ FUNC_2 (int,struct msghdr*,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 () ;

int
FUNC_7(int VAR_2, struct msghdr *VAR_3)
{
 const struct cmsghdr *VAR_4;
 size_t VAR_5;
 ssize_t VAR_6;

 if (!VAR_1.send_data_flag)
  if (FUNC_6() < 0)
   return (-1);

 VAR_5 = VAR_3->msg_iov != ((void*)0) ? VAR_3->msg_iov->iov_len : 0;
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_0);
 if (VAR_6 < 0) {
  FUNC_4("message_recv: recvmsg");
  return (-1);
 }
 if ((size_t)VAR_6 != VAR_5) {
  FUNC_5("message_recv: recvmsg: received %zd of %zu bytes",
      VAR_6, VAR_5);
  return (-1);
 }

 FUNC_3("recv: data size %zd", VAR_6);
 FUNC_3("recv: msghdr.msg_controllen %u",
     (u_int)VAR_3->msg_controllen);
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != ((void*)0))
  FUNC_3("recv: cmsghdr.cmsg_len %u",
      (u_int)VAR_4->cmsg_len);

 if (FUNC_1(VAR_1.ipc_msg.buf_recv, VAR_1.ipc_msg.buf_send, VAR_5) != 0) {
  FUNC_5("message_recv: received message has wrong content");
  return (-1);
 }

 return (0);
}
