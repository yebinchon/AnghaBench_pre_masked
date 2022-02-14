
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct mcast_port {int port_num; TYPE_1__* dev; } ;
struct ib_sa_mcmember_rec {void* join_state; } ;
struct mcast_group {int query; void* leave_state; struct ib_sa_mcmember_rec rec; struct mcast_port* port; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,struct ib_sa_mcmember_rec*,int,int,int ,int ,struct mcast_group*,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct mcast_group *VAR_7, u8 VAR_8)
{
 struct mcast_port *VAR_9 = VAR_7->port;
 struct ib_sa_mcmember_rec VAR_10;
 int VAR_11;

 VAR_10 = VAR_7->rec;
 VAR_10.join_state = VAR_8;
 VAR_7->leave_state = VAR_8;

 VAR_11 = FUNC_0(&VAR_6, VAR_9->dev->device,
           VAR_9->port_num, VAR_4, &VAR_10,
           VAR_2 |
           VAR_3 |
           VAR_1,
           3000, VAR_0, VAR_5,
           VAR_7, &VAR_7->query);
 return (VAR_11 > 0) ? 0 : VAR_11;
}
