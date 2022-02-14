
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct p_wsame {void* size; } ;
struct p_trim {void* size; } ;
struct p_data {unsigned long block_id; void* dp_flags; void* seq_num; int sector; } ;
struct drbd_socket {int mutex; } ;
struct TYPE_7__ {unsigned int size; scalar_t__ sector; } ;
struct drbd_request {int rq_state; TYPE_2__ i; int master_bio; } ;
struct drbd_peer_device {TYPE_4__* connection; struct drbd_device* device; } ;
struct TYPE_6__ {scalar_t__ conn; } ;
struct drbd_device {int vnr; TYPE_1__ state; int packet_seq; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;
struct TYPE_9__ {int agreed_pro_version; scalar_t__ integrity_tfm; struct drbd_socket data; } ;
struct TYPE_8__ {unsigned int bv_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_4__*,int ,struct drbd_socket*,int,int,int *,unsigned int) ;
 int FUNC_1 (struct drbd_peer_device*,int ) ;
 int FUNC_2 (struct drbd_peer_device*,int ) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (TYPE_4__*,int ) ;
 TYPE_3__ FUNC_5 (int ) ;
 void* FUNC_6 (unsigned int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,unsigned char*) ;
 struct p_data* FUNC_10 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_11 (struct drbd_device*,char*,unsigned long long,unsigned int) ;
 scalar_t__ FUNC_12 (struct p_data*,unsigned char*,int) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct drbd_peer_device *VAR_15, struct drbd_request *VAR_16)
{
 struct drbd_device *VAR_17 = VAR_15->device;
 struct drbd_socket *VAR_18;
 struct p_data *VAR_19;
 struct p_wsame *VAR_20 = ((void*)0);
 void *VAR_21;
 unsigned int VAR_22 = 0;
 int VAR_23;
 int VAR_24;

 VAR_18 = &VAR_15->connection->data;
 VAR_19 = FUNC_10(VAR_15, VAR_18);
 VAR_23 = VAR_15->connection->integrity_tfm ?
        FUNC_8(VAR_15->connection->integrity_tfm) : 0;

 if (!VAR_19)
  return -VAR_8;
 VAR_19->sector = FUNC_7(VAR_16->i.sector);
 VAR_19->block_id = (unsigned long)VAR_16;
 VAR_19->seq_num = FUNC_6(FUNC_3(&VAR_17->packet_seq));
 VAR_22 = FUNC_4(VAR_15->connection, VAR_16->master_bio);
 if (VAR_17->state.conn >= VAR_1 &&
     VAR_17->state.conn <= VAR_0)
  VAR_22 |= VAR_3;
 if (VAR_15->connection->agreed_pro_version >= 100) {
  if (VAR_16->rq_state & VAR_13)
   VAR_22 |= VAR_4;


  if (VAR_16->rq_state & VAR_14
  || (VAR_22 & VAR_3))
   VAR_22 |= VAR_5;
 }
 VAR_19->dp_flags = FUNC_6(VAR_22);

 if (VAR_22 & (VAR_2|VAR_7)) {
  enum drbd_packet VAR_25 = (VAR_22 & VAR_7) ? VAR_12 : VAR_10;
  struct p_trim *VAR_26 = (struct p_trim*)VAR_19;
  VAR_26->size = FUNC_6(VAR_16->i.size);
  VAR_24 = FUNC_0(VAR_15->connection, VAR_17->vnr, VAR_18, VAR_25, sizeof(*VAR_26), ((void*)0), 0);
  goto out;
 }
 if (VAR_22 & VAR_6) {



  VAR_20 = (struct p_wsame*)VAR_19;
  VAR_21 = VAR_20 + 1;
  VAR_20->size = FUNC_6(VAR_16->i.size);
 } else
  VAR_21 = VAR_19 + 1;



 if (VAR_23)
  FUNC_9(VAR_15->connection->integrity_tfm, VAR_16->master_bio, VAR_21);
 if (VAR_20) {
  VAR_24 =
      FUNC_0(VAR_15->connection, VAR_17->vnr, VAR_18, VAR_11,
       sizeof(*VAR_20) + VAR_23, ((void*)0),
       FUNC_5(VAR_16->master_bio).bv_len);
 } else
  VAR_24 =
      FUNC_0(VAR_15->connection, VAR_17->vnr, VAR_18, VAR_9,
       sizeof(*VAR_19) + VAR_23, ((void*)0), VAR_16->i.size);
 if (!VAR_24) {
  if (!(VAR_16->rq_state & (VAR_13 | VAR_14)) || VAR_23)
   VAR_24 = FUNC_1(VAR_15, VAR_16->master_bio);
  else
   VAR_24 = FUNC_2(VAR_15, VAR_16->master_bio);


  if (VAR_23 > 0 && VAR_23 <= 64) {


   unsigned char VAR_27[64];
   FUNC_9(VAR_15->connection->integrity_tfm, VAR_16->master_bio, VAR_27);
   if (FUNC_12(VAR_19 + 1, VAR_27, VAR_23)) {
    FUNC_11(VAR_17,
     "Digest mismatch, buffer modified by upper layers during write: %llus +%u\n",
     (unsigned long long)VAR_16->i.sector, VAR_16->i.size);
   }
  }


 }
out:
 FUNC_13(&VAR_18->mutex);

 return VAR_24;
}
