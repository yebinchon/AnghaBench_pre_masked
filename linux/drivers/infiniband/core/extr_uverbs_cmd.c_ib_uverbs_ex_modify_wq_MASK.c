
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_wq_attr {int flags_mask; int flags; int wq_state; int curr_wq_state; } ;
struct ib_wq {TYPE_2__* device; } ;
struct ib_uverbs_ex_modify_wq {int attr_mask; int flags_mask; int flags; int wq_state; int curr_wq_state; int wq_handle; } ;
typedef int cmd ;
struct TYPE_3__ {int (* modify_wq ) (struct ib_wq*,struct ib_wq_attr*,int,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ib_wq*,struct ib_wq_attr*,int,int *) ;
 struct ib_wq* FUNC_1 (struct ib_wq*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_2 (struct ib_wq*) ;
 int FUNC_3 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_modify_wq*,int) ;

__attribute__((used)) static int FUNC_4(struct uverbs_attr_bundle *VAR_5)
{
 struct ib_uverbs_ex_modify_wq VAR_6;
 struct ib_wq *VAR_7;
 struct ib_wq_attr VAR_8 = {};
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5, &VAR_6, sizeof(VAR_6));
 if (VAR_9)
  return VAR_9;

 if (!VAR_6.attr_mask)
  return -VAR_0;

 if (VAR_6.attr_mask > (VAR_3 | VAR_1 | VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_7, VAR_4, VAR_6.wq_handle, VAR_5);
 if (!VAR_7)
  return -VAR_0;

 VAR_8.curr_wq_state = VAR_6.curr_wq_state;
 VAR_8.wq_state = VAR_6.wq_state;
 if (VAR_6.attr_mask & VAR_2) {
  VAR_8.flags = VAR_6.flags;
  VAR_8.flags_mask = VAR_6.flags_mask;
 }
 VAR_9 = VAR_7->device->ops.modify_wq(VAR_7, &VAR_8, VAR_6.attr_mask,
     &VAR_5->driver_udata);
 FUNC_2(VAR_7);
 return VAR_9;
}
