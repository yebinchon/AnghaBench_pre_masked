
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int timeout; } ;
struct nbd_sock {scalar_t__ cookie; int tx_lock; } ;
struct TYPE_2__ {int timeout; } ;
struct nbd_device {TYPE_1__ tag_set; struct nbd_config* config; int config_refs; } ;
struct nbd_config {int num_connections; int runtime_flags; struct nbd_sock** socks; int live_connections; } ;
struct nbd_cmd {int index; scalar_t__ cookie; int retries; int lock; int status; struct nbd_device* nbd; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct request*) ;
 struct nbd_cmd* FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*,struct request*,int ,unsigned long long,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct nbd_device*) ;
 int FUNC_11 (struct nbd_device*,struct nbd_sock*,int) ;
 int FUNC_12 (struct nbd_cmd*) ;
 int FUNC_13 (struct nbd_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct request*) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct nbd_device*) ;

__attribute__((used)) static enum blk_eh_timer_return FUNC_19(struct request *VAR_6,
       bool VAR_7)
{
 struct nbd_cmd *VAR_8 = FUNC_2(VAR_6);
 struct nbd_device *VAR_9 = VAR_8->nbd;
 struct nbd_config *VAR_10;

 if (!FUNC_8(&VAR_8->lock))
  return VAR_1;

 if (!FUNC_15(&VAR_9->config_refs)) {
  VAR_8->status = VAR_3;
  FUNC_9(&VAR_8->lock);
  goto done;
 }
 VAR_10 = VAR_9->config;

 if (VAR_10->num_connections > 1) {
  FUNC_5(FUNC_13(VAR_9),
        "Connection timed out, retrying (%d/%d alive)\n",
        FUNC_0(&VAR_10->live_connections),
        VAR_10->num_connections);




  if (VAR_10->socks && VAR_10->num_connections > 1) {
   if (VAR_8->index < VAR_10->num_connections) {
    struct nbd_sock *VAR_11 =
     VAR_10->socks[VAR_8->index];
    FUNC_7(&VAR_11->tx_lock);






    if (VAR_8->cookie == VAR_11->cookie)
     FUNC_11(VAR_9, VAR_11, 1);
    FUNC_9(&VAR_11->tx_lock);
   }
   FUNC_9(&VAR_8->lock);
   FUNC_12(VAR_8);
   FUNC_10(VAR_9);
   return VAR_0;
  }
 }

 if (!VAR_9->tag_set.timeout) {




  VAR_8->retries++;
  FUNC_6(FUNC_13(VAR_9), "Possible stuck request %p: control (%s@%llu,%uB). Runtime %u seconds\n",
   VAR_6, FUNC_14(FUNC_16(VAR_6)),
   (unsigned long long)FUNC_4(VAR_6) << 9,
   FUNC_3(VAR_6), (VAR_6->timeout / VAR_4) * VAR_8->retries);

  FUNC_9(&VAR_8->lock);
  FUNC_10(VAR_9);
  return VAR_1;
 }

 FUNC_5(FUNC_13(VAR_9), "Connection timed out\n");
 FUNC_17(VAR_5, &VAR_10->runtime_flags);
 VAR_8->status = VAR_2;
 FUNC_9(&VAR_8->lock);
 FUNC_18(VAR_9);
 FUNC_10(VAR_9);
done:
 FUNC_1(VAR_6);
 return VAR_0;
}
