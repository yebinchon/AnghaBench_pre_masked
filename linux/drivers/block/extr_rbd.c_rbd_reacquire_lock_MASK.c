
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_device {int lock_dwork; int task_wq; int lock_cookie; int header_oloc; int header_oid; TYPE_2__* rbd_client; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rbd_device*,char*) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct ceph_osd_client*,int *,int *,int ,int ,int ,int ,char*) ;
 int FUNC_3 (struct rbd_device*,char*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct rbd_device*) ;
 int FUNC_6 (struct rbd_device*,char*,int) ;
 int FUNC_7 (struct rbd_device*,int ) ;

__attribute__((used)) static void FUNC_8(struct rbd_device *VAR_4)
{
 struct ceph_osd_client *VAR_5 = &VAR_4->rbd_client->client->osdc;
 char VAR_6[32];
 int VAR_7;

 if (!FUNC_5(VAR_4))
  return;

 FUNC_3(VAR_4, VAR_6);
 VAR_7 = FUNC_2(VAR_5, &VAR_4->header_oid,
      &VAR_4->header_oloc, VAR_2,
      VAR_0, VAR_4->lock_cookie,
      VAR_3, VAR_6);
 if (VAR_7) {
  if (VAR_7 != -VAR_1)
   FUNC_6(VAR_4, "failed to update lock cookie: %d",
     VAR_7);





  FUNC_1(VAR_4);
  FUNC_4(VAR_4->task_wq, &VAR_4->lock_dwork, 0);
 } else {
  FUNC_0(VAR_4, VAR_6);
  FUNC_7(VAR_4, 0);
 }
}
