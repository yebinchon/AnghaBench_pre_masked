
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct packet_info {int cmd; } ;
struct net_conf {int ping_timeo; } ;
struct TYPE_4__ {int rbuf; } ;
struct drbd_connection {TYPE_2__ data; int net_conf; } ;
struct TYPE_3__ {int sk_rcvtimeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drbd_connection*,int ,struct packet_info*) ;
 unsigned int FUNC_1 (struct drbd_connection*) ;
 int FUNC_2 (struct socket*,int ,unsigned int,int ) ;
 struct net_conf* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct drbd_connection *VAR_2, struct socket *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2);
 struct packet_info VAR_5;
 struct net_conf *VAR_6;
 int VAR_7;

 FUNC_4();
 VAR_6 = FUNC_3(VAR_2->net_conf);
 if (!VAR_6) {
  FUNC_5();
  return -VAR_0;
 }
 VAR_3->sk->sk_rcvtimeo = VAR_6->ping_timeo * 4 * VAR_1 / 10;
 FUNC_5();

 VAR_7 = FUNC_2(VAR_3, VAR_2->data.rbuf, VAR_4, 0);
 if (VAR_7 != VAR_4) {
  if (VAR_7 >= 0)
   VAR_7 = -VAR_0;
  return VAR_7;
 }
 VAR_7 = FUNC_0(VAR_2, VAR_2->data.rbuf, &VAR_5);
 if (VAR_7)
  return VAR_7;
 return VAR_5.cmd;
}
