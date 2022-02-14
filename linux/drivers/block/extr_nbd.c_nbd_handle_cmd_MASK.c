
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nbd_sock {int tx_lock; struct request* pending; scalar_t__ dead; } ;
struct nbd_device {int disk; struct nbd_config* config; int config_refs; } ;
struct nbd_config {int num_connections; struct nbd_sock** socks; } ;
struct nbd_cmd {int status; struct nbd_device* nbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct request* FUNC_0 (struct nbd_cmd*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nbd_device*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nbd_device*) ;
 int FUNC_8 (struct nbd_device*,struct nbd_sock*,int) ;
 int FUNC_9 (struct nbd_cmd*) ;
 int FUNC_10 (struct nbd_device*,struct nbd_cmd*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nbd_device*) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (struct nbd_device*) ;

__attribute__((used)) static int FUNC_15(struct nbd_cmd *VAR_4, int VAR_5)
{
 struct request *VAR_6 = FUNC_0(VAR_4);
 struct nbd_device *VAR_7 = VAR_4->nbd;
 struct nbd_config *VAR_8;
 struct nbd_sock *VAR_9;
 int VAR_10;

 if (!FUNC_11(&VAR_7->config_refs)) {
  FUNC_2(FUNC_3(VAR_7->disk),
        "Socks array is empty\n");
  FUNC_1(VAR_6);
  return -VAR_2;
 }
 VAR_8 = VAR_7->config;

 if (VAR_5 >= VAR_8->num_connections) {
  FUNC_2(FUNC_3(VAR_7->disk),
        "Attempted send on invalid socket\n");
  FUNC_7(VAR_7);
  FUNC_1(VAR_6);
  return -VAR_2;
 }
 VAR_4->status = VAR_0;
again:
 VAR_9 = VAR_8->socks[VAR_5];
 FUNC_5(&VAR_9->tx_lock);
 if (VAR_9->dead) {
  int VAR_11 = VAR_5;
  VAR_5 = FUNC_4(VAR_7, VAR_5);
  FUNC_6(&VAR_9->tx_lock);
  if (VAR_5 < 0) {
   if (FUNC_14(VAR_7)) {
    VAR_5 = VAR_11;
    goto again;
   }






   FUNC_12(VAR_7);
   FUNC_7(VAR_7);
   FUNC_1(VAR_6);
   return -VAR_3;
  }
  goto again;
 }






 FUNC_1(VAR_6);
 if (FUNC_13(VAR_9->pending && VAR_9->pending != VAR_6)) {
  FUNC_9(VAR_4);
  VAR_10 = 0;
  goto out;
 }




 VAR_10 = FUNC_10(VAR_7, VAR_4, VAR_5);
 if (VAR_10 == -VAR_1) {
  FUNC_2(FUNC_3(VAR_7->disk),
        "Request send failed, requeueing\n");
  FUNC_8(VAR_7, VAR_9, 1);
  FUNC_9(VAR_4);
  VAR_10 = 0;
 }
out:
 FUNC_6(&VAR_9->tx_lock);
 FUNC_7(VAR_7);
 return VAR_10;
}
