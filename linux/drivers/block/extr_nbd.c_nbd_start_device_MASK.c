
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct recv_thread_args {int index; int work; struct nbd_device* nbd; } ;
struct TYPE_8__ {scalar_t__ timeout; } ;
struct nbd_device {int recv_workq; int config_refs; TYPE_4__ tag_set; int disk; scalar_t__ task_recv; int index; struct nbd_config* config; } ;
struct nbd_config {int num_connections; int flags; int recv_threads; TYPE_2__** socks; int runtime_flags; } ;
struct TYPE_7__ {scalar_t__ sk_sndtimeo; } ;
struct TYPE_6__ {TYPE_1__* sock; } ;
struct TYPE_5__ {TYPE_3__* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 struct recv_thread_args* FUNC_7 (int,int ) ;
 int FUNC_8 (struct nbd_device*) ;
 int FUNC_9 (struct nbd_device*) ;
 int FUNC_10 (struct nbd_device*) ;
 int VAR_10 ;
 int FUNC_11 (int ,int *) ;
 int VAR_11 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (struct nbd_device*) ;

__attribute__((used)) static int FUNC_16(struct nbd_device *VAR_12)
{
 struct nbd_config *VAR_13 = VAR_12->config;
 int VAR_14 = VAR_13->num_connections;
 int VAR_15 = 0, VAR_16;

 if (VAR_12->task_recv)
  return -VAR_0;
 if (!VAR_13->socks)
  return -VAR_1;
 if (VAR_14 > 1 &&
     !(VAR_13->flags & VAR_4)) {
  FUNC_4(FUNC_6(VAR_12->disk), "server does not support multiple connections per device.\n");
  return -VAR_1;
 }

 VAR_12->recv_workq = FUNC_1("knbd%d-recv",
       VAR_7 | VAR_6 |
       VAR_8, 0, VAR_12->index);
 if (!VAR_12->recv_workq) {
  FUNC_4(FUNC_6(VAR_12->disk), "Could not allocate knbd recv work queue.\n");
  return -VAR_2;
 }

 FUNC_3(&VAR_12->tag_set, VAR_13->num_connections);
 VAR_12->task_recv = VAR_9;

 FUNC_9(VAR_12);

 VAR_15 = FUNC_5(FUNC_6(VAR_12->disk), &VAR_10);
 if (VAR_15) {
  FUNC_4(FUNC_6(VAR_12->disk), "device_create_file failed!\n");
  return VAR_15;
 }
 FUNC_13(VAR_5, &VAR_13->runtime_flags);

 FUNC_8(VAR_12);
 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  struct recv_thread_args *VAR_17;

  VAR_17 = FUNC_7(sizeof(*VAR_17), VAR_3);
  if (!VAR_17) {
   FUNC_15(VAR_12);
   return -VAR_2;
  }
  FUNC_14(VAR_13->socks[VAR_16]->sock->sk);
  if (VAR_12->tag_set.timeout)
   VAR_13->socks[VAR_16]->sock->sk->sk_sndtimeo =
    VAR_12->tag_set.timeout;
  FUNC_2(&VAR_13->recv_threads);
  FUNC_12(&VAR_12->config_refs);
  FUNC_0(&VAR_17->work, VAR_11);
  VAR_17->nbd = VAR_12;
  VAR_17->index = VAR_16;
  FUNC_11(VAR_12->recv_workq, &VAR_17->work);
 }
 FUNC_10(VAR_12);
 return VAR_15;
}
