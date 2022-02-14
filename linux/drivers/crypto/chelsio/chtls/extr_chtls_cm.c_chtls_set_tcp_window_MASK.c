
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int speed; } ;
struct port_info {TYPE_1__ link_cfg; } ;
struct net_device {int dummy; } ;
struct chtls_sock {int rcv_win; int snd_win; struct net_device* egress_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct chtls_sock *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->egress_dev;
 struct port_info *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6;
 u8 VAR_7;

 VAR_6 = VAR_5->link_cfg.speed;
 VAR_7 = VAR_6 / VAR_2;

 VAR_3->rcv_win = (256 * 1024);
 if (VAR_7)
  VAR_3->rcv_win *= VAR_7;

 VAR_3->snd_win = (256 * 1024);
 if (VAR_7)
  VAR_3->snd_win *= VAR_7;
}
