
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mcast_port {int port_num; TYPE_2__* dev; } ;
struct TYPE_3__ {int comp_mask; int rec; } ;
struct mcast_member {TYPE_1__ multicast; } ;
struct mcast_group {int query; struct mcast_member* last_join; struct mcast_port* port; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int *,int ,int,int ,int ,struct mcast_group*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct mcast_group *VAR_4, struct mcast_member *VAR_5)
{
 struct mcast_port *VAR_6 = VAR_4->port;
 int VAR_7;

 VAR_4->last_join = VAR_5;
 VAR_7 = FUNC_0(&VAR_3, VAR_6->dev->device,
           VAR_6->port_num, VAR_1,
           &VAR_5->multicast.rec,
           VAR_5->multicast.comp_mask,
           3000, VAR_0, VAR_2, VAR_4,
           &VAR_4->query);
 return (VAR_7 > 0) ? 0 : VAR_7;
}
