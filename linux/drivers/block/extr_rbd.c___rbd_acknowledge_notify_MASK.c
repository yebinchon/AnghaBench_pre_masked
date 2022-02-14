
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rbd_device {int header_oloc; int header_oid; TYPE_2__* rbd_client; } ;
struct ceph_osd_client {int dummy; } ;
typedef int s32 ;
typedef int buf ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 int FUNC_0 (void**,int ) ;
 int FUNC_1 (struct ceph_osd_client*,int *,int *,int ,int ,char*,int) ;
 int FUNC_2 (void**,int,int,int) ;
 int FUNC_3 (struct rbd_device*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct rbd_device *VAR_1,
         u64 VAR_2, u64 VAR_3, s32 *VAR_4)
{
 struct ceph_osd_client *VAR_5 = &VAR_1->rbd_client->client->osdc;
 char VAR_6[4 + VAR_0];
 int VAR_7 = sizeof(VAR_6);
 int VAR_8;

 if (VAR_4) {
  void *VAR_9 = VAR_6;


  FUNC_2(&VAR_9, 1, 1,
        VAR_7 - VAR_0);
  FUNC_0(&VAR_9, *VAR_4);
 } else {
  VAR_7 = 0;
 }

 VAR_8 = FUNC_1(VAR_5, &VAR_1->header_oid,
       &VAR_1->header_oloc, VAR_2, VAR_3,
       VAR_6, VAR_7);
 if (VAR_8)
  FUNC_3(VAR_1, "acknowledge_notify failed: %d", VAR_8);
}
