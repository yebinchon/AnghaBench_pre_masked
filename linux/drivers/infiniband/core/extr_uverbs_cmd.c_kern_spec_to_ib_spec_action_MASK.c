
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int size; void* counters; } ;
struct TYPE_14__ {int size; void* act; } ;
struct TYPE_12__ {int size; } ;
struct TYPE_9__ {int size; int tag_id; } ;
union ib_flow_spec {int type; TYPE_8__ flow_count; TYPE_6__ action; TYPE_4__ drop; TYPE_1__ flow_tag; } ;
struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_flow_spec_action_tag {int dummy; } ;
struct ib_uverbs_flow_spec_action_handle {int dummy; } ;
struct ib_uverbs_flow_spec_action_drop {int dummy; } ;
struct ib_uverbs_flow_spec_action_count {int dummy; } ;
struct TYPE_15__ {int size; int handle; } ;
struct TYPE_13__ {int size; int handle; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_10__ {int size; int tag_id; } ;
struct ib_uverbs_flow_spec {int type; TYPE_7__ flow_count; TYPE_5__ action; TYPE_3__ drop; TYPE_2__ flow_tag; } ;
struct ib_uflow_resources {int dummy; } ;
struct ib_flow_spec_action_tag {int dummy; } ;
struct ib_flow_spec_action_handle {int dummy; } ;
struct ib_flow_spec_action_drop {int dummy; } ;
struct ib_flow_spec_action_count {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ib_uflow_resources*,int const,void*) ;
 void* FUNC_1 (int ,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct uverbs_attr_bundle *VAR_6,
           struct ib_uverbs_flow_spec *VAR_7,
           union ib_flow_spec *VAR_8,
           struct ib_uflow_resources *VAR_9)
{
 VAR_8->type = VAR_7->type;
 switch (VAR_8->type) {
 case 128:
  if (VAR_7->flow_tag.size !=
      sizeof(struct ib_uverbs_flow_spec_action_tag))
   return -VAR_0;

  VAR_8->flow_tag.size = sizeof(struct ib_flow_spec_action_tag);
  VAR_8->flow_tag.tag_id = VAR_7->flow_tag.tag_id;
  break;
 case 130:
  if (VAR_7->drop.size !=
      sizeof(struct ib_uverbs_flow_spec_action_drop))
   return -VAR_0;

  VAR_8->drop.size = sizeof(struct ib_flow_spec_action_drop);
  break;
 case 129:
  if (VAR_7->action.size !=
      sizeof(struct ib_uverbs_flow_spec_action_handle))
   return -VAR_1;
  VAR_8->action.act = FUNC_1(VAR_5,
       VAR_3,
       VAR_7->action.handle,
       VAR_6);
  if (!VAR_8->action.act)
   return -VAR_0;
  VAR_8->action.size =
   sizeof(struct ib_flow_spec_action_handle);
  FUNC_0(VAR_9,
       129,
       VAR_8->action.act);
  FUNC_2(VAR_8->action.act);
  break;
 case 131:
  if (VAR_7->flow_count.size !=
   sizeof(struct ib_uverbs_flow_spec_action_count))
   return -VAR_0;
  VAR_8->flow_count.counters =
   FUNC_1(VAR_4,
       VAR_2,
       VAR_7->flow_count.handle,
       VAR_6);
  if (!VAR_8->flow_count.counters)
   return -VAR_0;
  VAR_8->flow_count.size =
    sizeof(struct ib_flow_spec_action_count);
  FUNC_0(VAR_9,
       131,
       VAR_8->flow_count.counters);
  FUNC_2(VAR_8->flow_count.counters);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
