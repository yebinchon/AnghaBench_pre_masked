
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msghdr {int msg_iovlen; scalar_t__ msg_flags; void* msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {int iov_len; int iov_base; } ;
struct TYPE_3__ {int buf_size; int buf_send; int buf_recv; } ;
struct TYPE_4__ {TYPE_1__ ipc_msg; scalar_t__ server_flag; scalar_t__ send_data_flag; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct msghdr *VAR_1, struct iovec *VAR_2, void *VAR_3)
{
 VAR_1->msg_name = ((void*)0);
 VAR_1->msg_namelen = 0;
 if (VAR_0.send_data_flag) {
  VAR_2->iov_base = VAR_0.server_flag ?
      VAR_0.ipc_msg.buf_recv : VAR_0.ipc_msg.buf_send;
  VAR_2->iov_len = VAR_0.ipc_msg.buf_size;
  VAR_1->msg_iov = VAR_2;
  VAR_1->msg_iovlen = 1;
 } else {
  VAR_1->msg_iov = ((void*)0);
  VAR_1->msg_iovlen = 0;
 }
 VAR_1->msg_control = VAR_3;
 VAR_1->msg_flags = 0;
}
