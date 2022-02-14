
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_conf {long ping_timeo; long ping_int; } ;
struct TYPE_6__ {TYPE_2__* socket; } ;
struct drbd_connection {TYPE_3__ meta; int net_conf; } ;
struct TYPE_5__ {TYPE_1__* sk; } ;
struct TYPE_4__ {long sk_rcvtimeo; } ;


 long VAR_0 ;
 struct net_conf* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct drbd_connection *VAR_1, bool VAR_2)
{
 long VAR_3;
 struct net_conf *VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_1->net_conf);
 VAR_3 = VAR_2 ? VAR_4->ping_timeo : VAR_4->ping_int;
 FUNC_2();

 VAR_3 *= VAR_0;
 if (VAR_2)
  VAR_3 /= 10;

 VAR_1->meta.socket->sk->sk_rcvtimeo = VAR_3;
}
