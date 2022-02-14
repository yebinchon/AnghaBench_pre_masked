
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct msghdr {scalar_t__ msg_controllen; TYPE_1__* msg_iov; } ;
struct cmsghdr {scalar_t__ cmsg_len; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int send_data_flag; } ;
struct TYPE_3__ {size_t iov_len; } ;


 struct cmsghdr* FUNC_0 (struct msghdr const*) ;
 scalar_t__ FUNC_1 (int,struct msghdr const*,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__,size_t) ;
 scalar_t__ FUNC_5 () ;

int
FUNC_6(int VAR_1, const struct msghdr *VAR_2)
{
 const struct cmsghdr *VAR_3;
 size_t VAR_4;
 ssize_t VAR_5;

 VAR_4 = VAR_2->msg_iov != 0 ? VAR_2->msg_iov->iov_len : 0;
 FUNC_2("send: data size %zu", VAR_4);
 FUNC_2("send: msghdr.msg_controllen %u",
     (u_int)VAR_2->msg_controllen);
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_2("send: cmsghdr.cmsg_len %u",
      (u_int)VAR_3->cmsg_len);

 VAR_5 = FUNC_1(VAR_1, VAR_2, 0);
 if (VAR_5 < 0) {
  FUNC_3("message_send: sendmsg");
  return (-1);
 }
 if ((size_t)VAR_5 != VAR_4) {
  FUNC_4("message_send: sendmsg: sent %zd of %zu bytes",
      VAR_5, VAR_4);
  return (-1);
 }

 if (!VAR_0.send_data_flag)
  if (FUNC_5() < 0)
   return (-1);

 return (0);
}
