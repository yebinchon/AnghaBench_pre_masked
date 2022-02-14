
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int i; char* s; struct switch_port_link* link; TYPE_1__* ports; } ;
struct switch_val {int len; int port_vlan; TYPE_2__ value; } ;
struct switch_port_link {int eee; int rx_flow; int tx_flow; int duplex; int speed; int aneg; int link; } ;
struct switch_attr {int type; } ;
struct TYPE_3__ {int id; int flags; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(const struct switch_attr *VAR_3, const struct switch_val *VAR_4)
{
 struct switch_port_link *VAR_5;
 int VAR_6;

 switch (VAR_3->type) {
 case 131:
  FUNC_0("%d", VAR_4->value.i);
  break;
 case 128:
  FUNC_0("%s", VAR_4->value.s);
  break;
 case 129:
  for(VAR_6 = 0; VAR_6 < VAR_4->len; VAR_6++) {
   FUNC_0("%d%s ",
    VAR_4->value.ports[VAR_6].id,
    (VAR_4->value.ports[VAR_6].flags &
     VAR_2) ? "t" : "");
  }
  break;
 case 130:
  VAR_5 = VAR_4->value.link;
  if (VAR_5->link)
   FUNC_0("port:%d link:up speed:%s %s-duplex %s%s%s%s%s",
    VAR_4->port_vlan,
    FUNC_1(VAR_5->speed),
    VAR_5->duplex ? "full" : "half",
    VAR_5->tx_flow ? "txflow " : "",
    VAR_5->rx_flow ? "rxflow " : "",
    VAR_5->eee & VAR_1 ? "eee100 " : "",
    VAR_5->eee & VAR_0 ? "eee1000 " : "",
    VAR_5->aneg ? "auto" : "");
  else
   FUNC_0("port:%d link:down", VAR_4->port_vlan);
  break;
 default:
  FUNC_0("?unknown-type?");
 }
}
