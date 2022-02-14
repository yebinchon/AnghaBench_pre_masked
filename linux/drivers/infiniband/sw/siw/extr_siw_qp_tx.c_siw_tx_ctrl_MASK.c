
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_2__ {int ctrl; } ;
struct siw_iwarp_tx {int ctrl_sent; scalar_t__ ctrl_len; TYPE_1__ pkt; } ;
struct msghdr {int msg_flags; } ;
struct kvec {char* iov_base; scalar_t__ iov_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct siw_iwarp_tx *VAR_1, struct socket *VAR_2,
         int VAR_3)
{
 struct msghdr VAR_4 = { .msg_flags = VAR_3 };
 struct kvec VAR_5 = { .iov_base =
        (char *)&VAR_1->pkt.ctrl + VAR_1->ctrl_sent,
       .iov_len = VAR_1->ctrl_len - VAR_1->ctrl_sent };

 int VAR_6 = FUNC_0(VAR_2, &VAR_4, &VAR_5, 1,
    VAR_1->ctrl_len - VAR_1->ctrl_sent);

 if (VAR_6 >= 0) {
  VAR_1->ctrl_sent += VAR_6;

  if (VAR_1->ctrl_sent == VAR_1->ctrl_len)
   VAR_6 = 0;
  else
   VAR_6 = -VAR_0;
 }
 return VAR_6;
}
