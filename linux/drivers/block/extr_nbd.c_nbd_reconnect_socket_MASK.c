
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* sk; } ;
struct recv_thread_args {int index; int work; struct nbd_device* nbd; } ;
struct nbd_sock {int dead; int fallback_index; int tx_lock; int cookie; struct socket* sock; } ;
struct TYPE_3__ {scalar_t__ timeout; } ;
struct nbd_device {int recv_workq; int config_refs; TYPE_1__ tag_set; struct nbd_config* config; } ;
struct nbd_config {int num_connections; int conn_wait; int live_connections; int runtime_flags; int recv_threads; struct nbd_sock** socks; } ;
struct TYPE_4__ {scalar_t__ sk_sndtimeo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct recv_thread_args*) ;
 struct recv_thread_args* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct socket* FUNC_7 (struct nbd_device*,unsigned long,int*) ;
 int FUNC_8 (int ,int *) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct socket*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct nbd_device *VAR_5, unsigned long VAR_6)
{
 struct nbd_config *VAR_7 = VAR_5->config;
 struct socket *VAR_8, *VAR_9;
 struct recv_thread_args *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_8 = FUNC_7(VAR_5, VAR_6, &VAR_12);
 if (!VAR_8)
  return VAR_12;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_11(VAR_8);
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->num_connections; VAR_11++) {
  struct nbd_sock *VAR_13 = VAR_7->socks[VAR_11];

  if (!VAR_13->dead)
   continue;

  FUNC_5(&VAR_13->tx_lock);
  if (!VAR_13->dead) {
   FUNC_6(&VAR_13->tx_lock);
   continue;
  }
  FUNC_10(VAR_8->sk);
  if (VAR_5->tag_set.timeout)
   VAR_8->sk->sk_sndtimeo = VAR_5->tag_set.timeout;
  FUNC_1(&VAR_7->recv_threads);
  FUNC_9(&VAR_5->config_refs);
  VAR_9 = VAR_13->sock;
  VAR_13->fallback_index = -1;
  VAR_13->sock = VAR_8;
  VAR_13->dead = 0;
  FUNC_0(&VAR_10->work, VAR_4);
  VAR_10->index = VAR_11;
  VAR_10->nbd = VAR_5;
  VAR_13->cookie++;
  FUNC_6(&VAR_13->tx_lock);
  FUNC_11(VAR_9);

  FUNC_2(VAR_3, &VAR_7->runtime_flags);




  FUNC_8(VAR_5->recv_workq, &VAR_10->work);

  FUNC_1(&VAR_7->live_connections);
  FUNC_12(&VAR_7->conn_wait);
  return 0;
 }
 FUNC_11(VAR_8);
 FUNC_3(VAR_10);
 return -VAR_1;
}
