
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p_data {scalar_t__ dp_flags; scalar_t__ seq_num; int block_id; int sector; } ;
struct drbd_socket {int mutex; } ;
struct TYPE_3__ {int size; int sector; } ;
struct drbd_peer_request {TYPE_1__ i; int block_id; } ;
struct drbd_peer_device {TYPE_2__* connection; struct drbd_device* device; } ;
struct drbd_device {int vnr; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;
struct TYPE_4__ {scalar_t__ integrity_tfm; struct drbd_socket data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,struct drbd_socket*,int,int,int *,int ) ;
 int FUNC_1 (struct drbd_peer_device*,struct drbd_peer_request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,struct drbd_peer_request*,struct p_data*) ;
 struct p_data* FUNC_5 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drbd_peer_device *VAR_1, enum drbd_packet VAR_2,
      struct drbd_peer_request *VAR_3)
{
 struct drbd_device *VAR_4 = VAR_1->device;
 struct drbd_socket *VAR_5;
 struct p_data *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5 = &VAR_1->connection->data;
 VAR_6 = FUNC_5(VAR_1, VAR_5);

 VAR_8 = VAR_1->connection->integrity_tfm ?
        FUNC_3(VAR_1->connection->integrity_tfm) : 0;

 if (!VAR_6)
  return -VAR_0;
 VAR_6->sector = FUNC_2(VAR_3->i.sector);
 VAR_6->block_id = VAR_3->block_id;
 VAR_6->seq_num = 0;
 VAR_6->dp_flags = 0;
 if (VAR_8)
  FUNC_4(VAR_1->connection->integrity_tfm, VAR_3, VAR_6 + 1);
 VAR_7 = FUNC_0(VAR_1->connection, VAR_4->vnr, VAR_5, VAR_2, sizeof(*VAR_6) + VAR_8, ((void*)0), VAR_3->i.size);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_1, VAR_3);
 FUNC_6(&VAR_5->mutex);

 return VAR_7;
}
