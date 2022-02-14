
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int dummy; } ;
struct msghdr {unsigned int msg_flags; int msg_iter; } ;
struct kvec {void* iov_base; size_t iov_len; } ;
struct TYPE_5__ {struct socket* socket; } ;
struct TYPE_4__ {struct socket* socket; } ;
struct drbd_connection {TYPE_2__ meta; int flags; TYPE_1__ data; int net_conf; int ko_count; } ;
struct TYPE_6__ {int ko_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int VAR_9 ;
 int FUNC_2 (struct drbd_connection*,int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (struct drbd_connection*,char*,char*,int) ;
 int FUNC_4 (struct drbd_connection*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,struct kvec*,int,size_t) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct socket*,struct msghdr*) ;
 scalar_t__ FUNC_11 (struct drbd_connection*,struct socket*) ;

int FUNC_12(struct drbd_connection *VAR_11, struct socket *VAR_12,
       void *VAR_13, size_t VAR_14, unsigned VAR_15)
{
 struct kvec VAR_16 = {.iov_base = VAR_13, .iov_len = VAR_14};
 struct msghdr VAR_17 = {.msg_flags = VAR_15 | VAR_6};
 int VAR_18, VAR_19 = 0;

 if (!VAR_12)
  return -VAR_4;



 FUNC_6(&VAR_17.msg_iter, VAR_8, &VAR_16, 1, VAR_14);

 if (VAR_12 == VAR_11->data.socket) {
  FUNC_8();
  VAR_11->ko_count = FUNC_7(VAR_11->net_conf)->ko_count;
  FUNC_9();
  FUNC_4(VAR_11);
 }
 do {
  VAR_18 = FUNC_10(VAR_12, &VAR_17);
  if (VAR_18 == -VAR_3) {
   if (FUNC_11(VAR_11, VAR_12))
    break;
   else
    continue;
  }
  if (VAR_18 == -VAR_5) {
   FUNC_5(VAR_10);
   VAR_18 = 0;
  }
  if (VAR_18 < 0)
   break;
  VAR_19 += VAR_18;
 } while (VAR_19 < VAR_14);

 if (VAR_12 == VAR_11->data.socket)
  FUNC_1(VAR_7, &VAR_11->flags);

 if (VAR_18 <= 0) {
  if (VAR_18 != -VAR_3) {
   FUNC_3(VAR_11, "%s_sendmsg returned %d\n",
     VAR_12 == VAR_11->meta.socket ? "msock" : "sock",
     VAR_18);
   FUNC_2(VAR_11, FUNC_0(VAR_9, VAR_1), VAR_0);
  } else
   FUNC_2(VAR_11, FUNC_0(VAR_9, VAR_2), VAR_0);
 }

 return VAR_19;
}
