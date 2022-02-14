
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int mtu; } ;
struct ib_port_attr {int port_cap_flags; int pkey_tbl_len; int active_speed; scalar_t__ state; int phys_state; int max_mtu; int active_mtu; int active_width; int max_msg_sz; int gid_tbl_len; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int lock; struct net_device** netdevs; } ;
struct TYPE_3__ {int * gid_table_len; int max_mtu; } ;
struct hns_roce_dev {TYPE_2__ iboe; TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct hns_roce_dev* FUNC_8 (struct ib_device*) ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_12, u8 VAR_13,
          struct ib_port_attr *VAR_14)
{
 struct hns_roce_dev *VAR_15 = FUNC_8(VAR_12);
 struct device *VAR_16 = VAR_15->dev;
 struct net_device *VAR_17;
 unsigned long VAR_18;
 enum ib_mtu VAR_19;
 u8 VAR_20;

 FUNC_0(VAR_13 > 0);
 VAR_20 = VAR_13 - 1;



 VAR_14->max_mtu = VAR_15->caps.max_mtu;
 VAR_14->gid_tbl_len = VAR_15->caps.gid_table_len[VAR_20];
 VAR_14->port_cap_flags = VAR_5 | VAR_9 |
    VAR_10 |
    VAR_4;
 VAR_14->max_msg_sz = VAR_1;
 VAR_14->pkey_tbl_len = 1;
 VAR_14->active_width = VAR_11;
 VAR_14->active_speed = 1;

 FUNC_6(&VAR_15->iboe.lock, VAR_18);

 VAR_17 = VAR_15->iboe.netdevs[VAR_20];
 if (!VAR_17) {
  FUNC_7(&VAR_15->iboe.lock, VAR_18);
  FUNC_1(VAR_16, "find netdev %d failed!\r\n", VAR_20);
  return -VAR_0;
 }

 VAR_19 = FUNC_2(VAR_17->mtu);
 VAR_14->active_mtu = VAR_19 ? FUNC_3(VAR_14->max_mtu, VAR_19) : VAR_2;
 VAR_14->state = (FUNC_5(VAR_17) && FUNC_4(VAR_17)) ?
   VAR_3 : VAR_6;
 VAR_14->phys_state = (VAR_14->state == VAR_3) ?
        VAR_8 :
        VAR_7;

 FUNC_7(&VAR_15->iboe.lock, VAR_18);

 return 0;
}
