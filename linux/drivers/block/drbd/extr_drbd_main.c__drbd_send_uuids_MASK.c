
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct p_uuids {void** uuid; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_3__* connection; struct drbd_device* device; } ;
struct TYPE_9__ {scalar_t__ disk; } ;
struct drbd_device {int comm_bm_set; TYPE_4__ new_state_tmp; int flags; TYPE_2__* ldev; } ;
struct TYPE_10__ {scalar_t__ discard_my_data; } ;
struct TYPE_8__ {int net_conf; struct drbd_socket data; } ;
struct TYPE_6__ {int* uuid; int uuid_lock; } ;
struct TYPE_7__ {TYPE_1__ md; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct drbd_device*) ;
 struct p_uuids* FUNC_2 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_3 (struct drbd_peer_device*,struct drbd_socket*,int ,int,int *,int ) ;
 int FUNC_4 (struct drbd_device*,int ) ;
 int FUNC_5 (struct drbd_device*) ;
 TYPE_5__* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct drbd_peer_device *VAR_8, u64 VAR_9)
{
 struct drbd_device *VAR_10 = VAR_8->device;
 struct drbd_socket *VAR_11;
 struct p_uuids *VAR_12;
 int VAR_13;

 if (!FUNC_4(VAR_10, VAR_2))
  return 0;

 VAR_11 = &VAR_8->connection->data;
 VAR_12 = FUNC_2(VAR_8, VAR_11);
 if (!VAR_12) {
  FUNC_5(VAR_10);
  return -VAR_3;
 }
 FUNC_9(&VAR_10->ldev->md.uuid_lock);
 for (VAR_13 = VAR_5; VAR_13 < VAR_7; VAR_13++)
  VAR_12->uuid[VAR_13] = FUNC_0(VAR_10->ldev->md.uuid[VAR_13]);
 FUNC_10(&VAR_10->ldev->md.uuid_lock);

 VAR_10->comm_bm_set = FUNC_1(VAR_10);
 VAR_12->uuid[VAR_7] = FUNC_0(VAR_10->comm_bm_set);
 FUNC_7();
 VAR_9 |= FUNC_6(VAR_8->connection->net_conf)->discard_my_data ? 1 : 0;
 FUNC_8();
 VAR_9 |= FUNC_11(VAR_0, &VAR_10->flags) ? 2 : 0;
 VAR_9 |= VAR_10->new_state_tmp.disk == VAR_1 ? 4 : 0;
 VAR_12->uuid[VAR_6] = FUNC_0(VAR_9);

 FUNC_5(VAR_10);
 return FUNC_3(VAR_8, VAR_11, VAR_4, sizeof(*VAR_12), ((void*)0), 0);
}
