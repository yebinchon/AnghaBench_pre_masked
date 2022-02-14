
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int oe_objno; } ;
struct rbd_obj_request {TYPE_6__ ex; int osd_reqs; TYPE_1__* img_request; } ;
struct TYPE_12__ {int object_prefix; } ;
struct TYPE_11__ {int pool_id; } ;
struct rbd_device {int image_format; TYPE_5__ header; TYPE_4__ layout; int header_oloc; TYPE_3__* rbd_client; } ;
struct ceph_snap_context {int dummy; } ;
struct TYPE_14__ {int pool; } ;
struct ceph_osd_request {int r_base_oid; TYPE_7__ r_base_oloc; struct rbd_obj_request* r_priv; int r_callback; int r_private_item; } ;
struct ceph_osd_client {int dummy; } ;
struct TYPE_10__ {TYPE_2__* client; } ;
struct TYPE_9__ {struct ceph_osd_client osdc; } ;
struct TYPE_8__ {struct rbd_device* rbd_dev; } ;


 int VAR_0 ;
 struct ceph_osd_request* FUNC_0 (int) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (int *,int ,char const*,int ,int ) ;
 int FUNC_2 (TYPE_7__*,int *) ;
 struct ceph_osd_request* FUNC_3 (struct ceph_osd_client*,struct ceph_snap_context*,int,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static struct ceph_osd_request *
FUNC_5(struct rbd_obj_request *VAR_5,
     struct ceph_snap_context *VAR_6, int VAR_7)
{
 struct rbd_device *VAR_8 = VAR_5->img_request->rbd_dev;
 struct ceph_osd_client *VAR_9 = &VAR_8->rbd_client->client->osdc;
 struct ceph_osd_request *VAR_10;
 const char *VAR_11 = VAR_8->image_format == 1 ?
          VAR_2 : VAR_3;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_9, VAR_6, VAR_7, 0, VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_10->r_private_item, &VAR_5->osd_reqs);
 VAR_10->r_callback = VAR_4;
 VAR_10->r_priv = VAR_5;





 FUNC_2(&VAR_10->r_base_oloc, &VAR_8->header_oloc);
 VAR_10->r_base_oloc.pool = VAR_8->layout.pool_id;

 VAR_12 = FUNC_1(&VAR_10->r_base_oid, VAR_1, VAR_11,
          VAR_8->header.object_prefix,
          VAR_5->ex.oe_objno);
 if (VAR_12)
  return FUNC_0(VAR_12);

 return VAR_10;
}
