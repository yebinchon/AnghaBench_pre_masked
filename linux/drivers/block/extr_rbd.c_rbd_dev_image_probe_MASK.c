
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int features; } ;
struct rbd_device {TYPE_3__* spec; scalar_t__ image_format; TYPE_2__ header_oid; TYPE_1__ header; } ;
struct TYPE_6__ {scalar_t__ snap_id; int * image_id; int snap_name; int image_name; scalar_t__ pool_ns; int pool_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,char*,char*,int ,...) ;
 int FUNC_3 (struct rbd_device*) ;
 int FUNC_4 (struct rbd_device*) ;
 int FUNC_5 (struct rbd_device*) ;
 int FUNC_6 (struct rbd_device*) ;
 int FUNC_7 (struct rbd_device*,int) ;
 int FUNC_8 (struct rbd_device*) ;
 int FUNC_9 (struct rbd_device*) ;
 int FUNC_10 (struct rbd_device*) ;
 int FUNC_11 (struct rbd_device*) ;
 int FUNC_12 (struct rbd_device*) ;
 int FUNC_13 (struct rbd_device*) ;
 int FUNC_14 (struct rbd_device*) ;

__attribute__((used)) static int FUNC_15(struct rbd_device *VAR_4, int VAR_5)
{
 int VAR_6;







 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  goto err_out_format;

 if (!VAR_5) {
  VAR_6 = FUNC_11(VAR_4);
  if (VAR_6) {
   if (VAR_6 == -VAR_1)
    FUNC_2("image %s/%s%s%s does not exist\n",
     VAR_4->spec->pool_name,
     VAR_4->spec->pool_ns ?: "",
     VAR_4->spec->pool_ns ? "/" : "",
     VAR_4->spec->image_name);
   goto err_out_format;
  }
 }

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  goto err_out_watch;







 if (!VAR_5)
  VAR_6 = FUNC_13(VAR_4);
 else
  VAR_6 = FUNC_12(VAR_4);
 if (VAR_6) {
  if (VAR_6 == -VAR_1)
   FUNC_2("snap %s/%s%s%s@%s does not exist\n",
    VAR_4->spec->pool_name,
    VAR_4->spec->pool_ns ?: "",
    VAR_4->spec->pool_ns ? "/" : "",
    VAR_4->spec->image_name,
    VAR_4->spec->snap_name);
  goto err_out_probe;
 }

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  goto err_out_probe;

 if (VAR_4->spec->snap_id != VAR_0 &&
     (VAR_4->header.features & VAR_3)) {
  VAR_6 = FUNC_10(VAR_4);
  if (VAR_6)
   goto err_out_probe;
 }

 if (VAR_4->header.features & VAR_2) {
  VAR_6 = FUNC_9(VAR_4);
  if (VAR_6)
   goto err_out_probe;
 }

 VAR_6 = FUNC_7(VAR_4, VAR_5);
 if (VAR_6)
  goto err_out_probe;

 FUNC_0("discovered format %u image, header name is %s\n",
  VAR_4->image_format, VAR_4->header_oid.name);
 return 0;

err_out_probe:
 FUNC_8(VAR_4);
err_out_watch:
 if (!VAR_5)
  FUNC_14(VAR_4);
err_out_format:
 VAR_4->image_format = 0;
 FUNC_1(VAR_4->spec->image_id);
 VAR_4->spec->image_id = ((void*)0);
 return VAR_6;
}
