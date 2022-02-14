
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_sock {int tx_lock; } ;
struct nbd_request {int type; int magic; } ;
struct nbd_device {int disk; struct nbd_config* config; } ;
struct nbd_config {int num_connections; struct nbd_sock** socks; } ;
struct kvec {int iov_len; struct nbd_request* iov_base; } ;
struct iov_iter {int dummy; } ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iov_iter*,int ,struct kvec*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nbd_device*,int,int,struct iov_iter*,int ,int *) ;

__attribute__((used)) static void FUNC_7(struct nbd_device *VAR_3)
{
 struct nbd_config *VAR_4 = VAR_3->config;
 struct nbd_request VAR_5 = {
  .magic = FUNC_2(VAR_1),
  .type = FUNC_2(VAR_0),
 };
 struct kvec VAR_6 = {.iov_base = &VAR_5, .iov_len = sizeof(VAR_5)};
 struct iov_iter VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_connections; VAR_8++) {
  struct nbd_sock *VAR_10 = VAR_4->socks[VAR_8];

  FUNC_3(&VAR_7, VAR_2, &VAR_6, 1, sizeof(VAR_5));
  FUNC_4(&VAR_10->tx_lock);
  VAR_9 = FUNC_6(VAR_3, VAR_8, 1, &VAR_7, 0, ((void*)0));
  if (VAR_9 <= 0)
   FUNC_0(FUNC_1(VAR_3->disk),
    "Send disconnect failed %d\n", VAR_9);
  FUNC_5(&VAR_10->tx_lock);
 }
}
