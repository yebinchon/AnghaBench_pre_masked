
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ucma_multicast {int list; int id; int addr; int uid; int join_state; } ;
struct ucma_file {int mut; } ;
struct ucma_context {int cm_id; } ;
struct sockaddr {int dummy; } ;
struct rdma_ucm_join_mcast {scalar_t__ addr_size; scalar_t__ join_flags; int response; int uid; int id; int addr; } ;
struct rdma_ucm_create_id_resp {int id; } ;
typedef int ssize_t ;
typedef int resp ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ucma_context*) ;
 int FUNC_2 (struct ucma_context*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,struct rdma_ucm_create_id_resp*,int) ;
 int FUNC_4 (struct ucma_multicast*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sockaddr*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct sockaddr*) ;
 int FUNC_10 (int ,struct sockaddr*,int ,struct ucma_multicast*) ;
 int FUNC_11 (int ,struct sockaddr*) ;
 int FUNC_12 (int ) ;
 struct ucma_multicast* FUNC_13 (struct ucma_context*) ;
 int FUNC_14 (struct ucma_multicast*) ;
 struct ucma_context* FUNC_15 (struct ucma_file*,int ) ;
 int FUNC_16 (struct ucma_context*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ,struct ucma_multicast*,int ) ;

__attribute__((used)) static ssize_t FUNC_19(struct ucma_file *VAR_9,
     struct rdma_ucm_join_mcast *VAR_10, int VAR_11)
{
 struct rdma_ucm_create_id_resp VAR_12;
 struct ucma_context *VAR_13;
 struct ucma_multicast *VAR_14;
 struct sockaddr *VAR_15;
 int VAR_16;
 u8 VAR_17;

 if (VAR_11 < sizeof(VAR_12))
  return -VAR_3;

 VAR_15 = (struct sockaddr *) &VAR_10->addr;
 if (VAR_10->addr_size != FUNC_9(VAR_15))
  return -VAR_1;

 if (VAR_10->join_flags == VAR_5)
  VAR_17 = FUNC_0(VAR_4);
 else if (VAR_10->join_flags == VAR_6)
  VAR_17 = FUNC_0(VAR_7);
 else
  return -VAR_1;

 VAR_13 = FUNC_15(VAR_9, VAR_10->id);
 if (FUNC_1(VAR_13))
  return FUNC_2(VAR_13);

 FUNC_7(&VAR_9->mut);
 VAR_14 = FUNC_13(VAR_13);
 if (!VAR_14) {
  VAR_16 = -VAR_2;
  goto err1;
 }
 VAR_14->join_state = VAR_17;
 VAR_14->uid = VAR_10->uid;
 FUNC_6(&VAR_14->addr, VAR_15, VAR_10->addr_size);
 VAR_16 = FUNC_10(VAR_13->cm_id, (struct sockaddr *)&VAR_14->addr,
      VAR_17, VAR_14);
 if (VAR_16)
  goto err2;

 VAR_12.id = VAR_14->id;
 if (FUNC_3(FUNC_12(VAR_10->response),
    &VAR_12, sizeof(VAR_12))) {
  VAR_16 = -VAR_0;
  goto err3;
 }

 FUNC_18(&VAR_8, VAR_14->id, VAR_14, 0);

 FUNC_8(&VAR_9->mut);
 FUNC_16(VAR_13);
 return 0;

err3:
 FUNC_11(VAR_13->cm_id, (struct sockaddr *) &VAR_14->addr);
 FUNC_14(VAR_14);
err2:
 FUNC_17(&VAR_8, VAR_14->id);
 FUNC_5(&VAR_14->list);
 FUNC_4(VAR_14);
err1:
 FUNC_8(&VAR_9->mut);
 FUNC_16(VAR_13);
 return VAR_16;
}
