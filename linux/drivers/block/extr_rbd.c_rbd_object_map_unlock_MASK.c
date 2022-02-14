
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_device {int header_oloc; TYPE_2__* rbd_client; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ceph_osd_client*,int *,int *,int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct rbd_device*,int ,int *) ;
 int FUNC_3 (struct rbd_device*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct rbd_device *VAR_4)
{
 struct ceph_osd_client *VAR_5 = &VAR_4->rbd_client->client->osdc;
 FUNC_0(VAR_3);
 int VAR_6;

 FUNC_2(VAR_4, VAR_0, &VAR_3);

 VAR_6 = FUNC_1(VAR_5, &VAR_3, &VAR_4->header_oloc, VAR_2,
         "");
 if (VAR_6 && VAR_6 != -VAR_1)
  FUNC_3(VAR_4, "failed to unlock object map: %d", VAR_6);
}
