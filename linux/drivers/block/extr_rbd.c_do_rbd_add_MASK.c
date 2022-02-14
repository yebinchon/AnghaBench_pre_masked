
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rbd_spec {scalar_t__ pool_id; int pool_name; } ;
struct rbd_options {int dummy; } ;
struct TYPE_14__ {int features; } ;
struct TYPE_13__ {scalar_t__ object_size; } ;
struct rbd_device {TYPE_6__ header; TYPE_7__* disk; int node; int dev; TYPE_5__ layout; TYPE_4__* opts; TYPE_3__* spec; int header_rwsem; int config_info; } ;
struct rbd_client {TYPE_2__* client; } ;
struct ceph_options {int dummy; } ;
struct bus_type {int dummy; } ;
typedef int ssize_t ;
struct TYPE_15__ {int disk_name; int queue; } ;
struct TYPE_12__ {int read_only; scalar_t__ alloc_size; } ;
struct TYPE_11__ {scalar_t__ snap_id; } ;
struct TYPE_9__ {int osdmap; } ;
struct TYPE_10__ {TYPE_1__ osdc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct rbd_client*) ;
 int FUNC_1 (struct rbd_client*) ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (struct rbd_options*) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (struct rbd_device*) ;
 int FUNC_14 (char const*,struct ceph_options**,struct rbd_options**,struct rbd_spec**) ;
 struct rbd_device* FUNC_15 (struct rbd_client*,struct rbd_spec*,struct rbd_options*) ;
 int FUNC_16 (struct rbd_device*) ;
 int FUNC_17 (struct rbd_device*) ;
 int FUNC_18 (struct rbd_device*) ;
 int FUNC_19 (struct rbd_device*,int ) ;
 int FUNC_20 (struct rbd_device*) ;
 int FUNC_21 (struct rbd_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct rbd_client* FUNC_22 (struct ceph_options*) ;
 int FUNC_23 (struct rbd_client*) ;
 int FUNC_24 (struct rbd_spec*) ;
 int FUNC_25 (struct rbd_device*,char*,scalar_t__) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static ssize_t FUNC_30(struct bus_type *VAR_9,
     const char *VAR_10,
     size_t VAR_11)
{
 struct rbd_device *VAR_12 = ((void*)0);
 struct ceph_options *VAR_13 = ((void*)0);
 struct rbd_options *VAR_14 = ((void*)0);
 struct rbd_spec *VAR_15 = ((void*)0);
 struct rbd_client *VAR_16;
 int VAR_17;

 if (!FUNC_28(VAR_6))
  return -VAR_1;


 VAR_17 = FUNC_14(VAR_10, &VAR_13, &VAR_14, &VAR_15);
 if (VAR_17 < 0)
  goto out;

 VAR_16 = FUNC_22(VAR_13);
 if (FUNC_0(VAR_16)) {
  VAR_17 = FUNC_1(VAR_16);
  goto err_out_args;
 }


 VAR_17 = FUNC_4(VAR_16->client->osdc.osdmap, VAR_15->pool_name);
 if (VAR_17 < 0) {
  if (VAR_17 == -VAR_2)
   FUNC_12("pool %s does not exist\n", VAR_15->pool_name);
  goto err_out_client;
 }
 VAR_15->pool_id = (u64)VAR_17;

 VAR_12 = FUNC_15(VAR_16, VAR_15, VAR_14);
 if (!VAR_12) {
  VAR_17 = -VAR_3;
  goto err_out_client;
 }
 VAR_16 = ((void*)0);
 VAR_15 = ((void*)0);
 VAR_14 = ((void*)0);

 VAR_12->config_info = FUNC_9(VAR_10, VAR_4);
 if (!VAR_12->config_info) {
  VAR_17 = -VAR_3;
  goto err_out_rbd_dev;
 }

 FUNC_6(&VAR_12->header_rwsem);
 VAR_17 = FUNC_19(VAR_12, 0);
 if (VAR_17 < 0) {
  FUNC_29(&VAR_12->header_rwsem);
  goto err_out_rbd_dev;
 }


 if (VAR_12->spec->snap_id != VAR_0)
  VAR_12->opts->read_only = 1;

 if (VAR_12->opts->alloc_size > VAR_12->layout.object_size) {
  FUNC_25(VAR_12, "alloc_size adjusted to %u",
    VAR_12->layout.object_size);
  VAR_12->opts->alloc_size = VAR_12->layout.object_size;
 }

 VAR_17 = FUNC_18(VAR_12);
 if (VAR_17)
  goto err_out_image_probe;

 VAR_17 = FUNC_13(VAR_12);
 if (VAR_17)
  goto err_out_image_lock;



 VAR_17 = FUNC_5(&VAR_12->dev);
 if (VAR_17)
  goto err_out_image_lock;

 FUNC_2(VAR_12->disk);

 FUNC_3(VAR_12->disk->queue);

 FUNC_26(&VAR_8);
 FUNC_10(&VAR_12->node, &VAR_7);
 FUNC_27(&VAR_8);

 FUNC_12("%s: capacity %llu features 0x%llx\n", VAR_12->disk->disk_name,
  (unsigned long long)FUNC_7(VAR_12->disk) << VAR_5,
  VAR_12->header.features);
 VAR_17 = VAR_11;
out:
 FUNC_11(VAR_6);
 return VAR_17;

err_out_image_lock:
 FUNC_21(VAR_12);
 FUNC_17(VAR_12);
err_out_image_probe:
 FUNC_20(VAR_12);
err_out_rbd_dev:
 FUNC_16(VAR_12);
err_out_client:
 FUNC_23(VAR_16);
err_out_args:
 FUNC_24(VAR_15);
 FUNC_8(VAR_14);
 goto out;
}
