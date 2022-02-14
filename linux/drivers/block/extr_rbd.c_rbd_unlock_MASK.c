
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_device {char* lock_cookie; int released_lock_work; int task_wq; int lock_state; int header_oloc; int header_oid; TYPE_2__* rbd_client; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct ceph_osd_client*,int *,int *,int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (struct rbd_device*,int *) ;
 int FUNC_5 (struct rbd_device*,char*,int) ;

__attribute__((used)) static void FUNC_6(struct rbd_device *VAR_4)
{
 struct ceph_osd_client *VAR_5 = &VAR_4->rbd_client->client->osdc;
 int VAR_6;

 FUNC_0(!FUNC_1(VAR_4) ||
  VAR_4->lock_cookie[0] == '\0');

 VAR_6 = FUNC_2(VAR_5, &VAR_4->header_oid, &VAR_4->header_oloc,
         VAR_1, VAR_4->lock_cookie);
 if (VAR_6 && VAR_6 != -VAR_0)
  FUNC_5(VAR_4, "failed to unlock header: %d", VAR_6);


 VAR_4->lock_state = VAR_2;
 VAR_4->lock_cookie[0] = '\0';
 FUNC_4(VAR_4, &VAR_3);
 FUNC_3(VAR_4->task_wq, &VAR_4->released_lock_work);
}
