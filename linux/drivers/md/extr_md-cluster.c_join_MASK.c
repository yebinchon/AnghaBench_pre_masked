
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cluster_name; } ;
struct mddev {struct md_cluster_info* cluster_info; TYPE_1__ bitmap_info; int uuid; } ;
struct md_cluster_info {int slot_number; scalar_t__ lockspace; void* bitmap_lockres; void* resync_lockres; void* no_new_dev_lockres; void* ack_lockres; void* token_lockres; void* message_lockres; int recv_thread; int recovery_thread; int state; int completion; struct mddev* mddev; int recv_mutex; int wait; int suspend_lock; int suspend_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (char*,int ,int ,int ,int *,struct mddev*,int*,scalar_t__*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct md_cluster_info*) ;
 struct md_cluster_info* FUNC_8 (int,int ) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (struct mddev*,char*,int *,int) ;
 int VAR_13 ;
 int FUNC_11 (int ,struct mddev*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,char*,int) ;
 int VAR_14 ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (char*,int,char*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char*,char*,int ) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct mddev *VAR_15, int VAR_16)
{
 struct md_cluster_info *VAR_17;
 int VAR_18, VAR_19;
 char VAR_20[64];

 VAR_17 = FUNC_8(sizeof(struct md_cluster_info), VAR_8);
 if (!VAR_17)
  return -VAR_6;

 FUNC_0(&VAR_17->suspend_list);
 FUNC_19(&VAR_17->suspend_lock);
 FUNC_5(&VAR_17->completion);
 FUNC_17(VAR_10, &VAR_17->state);
 FUNC_6(&VAR_17->wait);
 FUNC_14(&VAR_17->recv_mutex);

 VAR_15->cluster_info = VAR_17;
 VAR_17->mddev = VAR_15;

 FUNC_13(VAR_20, 0, 64);
 FUNC_20(VAR_20, "%pU", VAR_15->uuid);
 VAR_18 = FUNC_2(VAR_20, VAR_15->bitmap_info.cluster_name,
    VAR_3, VAR_9,
    &VAR_13, VAR_15, &VAR_19, &VAR_17->lockspace);
 if (VAR_18)
  goto err;
 FUNC_21(&VAR_17->completion);
 if (VAR_16 < VAR_17->slot_number) {
  FUNC_15("md-cluster: Slot allotted(%d) is greater than available slots(%d).",
   VAR_17->slot_number, VAR_16);
  VAR_18 = -VAR_7;
  goto err;
 }

 VAR_18 = -VAR_6;
 VAR_17->recv_thread = FUNC_11(VAR_14, VAR_15, "cluster_recv");
 if (!VAR_17->recv_thread) {
  FUNC_15("md-cluster: cannot allocate memory for recv_thread!\n");
  goto err;
 }
 VAR_17->message_lockres = FUNC_10(VAR_15, "message", ((void*)0), 1);
 if (!VAR_17->message_lockres)
  goto err;
 VAR_17->token_lockres = FUNC_10(VAR_15, "token", ((void*)0), 0);
 if (!VAR_17->token_lockres)
  goto err;
 VAR_17->no_new_dev_lockres = FUNC_10(VAR_15, "no-new-dev", ((void*)0), 0);
 if (!VAR_17->no_new_dev_lockres)
  goto err;

 VAR_18 = FUNC_1(VAR_17->token_lockres, VAR_1);
 if (VAR_18) {
  VAR_18 = -VAR_4;
  FUNC_15("md-cluster: can't join cluster to avoid lock issue\n");
  goto err;
 }
 VAR_17->ack_lockres = FUNC_10(VAR_15, "ack", VAR_12, 0);
 if (!VAR_17->ack_lockres) {
  VAR_18 = -VAR_6;
  goto err;
 }

 if (FUNC_1(VAR_17->ack_lockres, VAR_0))
  FUNC_15("md-cluster: failed to get a sync CR lock on ACK!(%d)\n",
    VAR_18);
 FUNC_4(VAR_17->token_lockres);

 if (FUNC_1(VAR_17->no_new_dev_lockres, VAR_0))
  FUNC_15("md-cluster: failed to get a sync CR lock on no-new-dev!(%d)\n", VAR_18);


 FUNC_16("md-cluster: Joined cluster %s slot %d\n", VAR_20, VAR_17->slot_number);
 FUNC_18(VAR_20, 64, "bitmap%04d", VAR_17->slot_number - 1);
 VAR_17->bitmap_lockres = FUNC_10(VAR_15, VAR_20, ((void*)0), 1);
 if (!VAR_17->bitmap_lockres) {
  VAR_18 = -VAR_6;
  goto err;
 }
 if (FUNC_1(VAR_17->bitmap_lockres, VAR_2)) {
  FUNC_15("Failed to get bitmap lock\n");
  VAR_18 = -VAR_5;
  goto err;
 }

 VAR_17->resync_lockres = FUNC_10(VAR_15, "resync", ((void*)0), 0);
 if (!VAR_17->resync_lockres) {
  VAR_18 = -VAR_6;
  goto err;
 }

 return 0;
err:
 FUNC_17(VAR_11, &VAR_17->state);
 FUNC_12(&VAR_17->recovery_thread);
 FUNC_12(&VAR_17->recv_thread);
 FUNC_9(VAR_17->message_lockres);
 FUNC_9(VAR_17->token_lockres);
 FUNC_9(VAR_17->ack_lockres);
 FUNC_9(VAR_17->no_new_dev_lockres);
 FUNC_9(VAR_17->resync_lockres);
 FUNC_9(VAR_17->bitmap_lockres);
 if (VAR_17->lockspace)
  FUNC_3(VAR_17->lockspace, 2);
 VAR_15->cluster_info = ((void*)0);
 FUNC_7(VAR_17);
 return VAR_18;
}
