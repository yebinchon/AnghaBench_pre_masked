
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_device {struct nbd_config* config; } ;
struct nbd_config {int dead_conn_timeout; int live_connections; int conn_wait; int runtime_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct nbd_device *VAR_1)
{
 struct nbd_config *VAR_2 = VAR_1->config;
 if (!VAR_2->dead_conn_timeout)
  return 0;
 if (FUNC_1(VAR_0, &VAR_2->runtime_flags))
  return 0;
 return FUNC_2(VAR_2->conn_wait,
      FUNC_0(&VAR_2->live_connections) > 0,
      VAR_2->dead_conn_timeout) > 0;
}
