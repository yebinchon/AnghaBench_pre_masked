
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct rbd_device {int header_oloc; TYPE_2__* rbd_client; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_6__ {int name; int cookie; } ;
struct ceph_locker {TYPE_3__ id; } ;
struct TYPE_5__ {TYPE_1__* client; } ;
struct TYPE_4__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct ceph_osd_client*,int *,int *,int ,int ,int *) ;
 int FUNC_3 (struct ceph_osd_client*,int *,int *,int ,int ,char*,char*,char*,int ) ;
 int FUNC_4 (struct ceph_osd_client*,int *,int *,int ,int *,char**,struct ceph_locker**,scalar_t__*) ;
 int FUNC_5 (struct ceph_locker*,scalar_t__) ;
 int FUNC_6 (char*) ;
 int VAR_6 ;
 int FUNC_7 (struct rbd_device*,int ,int *) ;
 int FUNC_8 (struct rbd_device*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct rbd_device *VAR_7)
{
 struct ceph_osd_client *VAR_8 = &VAR_7->rbd_client->client->osdc;
 FUNC_0(VAR_6);
 u8 VAR_9;
 char *VAR_10;
 struct ceph_locker *VAR_11;
 u32 VAR_12;
 bool VAR_13 = 0;
 int VAR_14;

 FUNC_7(VAR_7, VAR_1, &VAR_6);

again:
 VAR_14 = FUNC_3(VAR_8, &VAR_6, &VAR_7->header_oloc, VAR_5,
       VAR_0, "", "", "", 0);
 if (VAR_14 != -VAR_2 || VAR_13) {
  if (VAR_14 == -VAR_3)
   VAR_14 = 0;
  if (VAR_14)
   FUNC_8(VAR_7, "failed to lock object map: %d", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_8, &VAR_6, &VAR_7->header_oloc,
     VAR_5, &VAR_9, &VAR_10,
     &VAR_11, &VAR_12);
 if (VAR_14) {
  if (VAR_14 == -VAR_4)
   goto again;

  FUNC_8(VAR_7, "failed to get object map lockers: %d", VAR_14);
  return VAR_14;
 }

 FUNC_6(VAR_10);
 if (VAR_12 == 0)
  goto again;

 FUNC_8(VAR_7, "breaking object map lock owned by %s%llu",
   FUNC_1(VAR_11[0].id.name));

 VAR_14 = FUNC_2(VAR_8, &VAR_6, &VAR_7->header_oloc,
      VAR_5, VAR_11[0].id.cookie,
      &VAR_11[0].id.name);
 FUNC_5(VAR_11, VAR_12);
 if (VAR_14) {
  if (VAR_14 == -VAR_4)
   goto again;

  FUNC_8(VAR_7, "failed to break object map lock: %d", VAR_14);
  return VAR_14;
 }

 VAR_13 = 1;
 goto again;
}
