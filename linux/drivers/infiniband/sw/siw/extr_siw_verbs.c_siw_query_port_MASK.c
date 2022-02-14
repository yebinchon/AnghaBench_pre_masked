
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct siw_device {scalar_t__ state; TYPE_1__* netdev; } ;
struct ib_port_attr {int active_speed; int active_width; int gid_tbl_len; int max_msg_sz; int pkey_tbl_len; int port_cap_flags; scalar_t__ state; int phys_state; int max_mtu; int active_mtu; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_port_attr*,int ,int) ;
 struct siw_device* FUNC_2 (struct ib_device*) ;

int FUNC_3(struct ib_device *VAR_5, u8 VAR_6,
     struct ib_port_attr *VAR_7)
{
 struct siw_device *VAR_8 = FUNC_2(VAR_5);

 FUNC_1(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->active_mtu = VAR_7->max_mtu;
 VAR_7->active_speed = 2;
 VAR_7->active_width = 2;
 VAR_7->gid_tbl_len = 1;
 VAR_7->max_msg_sz = -1;
 VAR_7->max_mtu = FUNC_0(VAR_8->netdev->mtu);
 VAR_7->phys_state = VAR_8->state == VAR_0 ?
  VAR_4 : VAR_3;
 VAR_7->pkey_tbl_len = 1;
 VAR_7->port_cap_flags = VAR_1 | VAR_2;
 VAR_7->state = VAR_8->state;
 return 0;
}
