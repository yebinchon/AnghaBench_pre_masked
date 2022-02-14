
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_spec {scalar_t__ pool_id; int image_id; scalar_t__ snap_id; char const* pool_name; char const* image_name; char const* snap_name; } ;
struct rbd_device {struct rbd_spec* spec; TYPE_2__* rbd_client; } ;
struct ceph_osd_client {int osdmap; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct TYPE_3__ {struct ceph_osd_client osdc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,int ) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (struct rbd_device*) ;
 char* FUNC_7 (struct rbd_device*,scalar_t__) ;
 int FUNC_8 (struct rbd_device*,char*,...) ;

__attribute__((used)) static int FUNC_9(struct rbd_device *VAR_5)
{
 struct ceph_osd_client *VAR_6 = &VAR_5->rbd_client->client->osdc;
 struct rbd_spec *VAR_7 = VAR_5->spec;
 const char *VAR_8;
 const char *VAR_9;
 const char *VAR_10;
 int VAR_11;

 FUNC_5(VAR_7->pool_id != VAR_0);
 FUNC_5(VAR_7->image_id);
 FUNC_5(VAR_7->snap_id != VAR_1);



 VAR_8 = FUNC_2(VAR_6->osdmap, VAR_7->pool_id);
 if (!VAR_8) {
  FUNC_8(VAR_5, "no pool with id %llu", VAR_7->pool_id);
  return -VAR_2;
 }
 VAR_8 = FUNC_4(VAR_8, VAR_4);
 if (!VAR_8)
  return -VAR_3;



 VAR_9 = FUNC_6(VAR_5);
 if (!VAR_9)
  FUNC_8(VAR_5, "unable to get image name");



 VAR_10 = FUNC_7(VAR_5, VAR_7->snap_id);
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto out_err;
 }

 VAR_7->pool_name = VAR_8;
 VAR_7->image_name = VAR_9;
 VAR_7->snap_name = VAR_10;

 return 0;

out_err:
 FUNC_3(VAR_9);
 FUNC_3(VAR_8);
 return VAR_11;
}
