
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_config {int live_connections; int blksize; int conn_wait; int recv_wq; int recv_threads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct nbd_config* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct nbd_config *FUNC_4(void)
{
 struct nbd_config *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct nbd_config), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_0(&VAR_3->recv_threads, 0);
 FUNC_1(&VAR_3->recv_wq);
 FUNC_1(&VAR_3->conn_wait);
 VAR_3->blksize = VAR_1;
 FUNC_0(&VAR_3->live_connections, 0);
 FUNC_3(VAR_2);
 return VAR_3;
}
