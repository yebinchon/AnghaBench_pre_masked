
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_peer_device {TYPE_1__* connection; struct drbd_device* device; } ;
struct drbd_device {int request_timer; int ap_in_flight; int flags; int own_state_mutex; int * state_mutex; scalar_t__ peer_seq; int packet_seq; } ;
struct TYPE_2__ {int agreed_pro_version; int cstate_mutex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct drbd_peer_device*) ;
 int FUNC_3 (struct drbd_peer_device*,int ,int ) ;
 int FUNC_4 (struct drbd_peer_device*) ;
 int FUNC_5 (struct drbd_peer_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,scalar_t__) ;

int FUNC_7(struct drbd_peer_device *VAR_4)
{
 struct drbd_device *VAR_5 = VAR_4->device;
 int VAR_6;

 FUNC_0(&VAR_5->packet_seq, 0);
 VAR_5->peer_seq = 0;

 VAR_5->state_mutex = VAR_4->connection->agreed_pro_version < 100 ?
  &VAR_4->connection->cstate_mutex :
  &VAR_5->own_state_mutex;

 VAR_6 = FUNC_4(VAR_4);
 if (!VAR_6)
  VAR_6 = FUNC_3(VAR_4, 0, 0);
 if (!VAR_6)
  VAR_6 = FUNC_5(VAR_4);
 if (!VAR_6)
  VAR_6 = FUNC_2(VAR_4);
 FUNC_1(VAR_2, &VAR_5->flags);
 FUNC_1(VAR_1, &VAR_5->flags);
 FUNC_0(&VAR_5->ap_in_flight, 0);
 FUNC_6(&VAR_5->request_timer, VAR_3 + VAR_0);
 return VAR_6;
}
