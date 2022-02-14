
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_sock {int tx_lock; } ;
struct nbd_device {int disk; struct nbd_config* config; } ;
struct nbd_config {int num_connections; struct nbd_sock** socks; int runtime_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nbd_device*,struct nbd_sock*,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct nbd_device *VAR_1)
{
 struct nbd_config *VAR_2 = VAR_1->config;
 int VAR_3;

 if (VAR_2->num_connections == 0)
  return;
 if (FUNC_5(VAR_0, &VAR_2->runtime_flags))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_connections; VAR_3++) {
  struct nbd_sock *VAR_4 = VAR_2->socks[VAR_3];
  FUNC_2(&VAR_4->tx_lock);
  FUNC_4(VAR_1, VAR_4, 0);
  FUNC_3(&VAR_4->tx_lock);
 }
 FUNC_0(FUNC_1(VAR_1->disk), "shutting down sockets\n");
}
