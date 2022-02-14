
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; TYPE_1__* ufile; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {int id; struct ib_xrcd* object; } ;
struct ib_xrcd {TYPE_3__ uobject; int usecnt; int refcnt; int tgt_qp_list; int tgt_qp_mutex; struct ib_device* device; struct inode* inode; } ;
struct ib_uxrcd_object {TYPE_3__ uobject; int usecnt; int refcnt; int tgt_qp_list; int tgt_qp_mutex; struct ib_device* device; struct inode* inode; } ;
struct ib_uverbs_open_xrcd_resp {int xrcd_handle; } ;
struct ib_uverbs_open_xrcd {int fd; int oflags; } ;
struct ib_uverbs_device {int xrcd_tree_mutex; } ;
struct TYPE_6__ {struct ib_xrcd* (* alloc_xrcd ) (struct ib_device*,int *) ;} ;
struct ib_device {TYPE_2__ ops; } ;
struct fd {scalar_t__ file; int member_1; int * member_0; } ;
typedef int resp ;
typedef int cmd ;
struct TYPE_5__ {struct ib_uverbs_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ib_xrcd*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ib_xrcd*) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 struct fd FUNC_6 (int) ;
 int FUNC_7 (struct fd) ;
 struct inode* FUNC_8 (scalar_t__) ;
 struct ib_xrcd* FUNC_9 (struct ib_uverbs_device*,struct inode*) ;
 int FUNC_10 (struct ib_xrcd*,int ) ;
 int FUNC_11 (struct ib_uverbs_open_xrcd_resp*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct ib_xrcd* FUNC_15 (struct ib_device*,int *) ;
 scalar_t__ FUNC_16 (int ,struct uverbs_attr_bundle*,struct ib_device**) ;
 int FUNC_17 (TYPE_3__*,struct uverbs_attr_bundle*) ;
 int FUNC_18 (TYPE_3__*,struct uverbs_attr_bundle*) ;
 int FUNC_19 (struct uverbs_attr_bundle*) ;
 int FUNC_20 (struct uverbs_attr_bundle*,struct ib_uverbs_open_xrcd*,int) ;
 int FUNC_21 (struct uverbs_attr_bundle*,struct ib_uverbs_open_xrcd_resp*,int) ;
 int FUNC_22 (struct ib_uverbs_device*,struct inode*) ;
 int FUNC_23 (struct ib_uverbs_device*,struct inode*,struct ib_xrcd*) ;

__attribute__((used)) static int FUNC_24(struct uverbs_attr_bundle *VAR_6)
{
 struct ib_uverbs_device *VAR_7 = VAR_6->ufile->device;
 struct ib_uverbs_open_xrcd VAR_8;
 struct ib_uverbs_open_xrcd_resp VAR_9;
 struct ib_uxrcd_object *VAR_10;
 struct ib_xrcd *VAR_11 = ((void*)0);
 struct fd VAR_12 = {((void*)0), 0};
 struct inode *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 int VAR_15 = 0;
 struct ib_device *VAR_16;

 VAR_14 = FUNC_20(VAR_6, &VAR_8, sizeof(VAR_8));
 if (VAR_14)
  return VAR_14;

 FUNC_13(&VAR_7->xrcd_tree_mutex);

 if (VAR_8.fd != -1) {

  VAR_12 = FUNC_6(VAR_8.fd);
  if (!VAR_12.file) {
   VAR_14 = -VAR_1;
   goto err_tree_mutex_unlock;
  }

  VAR_13 = FUNC_8(VAR_12.file);
  VAR_11 = FUNC_9(VAR_7, VAR_13);
  if (!VAR_11 && !(VAR_8.oflags & VAR_3)) {

   VAR_14 = -VAR_0;
   goto err_tree_mutex_unlock;
  }

  if (VAR_11 && VAR_8.oflags & VAR_4) {
   VAR_14 = -VAR_2;
   goto err_tree_mutex_unlock;
  }
 }

 VAR_10 = (struct ib_uxrcd_object *)FUNC_16(VAR_5, VAR_6,
         &VAR_16);
 if (FUNC_1(VAR_10)) {
  VAR_14 = FUNC_2(VAR_10);
  goto err_tree_mutex_unlock;
 }

 if (!VAR_11) {
  VAR_11 = VAR_16->ops.alloc_xrcd(VAR_16, &VAR_6->driver_udata);
  if (FUNC_1(VAR_11)) {
   VAR_14 = FUNC_2(VAR_11);
   goto err;
  }

  VAR_11->inode = VAR_13;
  VAR_11->device = VAR_16;
  FUNC_5(&VAR_11->usecnt, 0);
  FUNC_12(&VAR_11->tgt_qp_mutex);
  FUNC_0(&VAR_11->tgt_qp_list);
  VAR_15 = 1;
 }

 FUNC_5(&VAR_10->refcnt, 0);
 VAR_10->uobject.object = VAR_11;
 FUNC_11(&VAR_9, 0, sizeof VAR_9);
 VAR_9.xrcd_handle = VAR_10->uobject.id;

 if (VAR_13) {
  if (VAR_15) {

   VAR_14 = FUNC_23(VAR_7, VAR_13, VAR_11);
   if (VAR_14)
    goto err_dealloc_xrcd;
  }
  FUNC_4(&VAR_11->usecnt);
 }

 VAR_14 = FUNC_21(VAR_6, &VAR_9, sizeof(VAR_9));
 if (VAR_14)
  goto err_copy;

 if (VAR_12.file)
  FUNC_7(VAR_12);

 FUNC_14(&VAR_7->xrcd_tree_mutex);

 return FUNC_18(&VAR_10->uobject, VAR_6);

err_copy:
 if (VAR_13) {
  if (VAR_15)
   FUNC_22(VAR_7, VAR_13);
  FUNC_3(&VAR_11->usecnt);
 }

err_dealloc_xrcd:
 FUNC_10(VAR_11, FUNC_19(VAR_6));

err:
 FUNC_17(&VAR_10->uobject, VAR_6);

err_tree_mutex_unlock:
 if (VAR_12.file)
  FUNC_7(VAR_12);

 FUNC_14(&VAR_7->xrcd_tree_mutex);

 return VAR_14;
}
