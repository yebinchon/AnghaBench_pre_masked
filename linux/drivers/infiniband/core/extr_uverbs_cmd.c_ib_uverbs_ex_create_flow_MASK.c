
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ib_flow_spec {scalar_t__ size; } ;
struct uverbs_req_iter {int dummy; } ;
struct uverbs_attr_bundle {int driver_udata; } ;
struct ib_uverbs_flow_spec_hdr {int size; } ;
struct ib_uverbs_flow_spec {int dummy; } ;
struct ib_uverbs_flow_attr {int flags; scalar_t__ type; int num_of_specs; int size; struct ib_uverbs_flow_spec_hdr* flow_specs; int port; int priority; scalar_t__* reserved; } ;
struct ib_uverbs_create_flow_resp {int flow_handle; } ;
struct ib_uverbs_create_flow {struct ib_uverbs_flow_attr flow_attr; int qp_handle; scalar_t__ comp_mask; } ;
struct ib_uobject {int id; } ;
struct ib_uflow_resources {int dummy; } ;
struct ib_qp {scalar_t__ qp_type; int usecnt; TYPE_2__* device; } ;
struct ib_flow_attr {int flags; scalar_t__ type; int num_of_specs; int size; struct ib_uverbs_flow_spec_hdr* flow_specs; int port; int priority; scalar_t__* reserved; } ;
struct ib_flow {int id; } ;
struct ib_device {int dummy; } ;
typedef int resp ;
typedef int cmd ;
struct TYPE_3__ {int (* destroy_flow ) (struct ib_uobject*) ;struct ib_uobject* (* create_flow ) (struct ib_qp*,struct ib_uverbs_flow_attr*,int ,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (struct ib_uobject*) ;
 int FUNC_1 (struct ib_uobject*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct ib_uflow_resources* FUNC_4 (int) ;
 int VAR_15 ;
 int FUNC_5 (struct ib_uobject*,struct ib_uobject*,struct ib_qp*,TYPE_2__*,struct ib_uflow_resources*) ;
 int FUNC_6 (struct ib_uflow_resources*) ;
 int FUNC_7 (struct uverbs_attr_bundle*,struct ib_uverbs_flow_spec*,void*,struct ib_uflow_resources*) ;
 int FUNC_8 (struct ib_uverbs_flow_attr*) ;
 struct ib_uverbs_flow_attr* FUNC_9 (int,int ) ;
 struct ib_uverbs_flow_attr* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct ib_uverbs_create_flow_resp*,int ,int) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (struct ib_uverbs_flow_attr*,int ,int) ;
 struct ib_uobject* FUNC_14 (struct ib_qp*,struct ib_uverbs_flow_attr*,int ,int *) ;
 int FUNC_15 (struct ib_uobject*) ;
 struct ib_uobject* FUNC_16 (int ,struct uverbs_attr_bundle*,struct ib_device**) ;
 int FUNC_17 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 int FUNC_18 (struct ib_uobject*,struct uverbs_attr_bundle*) ;
 struct ib_qp* FUNC_19 (struct ib_qp*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_20 (struct ib_qp*) ;
 int FUNC_21 (struct uverbs_req_iter*) ;
 int FUNC_22 (struct uverbs_req_iter*,struct ib_uverbs_flow_spec_hdr**,int) ;
 int FUNC_23 (struct uverbs_attr_bundle*,struct uverbs_req_iter*,struct ib_uverbs_create_flow*,int) ;
 int FUNC_24 (struct uverbs_attr_bundle*,struct ib_uverbs_create_flow_resp*,int) ;

__attribute__((used)) static int FUNC_25(struct uverbs_attr_bundle *VAR_16)
{
 struct ib_uverbs_create_flow VAR_17;
 struct ib_uverbs_create_flow_resp VAR_18;
 struct ib_uobject *VAR_19;
 struct ib_flow *VAR_20;
 struct ib_uverbs_flow_attr *VAR_21;
 struct ib_flow_attr *VAR_22;
 struct ib_qp *VAR_23;
 struct ib_uflow_resources *VAR_24;
 struct ib_uverbs_flow_spec_hdr *VAR_25;
 struct uverbs_req_iter VAR_26;
 int VAR_27;
 void *VAR_28;
 int VAR_29;
 struct ib_device *VAR_30;

 VAR_27 = FUNC_23(VAR_16, &VAR_26, &VAR_17, sizeof(VAR_17));
 if (VAR_27)
  return VAR_27;

 if (VAR_17.comp_mask)
  return -VAR_1;

 if (!FUNC_3(VAR_0))
  return -VAR_3;

 if (VAR_17.flow_attr.flags >= VAR_7)
  return -VAR_1;

 if ((VAR_17.flow_attr.flags & VAR_6) &&
     ((VAR_17.flow_attr.type == VAR_5) ||
      (VAR_17.flow_attr.type == VAR_8)))
  return -VAR_1;

 if (VAR_17.flow_attr.num_of_specs > VAR_10)
  return -VAR_1;

 if (VAR_17.flow_attr.size >
     (VAR_17.flow_attr.num_of_specs * sizeof(struct ib_uverbs_flow_spec)))
  return -VAR_1;

 if (VAR_17.flow_attr.reserved[0] ||
     VAR_17.flow_attr.reserved[1])
  return -VAR_1;

 if (VAR_17.flow_attr.num_of_specs) {
  VAR_21 = FUNC_9(sizeof(*VAR_21) + VAR_17.flow_attr.size,
      VAR_4);
  if (!VAR_21)
   return -VAR_2;

  *VAR_21 = VAR_17.flow_attr;
  VAR_27 = FUNC_22(&VAR_26, &VAR_21->flow_specs,
       VAR_17.flow_attr.size);
  if (VAR_27)
   goto err_free_attr;
 } else {
  VAR_21 = &VAR_17.flow_attr;
 }

 VAR_27 = FUNC_21(&VAR_26);
 if (VAR_27)
  goto err_free_attr;

 VAR_19 = FUNC_16(VAR_13, VAR_16, &VAR_30);
 if (FUNC_0(VAR_19)) {
  VAR_27 = FUNC_1(VAR_19);
  goto err_free_attr;
 }

 VAR_23 = FUNC_19(VAR_23, VAR_14, VAR_17.qp_handle, VAR_16);
 if (!VAR_23) {
  VAR_27 = -VAR_1;
  goto err_uobj;
 }

 if (VAR_23->qp_type != VAR_12 && VAR_23->qp_type != VAR_11) {
  VAR_27 = -VAR_1;
  goto err_put;
 }

 VAR_22 = FUNC_10(FUNC_13(VAR_22, VAR_15,
    VAR_17.flow_attr.num_of_specs), VAR_4);
 if (!VAR_22) {
  VAR_27 = -VAR_2;
  goto err_put;
 }
 VAR_24 = FUNC_4(VAR_17.flow_attr.num_of_specs);
 if (!VAR_24) {
  VAR_27 = -VAR_2;
  goto err_free_flow_attr;
 }

 VAR_22->type = VAR_21->type;
 VAR_22->priority = VAR_21->priority;
 VAR_22->num_of_specs = VAR_21->num_of_specs;
 VAR_22->port = VAR_21->port;
 VAR_22->flags = VAR_21->flags;
 VAR_22->size = sizeof(*VAR_22);

 VAR_25 = VAR_21->flow_specs;
 VAR_28 = VAR_22 + 1;
 for (VAR_29 = 0; VAR_29 < VAR_22->num_of_specs &&
   VAR_17.flow_attr.size >= sizeof(*VAR_25) &&
   VAR_17.flow_attr.size >= VAR_25->size;
      VAR_29++) {
  VAR_27 = FUNC_7(
    VAR_16, (struct ib_uverbs_flow_spec *)VAR_25,
    VAR_28, VAR_24);
  if (VAR_27)
   goto err_free;

  VAR_22->size +=
   ((union ib_flow_spec *) VAR_28)->size;
  VAR_17.flow_attr.size -= VAR_25->size;
  VAR_25 = ((void *)VAR_25) + VAR_25->size;
  VAR_28 += ((union ib_flow_spec *) VAR_28)->size;
 }
 if (VAR_17.flow_attr.size || (VAR_29 != VAR_22->num_of_specs)) {
  FUNC_12("create flow failed, flow %d: %d bytes left from uverb cmd\n",
   VAR_29, VAR_17.flow_attr.size);
  VAR_27 = -VAR_1;
  goto err_free;
 }

 VAR_20 = VAR_23->device->ops.create_flow(
  VAR_23, VAR_22, VAR_9, &VAR_16->driver_udata);

 if (FUNC_0(VAR_20)) {
  VAR_27 = FUNC_1(VAR_20);
  goto err_free;
 }

 FUNC_5(VAR_19, VAR_20, VAR_23, VAR_23->device, VAR_24);

 FUNC_11(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.flow_handle = VAR_19->id;

 VAR_27 = FUNC_24(VAR_16, &VAR_18, sizeof(VAR_18));
 if (VAR_27)
  goto err_copy;

 FUNC_20(VAR_23);
 FUNC_8(VAR_22);
 if (VAR_17.flow_attr.num_of_specs)
  FUNC_8(VAR_21);
 return FUNC_18(VAR_19, VAR_16);
err_copy:
 if (!VAR_23->device->ops.destroy_flow(VAR_20))
  FUNC_2(&VAR_23->usecnt);
err_free:
 FUNC_6(VAR_24);
err_free_flow_attr:
 FUNC_8(VAR_22);
err_put:
 FUNC_20(VAR_23);
err_uobj:
 FUNC_17(VAR_19, VAR_16);
err_free_attr:
 if (VAR_17.flow_attr.num_of_specs)
  FUNC_8(VAR_21);
 return VAR_27;
}
