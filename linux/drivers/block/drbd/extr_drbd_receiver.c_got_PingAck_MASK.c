
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct packet_info {int dummy; } ;
struct TYPE_7__ {TYPE_2__* socket; } ;
struct drbd_connection {int ping_wait; int flags; TYPE_4__* net_conf; TYPE_3__ meta; } ;
struct TYPE_8__ {int ping_int; } ;
struct TYPE_6__ {TYPE_1__* sk; } ;
struct TYPE_5__ {int sk_rcvtimeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct drbd_connection *VAR_2, struct packet_info *VAR_3)
{

 VAR_2->meta.socket->sk->sk_rcvtimeo = VAR_2->net_conf->ping_int*VAR_1;
 if (!FUNC_0(VAR_0, &VAR_2->flags))
  FUNC_1(&VAR_2->ping_wait);

 return 0;
}
