
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_conf {int on_congestion; scalar_t__ cong_fill; scalar_t__ cong_extents; } ;
struct TYPE_4__ {scalar_t__ conn; } ;
struct drbd_device {TYPE_2__* act_log; int ap_in_flight; TYPE_1__ state; } ;
struct drbd_connection {int agreed_pro_version; int net_conf; } ;
typedef enum drbd_on_congestion { ____Placeholder_drbd_on_congestion } drbd_on_congestion ;
struct TYPE_6__ {struct drbd_connection* connection; } ;
struct TYPE_5__ {scalar_t__ used; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drbd_device*,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (struct drbd_device*,char*) ;
 TYPE_3__* FUNC_4 (struct drbd_device*) ;
 int FUNC_5 (struct drbd_device*,int ) ;
 int FUNC_6 (struct drbd_device*) ;
 struct net_conf* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct drbd_connection*) ;

__attribute__((used)) static void FUNC_11(struct drbd_device *VAR_6)
{
 struct drbd_connection *VAR_7 = FUNC_4(VAR_6)->connection;
 struct net_conf *VAR_8;
 bool VAR_9 = 0;
 enum drbd_on_congestion VAR_10;

 FUNC_8();
 VAR_8 = FUNC_7(VAR_7->net_conf);
 VAR_10 = VAR_8 ? VAR_8->on_congestion : VAR_3;
 FUNC_9();
 if (VAR_10 == VAR_3 ||
     VAR_7->agreed_pro_version < 96)
  return;

 if (VAR_10 == VAR_4 && VAR_6->state.conn == VAR_0)
  return;





 if (!FUNC_5(VAR_6, VAR_2))
  return;

 if (VAR_8->cong_fill &&
     FUNC_2(&VAR_6->ap_in_flight) >= VAR_8->cong_fill) {
  FUNC_3(VAR_6, "Congestion-fill threshold reached\n");
  VAR_9 = 1;
 }

 if (VAR_6->act_log->used >= VAR_8->cong_extents) {
  FUNC_3(VAR_6, "Congestion-extents threshold reached\n");
  VAR_9 = 1;
 }

 if (VAR_9) {

  FUNC_10(FUNC_4(VAR_6)->connection);

  if (VAR_10 == VAR_4)
   FUNC_1(FUNC_0(VAR_6, VAR_5, VAR_0), 0, ((void*)0));
  else
   FUNC_1(FUNC_0(VAR_6, VAR_5, VAR_1), 0, ((void*)0));
 }
 FUNC_6(VAR_6);
}
