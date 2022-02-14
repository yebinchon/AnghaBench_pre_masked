
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_device {char* lock_cookie; int header_oloc; int header_oid; TYPE_2__* rbd_client; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*,char*) ;
 int FUNC_3 (struct ceph_osd_client*,int *,int *,int ,int ,char*,int ,char*,int ) ;
 int FUNC_4 (struct rbd_device*,char*) ;

__attribute__((used)) static int FUNC_5(struct rbd_device *VAR_3)
{
 struct ceph_osd_client *VAR_4 = &VAR_3->rbd_client->client->osdc;
 char VAR_5[32];
 int VAR_6;

 FUNC_0(FUNC_1(VAR_3) ||
  VAR_3->lock_cookie[0] != '\0');

 FUNC_4(VAR_3, VAR_5);
 VAR_6 = FUNC_3(VAR_4, &VAR_3->header_oid, &VAR_3->header_oloc,
       VAR_1, VAR_0, VAR_5,
       VAR_2, "", 0);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_3, VAR_5);
 return 0;
}
