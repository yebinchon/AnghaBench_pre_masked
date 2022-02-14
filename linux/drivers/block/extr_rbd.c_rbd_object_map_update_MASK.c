
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_8__ {int oe_objno; } ;
struct rbd_obj_request {TYPE_4__ ex; int osd_reqs; TYPE_1__* img_request; } ;
struct rbd_device {int header_oloc; TYPE_3__* rbd_client; } ;
struct ceph_osd_request {int r_mtime; int r_flags; int r_base_oloc; int r_base_oid; struct rbd_obj_request* r_priv; int r_callback; int r_private_item; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_7__ {TYPE_2__* client; } ;
struct TYPE_6__ {struct ceph_osd_client osdc; } ;
struct TYPE_5__ {struct rbd_device* rbd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ceph_osd_request*,int ,int ,int ,char*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ceph_osd_request*,int ) ;
 struct ceph_osd_request* FUNC_3 (struct ceph_osd_client*,int *,int,int,int ) ;
 int FUNC_4 (struct ceph_osd_client*,struct ceph_osd_request*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct ceph_osd_request*,int,int ,int ,int const*) ;
 int VAR_6 ;
 int FUNC_8 (struct rbd_device*,int ,int *) ;
 int FUNC_9 (struct rbd_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct rbd_obj_request *VAR_7, u64 VAR_8,
     u8 VAR_9, const u8 *VAR_10)
{
 struct rbd_device *VAR_11 = VAR_7->img_request->rbd_dev;
 struct ceph_osd_client *VAR_12 = &VAR_11->rbd_client->client->osdc;
 struct ceph_osd_request *VAR_13;
 int VAR_14 = 1;
 int VAR_15 = 0;
 int VAR_16;

 if (VAR_8 == VAR_1) {
  if (!FUNC_9(VAR_11, VAR_7->ex.oe_objno, VAR_9))
   return 1;

  VAR_14++;
 }

 VAR_13 = FUNC_3(VAR_12, ((void*)0), VAR_14, 0, VAR_4);
 if (!VAR_13)
  return -VAR_3;

 FUNC_6(&VAR_13->r_private_item, &VAR_7->osd_reqs);
 VAR_13->r_callback = VAR_6;
 VAR_13->r_priv = VAR_7;

 FUNC_8(VAR_11, VAR_8, &VAR_13->r_base_oid);
 FUNC_1(&VAR_13->r_base_oloc, &VAR_11->header_oloc);
 VAR_13->r_flags = VAR_2;
 FUNC_5(&VAR_13->r_mtime);

 if (VAR_8 == VAR_1) {




  VAR_16 = FUNC_0(VAR_13, VAR_15++, VAR_5,
          VAR_0, "", "");
  if (VAR_16)
   return VAR_16;
 }

 VAR_16 = FUNC_7(VAR_13, VAR_15, VAR_7->ex.oe_objno,
     VAR_9, VAR_10);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_13, VAR_4);
 if (VAR_16)
  return VAR_16;

 FUNC_4(VAR_12, VAR_13, 0);
 return 0;
}
