
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct nbd_sock {int fallback_index; int dead; scalar_t__ cookie; scalar_t__ sent; int * pending; struct socket* sock; int tx_lock; } ;
struct nbd_device {scalar_t__ task_setup; int disk; struct nbd_config* config; } ;
struct nbd_config {int num_connections; int live_connections; struct nbd_sock** socks; int runtime_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 struct nbd_sock** FUNC_3 (struct nbd_sock**,int,int ) ;
 struct nbd_sock* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 struct socket* FUNC_6 (struct nbd_device*,unsigned long,int*) ;
 int FUNC_7 (struct socket*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct nbd_device *VAR_5, unsigned long VAR_6,
     bool VAR_7)
{
 struct nbd_config *VAR_8 = VAR_5->config;
 struct socket *VAR_9;
 struct nbd_sock **VAR_10;
 struct nbd_sock *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_6(VAR_5, VAR_6, &VAR_12);
 if (!VAR_9)
  return VAR_12;

 if (!VAR_7 && !VAR_5->task_setup &&
     !FUNC_8(VAR_3, &VAR_8->runtime_flags))
  VAR_5->task_setup = VAR_4;

 if (!VAR_7 &&
     (VAR_5->task_setup != VAR_4 ||
      FUNC_8(VAR_3, &VAR_8->runtime_flags))) {
  FUNC_1(FUNC_2(VAR_5->disk),
   "Device being setup by another task");
  FUNC_7(VAR_9);
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_8->socks, (VAR_8->num_connections + 1) *
    sizeof(struct nbd_sock *), VAR_2);
 if (!VAR_10) {
  FUNC_7(VAR_9);
  return -VAR_1;
 }
 VAR_11 = FUNC_4(sizeof(struct nbd_sock), VAR_2);
 if (!VAR_11) {
  FUNC_7(VAR_9);
  return -VAR_1;
 }

 VAR_8->socks = VAR_10;

 VAR_11->fallback_index = -1;
 VAR_11->dead = 0;
 FUNC_5(&VAR_11->tx_lock);
 VAR_11->sock = VAR_9;
 VAR_11->pending = ((void*)0);
 VAR_11->sent = 0;
 VAR_11->cookie = 0;
 VAR_10[VAR_8->num_connections++] = VAR_11;
 FUNC_0(&VAR_8->live_connections);

 return 0;
}
