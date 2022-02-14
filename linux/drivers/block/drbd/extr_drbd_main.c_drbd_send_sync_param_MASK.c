
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct p_rs_param_95 {int csums_alg; int verify_alg; void* c_max_rate; void* c_fill_target; void* c_delay_target; void* c_plan_ahead; void* resync_rate; } ;
struct p_rs_param_89 {int dummy; } ;
struct p_rs_param {int dummy; } ;
struct net_conf {int csums_alg; int verify_alg; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_3__* device; TYPE_1__* connection; } ;
struct disk_conf {int c_max_rate; int c_fill_target; int c_delay_target; int c_plan_ahead; int resync_rate; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;
struct TYPE_7__ {TYPE_2__* ldev; } ;
struct TYPE_6__ {int disk_conf; } ;
struct TYPE_5__ {int agreed_pro_version; int net_conf; struct drbd_socket data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 struct p_rs_param_95* FUNC_1 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_2 (struct drbd_peer_device*,struct drbd_socket*,int,int,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct drbd_peer_device *VAR_9)
{
 struct drbd_socket *VAR_10;
 struct p_rs_param_95 *VAR_11;
 int VAR_12;
 const int VAR_13 = VAR_9->connection->agreed_pro_version;
 enum drbd_packet VAR_14;
 struct net_conf *VAR_15;
 struct disk_conf *VAR_16;

 VAR_10 = &VAR_9->connection->data;
 VAR_11 = FUNC_1(VAR_9, VAR_10);
 if (!VAR_11)
  return -VAR_5;

 FUNC_7();
 VAR_15 = FUNC_6(VAR_9->connection->net_conf);

 VAR_12 = VAR_13 <= 87 ? sizeof(struct p_rs_param)
  : VAR_13 == 88 ? sizeof(struct p_rs_param)
   + FUNC_10(VAR_15->verify_alg) + 1
  : VAR_13 <= 94 ? sizeof(struct p_rs_param_89)
  : sizeof(struct p_rs_param_95);

 VAR_14 = VAR_13 >= 89 ? VAR_7 : VAR_6;


 FUNC_4(VAR_11->verify_alg, 0, 2 * VAR_8);

 if (FUNC_3(VAR_9->device)) {
  VAR_16 = FUNC_6(VAR_9->device->ldev->disk_conf);
  VAR_11->resync_rate = FUNC_0(VAR_16->resync_rate);
  VAR_11->c_plan_ahead = FUNC_0(VAR_16->c_plan_ahead);
  VAR_11->c_delay_target = FUNC_0(VAR_16->c_delay_target);
  VAR_11->c_fill_target = FUNC_0(VAR_16->c_fill_target);
  VAR_11->c_max_rate = FUNC_0(VAR_16->c_max_rate);
  FUNC_5(VAR_9->device);
 } else {
  VAR_11->resync_rate = FUNC_0(VAR_4);
  VAR_11->c_plan_ahead = FUNC_0(VAR_3);
  VAR_11->c_delay_target = FUNC_0(VAR_0);
  VAR_11->c_fill_target = FUNC_0(VAR_1);
  VAR_11->c_max_rate = FUNC_0(VAR_2);
 }

 if (VAR_13 >= 88)
  FUNC_9(VAR_11->verify_alg, VAR_15->verify_alg);
 if (VAR_13 >= 89)
  FUNC_9(VAR_11->csums_alg, VAR_15->csums_alg);
 FUNC_8();

 return FUNC_2(VAR_9, VAR_10, VAR_14, VAR_12, ((void*)0), 0);
}
