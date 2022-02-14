
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rbd_device {int header_oloc; int header_oid; TYPE_1__* rbd_client; } ;
struct TYPE_6__ {int name; int cookie; } ;
struct TYPE_5__ {int addr; } ;
struct ceph_locker {TYPE_3__ id; TYPE_2__ info; } ;
struct ceph_client {int osdc; int monc; } ;
struct TYPE_4__ {struct ceph_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *,int ,int ,int *) ;
 int FUNC_2 (struct ceph_locker*,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct rbd_device*,struct ceph_locker*) ;
 int FUNC_5 (struct rbd_device*,struct ceph_locker**,scalar_t__*) ;
 int FUNC_6 (struct rbd_device*) ;
 int FUNC_7 (struct rbd_device*,char*,int ,...) ;

__attribute__((used)) static int FUNC_8(struct rbd_device *VAR_3)
{
 struct ceph_client *VAR_4 = VAR_3->rbd_client->client;
 struct ceph_locker *VAR_5;
 u32 VAR_6;
 int VAR_7;

 for (;;) {
  VAR_7 = FUNC_6(VAR_3);
  if (VAR_7 != -VAR_0)
   return VAR_7;


  VAR_7 = FUNC_5(VAR_3, &VAR_5, &VAR_6);
  if (VAR_7)
   return VAR_7;

  if (VAR_6 == 0)
   goto again;

  VAR_7 = FUNC_4(VAR_3, VAR_5);
  if (VAR_7)
   goto out;

  FUNC_7(VAR_3, "breaking header lock owned by %s%llu",
    FUNC_0(VAR_5[0].id.name));

  VAR_7 = FUNC_3(&VAR_4->monc,
           &VAR_5[0].info.addr);
  if (VAR_7) {
   FUNC_7(VAR_3, "blacklist of %s%llu failed: %d",
     FUNC_0(VAR_5[0].id.name), VAR_7);
   goto out;
  }

  VAR_7 = FUNC_1(&VAR_4->osdc, &VAR_3->header_oid,
       &VAR_3->header_oloc, VAR_2,
       VAR_5[0].id.cookie,
       &VAR_5[0].id.name);
  if (VAR_7 && VAR_7 != -VAR_1)
   goto out;

again:
  FUNC_2(VAR_5, VAR_6);
 }

out:
 FUNC_2(VAR_5, VAR_6);
 return VAR_7;
}
