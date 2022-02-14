
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_attr_bundle {int driver_udata; } ;
struct rdma_ah_attr {int type; } ;
struct ib_uverbs_create_ah_resp {int ah_handle; } ;
struct TYPE_3__ {int dgid; int traffic_class; int hop_limit; int sgid_index; int flow_label; } ;
struct TYPE_4__ {TYPE_1__ grh; scalar_t__ is_global; int port_num; int static_rate; int src_path_bits; int sl; int dlid; } ;
struct ib_uverbs_create_ah {int user_handle; TYPE_2__ attr; int pd_handle; } ;
struct ib_uobject {int id; struct ib_uobject* object; int user_handle; struct ib_uobject* uobject; } ;
struct ib_pd {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_ah {int id; struct ib_ah* object; int user_handle; struct ib_ah* uobject; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_uobject*) ;
 int FUNC_1 (struct ib_uobject*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (struct rdma_ah_attr*,int ) ;
 int FUNC_4 (struct rdma_ah_attr*,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,int ) ;
 int FUNC_6 (struct rdma_ah_attr*,int *,int ,int ,int ,int ) ;
 int FUNC_7 (struct rdma_ah_attr*,int) ;
 int FUNC_8 (struct rdma_ah_attr*,int ) ;
 int FUNC_9 (struct rdma_ah_attr*,int ) ;
 int FUNC_10 (struct rdma_ah_attr*,int ) ;
 int FUNC_11 (struct rdma_ah_attr*,int ) ;
 struct ib_uobject* FUNC_12 (struct ib_pd*,struct rdma_ah_attr*,int *) ;
 int FUNC_13 (struct ib_uobject*,int ,int ) ;
 int FUNC_14 (struct ib_device*,int ) ;
 struct ib_uobject* FUNC_15 (int ,struct uverbs_attr_bundle*,struct ib_device**) ;
 int FUNC_16 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 int FUNC_17 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 struct ib_pd* FUNC_18 (struct ib_pd*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_19 (struct ib_pd*) ;
 int FUNC_20 (struct uverbs_attr_bundle*) ;
 int FUNC_21 (struct uverbs_attr_bundle*,struct ib_uverbs_create_ah*,int) ;
 int FUNC_22 (struct uverbs_attr_bundle*,struct ib_uverbs_create_ah_resp*,int) ;

__attribute__((used)) static int FUNC_23(struct uverbs_attr_bundle *VAR_4)
{
 struct ib_uverbs_create_ah VAR_5;
 struct ib_uverbs_create_ah_resp VAR_6;
 struct ib_uobject *VAR_7;
 struct ib_pd *VAR_8;
 struct ib_ah *VAR_9;
 struct rdma_ah_attr VAR_10 = {};
 int VAR_11;
 struct ib_device *VAR_12;

 VAR_11 = FUNC_21(VAR_4, &VAR_5, sizeof(VAR_5));
 if (VAR_11)
  return VAR_11;

 VAR_7 = FUNC_15(VAR_2, VAR_4, &VAR_12);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (!FUNC_14(VAR_12, VAR_5.attr.port_num)) {
  VAR_11 = -VAR_0;
  goto err;
 }

 VAR_8 = FUNC_18(VAR_8, VAR_3, VAR_5.pd_handle, VAR_4);
 if (!VAR_8) {
  VAR_11 = -VAR_0;
  goto err;
 }

 VAR_10.type = FUNC_2(VAR_12, VAR_5.attr.port_num);
 FUNC_7(&VAR_10, 0);
 FUNC_5(&VAR_10, VAR_5.attr.dlid);
 FUNC_10(&VAR_10, VAR_5.attr.sl);
 FUNC_8(&VAR_10, VAR_5.attr.src_path_bits);
 FUNC_11(&VAR_10, VAR_5.attr.static_rate);
 FUNC_9(&VAR_10, VAR_5.attr.port_num);

 if (VAR_5.attr.is_global) {
  FUNC_6(&VAR_10, ((void*)0), VAR_5.attr.grh.flow_label,
    VAR_5.attr.grh.sgid_index,
    VAR_5.attr.grh.hop_limit,
    VAR_5.attr.grh.traffic_class);
  FUNC_4(&VAR_10, VAR_5.attr.grh.dgid);
 } else {
  FUNC_3(&VAR_10, 0);
 }

 VAR_9 = FUNC_12(VAR_8, &VAR_10, &VAR_4->driver_udata);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto err_put;
 }

 VAR_9->uobject = VAR_7;
 VAR_7->user_handle = VAR_5.user_handle;
 VAR_7->object = VAR_9;

 VAR_6.ah_handle = VAR_7->id;

 VAR_11 = FUNC_22(VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_11)
  goto err_copy;

 FUNC_19(VAR_8);
 return FUNC_17(VAR_7, VAR_4);

err_copy:
 FUNC_13(VAR_9, VAR_1,
        FUNC_20(VAR_4));

err_put:
 FUNC_19(VAR_8);

err:
 FUNC_16(VAR_7, VAR_4);
 return VAR_11;
}
