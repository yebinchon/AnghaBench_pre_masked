
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uverbs_resize_cq_resp {int cqe; } ;
struct ib_uverbs_resize_cq {int cqe; int cq_handle; } ;
struct ib_cq {int cqe; TYPE_2__* device; } ;
typedef int resp ;
typedef int cmd ;
struct TYPE_3__ {int (* resize_cq ) (struct ib_cq*,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_cq*,int ,int *) ;
 struct ib_cq* FUNC_1 (struct ib_cq*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_2 (struct ib_cq*) ;
 int FUNC_3 (struct uverbs_attr_bundle*,struct ib_uverbs_resize_cq*,int) ;
 int FUNC_4 (struct uverbs_attr_bundle*,struct ib_uverbs_resize_cq_resp*,int) ;

__attribute__((used)) static int FUNC_5(struct uverbs_attr_bundle *VAR_2)
{
 struct ib_uverbs_resize_cq VAR_3;
 struct ib_uverbs_resize_cq_resp VAR_4 = {};
 struct ib_cq *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_6 = FUNC_3(VAR_2, &VAR_3, sizeof(VAR_3));
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_1(VAR_5, VAR_1, VAR_3.cq_handle, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_5->device->ops.resize_cq(VAR_5, VAR_3.cqe, &VAR_2->driver_udata);
 if (VAR_6)
  goto out;

 VAR_4.cqe = VAR_5->cqe;

 VAR_6 = FUNC_4(VAR_2, &VAR_4, sizeof(VAR_4));
out:
 FUNC_2(VAR_5);

 return VAR_6;
}
