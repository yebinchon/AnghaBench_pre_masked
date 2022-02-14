
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int mtu; } ;
struct in_device {scalar_t__ ifa_list; } ;
struct ib_port_attr {int phys_state; int state; int active_mtu; int max_mtu; } ;
struct TYPE_2__ {int (* query_port ) (struct ib_device*,int ,struct ib_port_attr*) ;} ;
struct ib_device {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct in_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ib_port_attr*,int ,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct ib_device*,int ,struct ib_port_attr*) ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_8,
      u8 VAR_9,
      struct ib_port_attr *VAR_10)
{
 struct in_device *VAR_11;
 struct net_device *VAR_12;
 int VAR_13;

 FUNC_4(VAR_10, 0, sizeof(*VAR_10));

 VAR_12 = FUNC_2(VAR_8, VAR_9);
 if (!VAR_12)
  return -VAR_0;

 VAR_10->max_mtu = VAR_1;
 VAR_10->active_mtu = FUNC_3(VAR_12->mtu);

 if (!FUNC_5(VAR_12)) {
  VAR_10->state = VAR_3;
  VAR_10->phys_state = VAR_5;
 } else {
  FUNC_6();
  VAR_11 = FUNC_0(VAR_12);

  if (VAR_11 && VAR_11->ifa_list) {
   VAR_10->state = VAR_2;
   VAR_10->phys_state = VAR_6;
  } else {
   VAR_10->state = VAR_4;
   VAR_10->phys_state =
    VAR_7;
  }

  FUNC_7();
 }

 FUNC_1(VAR_12);
 VAR_13 = VAR_8->ops.query_port(VAR_8, VAR_9, VAR_10);
 if (VAR_13)
  return VAR_13;

 return 0;
}
