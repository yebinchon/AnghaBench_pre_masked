
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct p_rs_uuid {int uuid; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_4__* connection; struct drbd_device* device; } ;
struct TYPE_5__ {scalar_t__ disk; } ;
struct drbd_device {TYPE_3__* ldev; TYPE_1__ state; } ;
struct TYPE_8__ {struct drbd_socket data; } ;
struct TYPE_6__ {scalar_t__* uuid; } ;
struct TYPE_7__ {TYPE_2__ md; } ;


 int FUNC_0 (struct drbd_device*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drbd_device*) ;
 struct p_rs_uuid* FUNC_3 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_4 (struct drbd_device*,char*) ;
 int FUNC_5 (struct drbd_peer_device*,struct drbd_socket*,int ,int,int *,int ) ;
 int FUNC_6 (struct drbd_device*,size_t,scalar_t__) ;
 int FUNC_7 (scalar_t__*,int) ;

void FUNC_8(struct drbd_peer_device *VAR_5)
{
 struct drbd_device *VAR_6 = VAR_5->device;
 struct drbd_socket *VAR_7;
 struct p_rs_uuid *VAR_8;
 u64 VAR_9;

 FUNC_0(VAR_6, VAR_6->state.disk == VAR_0);

 VAR_9 = VAR_6->ldev->md.uuid[VAR_2];
 if (VAR_9 && VAR_9 != VAR_3)
  VAR_9 = VAR_9 + VAR_4;
 else
  FUNC_7(&VAR_9, sizeof(u64));
 FUNC_6(VAR_6, VAR_2, VAR_9);
 FUNC_4(VAR_6, "updated sync UUID");
 FUNC_2(VAR_6);

 VAR_7 = &VAR_5->connection->data;
 VAR_8 = FUNC_3(VAR_5, VAR_7);
 if (VAR_8) {
  VAR_8->uuid = FUNC_1(VAR_9);
  FUNC_5(VAR_5, VAR_7, VAR_1, sizeof(*VAR_8), ((void*)0), 0);
 }
}
