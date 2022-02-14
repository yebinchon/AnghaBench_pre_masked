
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* sk; } ;
struct nbd_device {int disk; struct nbd_config* config; } ;
struct nbd_config {TYPE_1__** socks; } ;
struct iov_iter {int dummy; } ;
struct msghdr {int msg_flags; scalar_t__ msg_controllen; int * msg_control; scalar_t__ msg_namelen; int * msg_name; struct iov_iter msg_iter; } ;
struct TYPE_4__ {int sk_allocation; } ;
struct TYPE_3__ {struct socket* sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct msghdr*) ;
 int FUNC_5 (struct socket*,struct msghdr*,int) ;
 int FUNC_6 (struct socket*,struct msghdr*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct nbd_device *VAR_5, int VAR_6, int VAR_7,
       struct iov_iter *VAR_8, int VAR_9, int *VAR_10)
{
 struct nbd_config *VAR_11 = VAR_5->config;
 struct socket *VAR_12 = VAR_11->socks[VAR_6]->sock;
 int VAR_13;
 struct msghdr VAR_14;
 unsigned int VAR_15;

 if (FUNC_7(!VAR_12)) {
  FUNC_0(FUNC_1(VAR_5->disk),
   "Attempted %s on closed socket in sock_xmit\n",
   (VAR_7 ? "send" : "recv"));
  return -VAR_0;
 }

 VAR_14.msg_iter = *VAR_8;

 VAR_15 = FUNC_3();
 do {
  VAR_12->sk->sk_allocation = VAR_2 | VAR_4;
  VAR_14.msg_name = ((void*)0);
  VAR_14.msg_namelen = 0;
  VAR_14.msg_control = ((void*)0);
  VAR_14.msg_controllen = 0;
  VAR_14.msg_flags = VAR_9 | VAR_3;

  if (VAR_7)
   VAR_13 = FUNC_6(VAR_12, &VAR_14);
  else
   VAR_13 = FUNC_5(VAR_12, &VAR_14, VAR_14.msg_flags);

  if (VAR_13 <= 0) {
   if (VAR_13 == 0)
    VAR_13 = -VAR_1;
   break;
  }
  if (VAR_10)
   *VAR_10 += VAR_13;
 } while (FUNC_4(&VAR_14));

 FUNC_2(VAR_15);

 return VAR_13;
}
