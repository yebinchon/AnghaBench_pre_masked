
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uverbs_modify_srq {int attr_mask; int srq_limit; int max_wr; int srq_handle; } ;
struct ib_srq_attr {int srq_limit; int max_wr; } ;
struct ib_srq {TYPE_2__* device; } ;
typedef int cmd ;
struct TYPE_3__ {int (* modify_srq ) (struct ib_srq*,struct ib_srq_attr*,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_srq*,struct ib_srq_attr*,int ,int *) ;
 struct ib_srq* FUNC_1 (struct ib_srq*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_2 (struct ib_srq*) ;
 int FUNC_3 (struct uverbs_attr_bundle*,struct ib_uverbs_modify_srq*,int) ;

__attribute__((used)) static int FUNC_4(struct uverbs_attr_bundle *VAR_2)
{
 struct ib_uverbs_modify_srq VAR_3;
 struct ib_srq *VAR_4;
 struct ib_srq_attr VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, &VAR_3, sizeof(VAR_3));
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_1(VAR_4, VAR_1, VAR_3.srq_handle, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_5.max_wr = VAR_3.max_wr;
 VAR_5.srq_limit = VAR_3.srq_limit;

 VAR_6 = VAR_4->device->ops.modify_srq(VAR_4, &VAR_5, VAR_3.attr_mask,
       &VAR_2->driver_udata);

 FUNC_2(VAR_4);

 return VAR_6;
}
