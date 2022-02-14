
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct res_opts {int dummy; } ;
struct drbd_resource {int resources; int connections; int kref; } ;
struct drbd_epoch {int dummy; } ;
struct TYPE_7__ {int mutex; } ;
struct TYPE_6__ {struct drbd_connection* connection; } ;
struct TYPE_5__ {int seen_any_write_yet; scalar_t__ current_epoch_writes; scalar_t__ current_epoch_nr; } ;
struct drbd_connection {int epochs; TYPE_3__ data; TYPE_3__ meta; struct drbd_connection* current_epoch; int connections; struct drbd_resource* resource; int kref; TYPE_2__ ack_receiver; TYPE_2__ worker; TYPE_2__ receiver; int sender_work; int peer_devices; int ping_wait; int cstate_mutex; int cstate; TYPE_1__ send; int epoch_lock; int list; int transfer_log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 struct drbd_resource* FUNC_2 (char const*) ;
 int FUNC_3 (struct drbd_connection*) ;
 int FUNC_4 (struct drbd_resource*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (struct drbd_resource*,TYPE_2__*,int ,char*) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct drbd_connection*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct drbd_resource*,struct res_opts*) ;
 int FUNC_18 (int *) ;

struct drbd_connection *FUNC_19(const char *VAR_5, struct res_opts *VAR_6)
{
 struct drbd_resource *VAR_7;
 struct drbd_connection *VAR_8;

 VAR_8 = FUNC_13(sizeof(struct drbd_connection), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 if (FUNC_1(&VAR_8->data))
  goto fail;
 if (FUNC_1(&VAR_8->meta))
  goto fail;

 VAR_8->current_epoch = FUNC_13(sizeof(struct drbd_epoch), VAR_1);
 if (!VAR_8->current_epoch)
  goto fail;

 FUNC_0(&VAR_8->transfer_log);

 FUNC_0(&VAR_8->current_epoch->list);
 VAR_8->epochs = 1;
 FUNC_18(&VAR_8->epoch_lock);

 VAR_8->send.seen_any_write_yet = 0;
 VAR_8->send.current_epoch_nr = 0;
 VAR_8->send.current_epoch_writes = 0;

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7)
  goto fail;

 VAR_8->cstate = VAR_0;
 FUNC_16(&VAR_8->cstate_mutex);
 FUNC_9(&VAR_8->ping_wait);
 FUNC_8(&VAR_8->peer_devices);

 FUNC_6(&VAR_8->sender_work);
 FUNC_16(&VAR_8->data.mutex);
 FUNC_16(&VAR_8->meta.mutex);

 FUNC_7(VAR_7, &VAR_8->receiver, VAR_3, "receiver");
 VAR_8->receiver.connection = VAR_8;
 FUNC_7(VAR_7, &VAR_8->worker, VAR_4, "worker");
 VAR_8->worker.connection = VAR_8;
 FUNC_7(VAR_7, &VAR_8->ack_receiver, VAR_2, "ack_recv");
 VAR_8->ack_receiver.connection = VAR_8;

 FUNC_12(&VAR_8->kref);

 VAR_8->resource = VAR_7;

 if (FUNC_17(VAR_7, VAR_6))
  goto fail_resource;

 FUNC_11(&VAR_7->kref);
 FUNC_14(&VAR_8->connections, &VAR_7->connections);
 FUNC_3(VAR_8);
 return VAR_8;

fail_resource:
 FUNC_15(&VAR_7->resources);
 FUNC_4(VAR_7);
fail:
 FUNC_10(VAR_8->current_epoch);
 FUNC_5(&VAR_8->meta);
 FUNC_5(&VAR_8->data);
 FUNC_10(VAR_8);
 return ((void*)0);
}
