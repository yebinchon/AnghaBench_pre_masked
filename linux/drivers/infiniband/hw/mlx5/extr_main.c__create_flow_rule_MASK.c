
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union ib_flow_spec {int size; int type; } ;
typedef int u32 ;
struct mlx5_ib_mcounters {int hw_cntrs_hndl; } ;
struct mlx5_ib_flow_prio {struct mlx5_flow_table* flow_table; int refcount; } ;
struct mlx5_ib_flow_handler {TYPE_3__* ibcounters; struct mlx5_ib_dev* dev; struct mlx5_ib_flow_prio* prio; int rule; int list; } ;
struct mlx5_ib_dev {int mdev; TYPE_1__* port; scalar_t__ is_rep; } ;
struct mlx5_ib_create_flow {int dummy; } ;
struct mlx5_flow_table {int dummy; } ;
struct TYPE_7__ {int flags; int flow_tag; } ;
struct mlx5_flow_spec {TYPE_2__ flow_context; int match_criteria; int match_criteria_enable; } ;
struct mlx5_flow_destination {int counter_id; int type; } ;
struct mlx5_flow_act {int action; TYPE_3__* counters; } ;
struct mlx5_eswitch_rep {int dummy; } ;
struct ib_flow_attr {int flags; unsigned int num_of_specs; int port; int type; } ;
struct TYPE_8__ {int usecnt; } ;
struct TYPE_6__ {struct mlx5_eswitch_rep* rep; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_ib_flow_handler* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,struct mlx5_ib_create_flow*) ;
 int FUNC_7 (struct ib_flow_attr const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct ib_flow_attr const*) ;
 int FUNC_10 (int ,struct mlx5_flow_spec*,struct mlx5_flow_act*,int) ;
 int FUNC_11 (struct mlx5_ib_flow_handler*) ;
 int FUNC_12 (struct mlx5_flow_spec*) ;
 struct mlx5_flow_spec* FUNC_13 (int,int ) ;
 struct mlx5_ib_flow_handler* FUNC_14 (int,int ) ;
 int FUNC_15 (struct mlx5_flow_destination*,struct mlx5_flow_destination*,int) ;
 int FUNC_16 (struct mlx5_flow_table*,struct mlx5_flow_spec*,struct mlx5_flow_act*,struct mlx5_flow_destination*,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct mlx5_ib_dev*,struct mlx5_flow_spec*,struct mlx5_eswitch_rep*) ;
 int FUNC_19 (struct mlx5_ib_dev*,char*,int ,int ) ;
 int FUNC_20 (int ,struct mlx5_flow_spec*,void const*,struct ib_flow_attr const*,struct mlx5_flow_act*,int ) ;
 int FUNC_21 (struct mlx5_ib_dev*,struct mlx5_flow_spec*,int ) ;
 struct mlx5_ib_mcounters* FUNC_22 (TYPE_3__*) ;

__attribute__((used)) static struct mlx5_ib_flow_handler *FUNC_23(struct mlx5_ib_dev *VAR_13,
            struct mlx5_ib_flow_prio *VAR_14,
            const struct ib_flow_attr *VAR_15,
            struct mlx5_flow_destination *VAR_16,
            u32 VAR_17,
            struct mlx5_ib_create_flow *VAR_18)
{
 struct mlx5_flow_table *VAR_19 = VAR_14->flow_table;
 struct mlx5_ib_flow_handler *VAR_20;
 struct mlx5_flow_act VAR_21 = {};
 struct mlx5_flow_spec *VAR_22;
 struct mlx5_flow_destination VAR_23[2] = {};
 struct mlx5_flow_destination *VAR_24 = VAR_23;
 const void *VAR_25 = (const void *)VAR_15 + sizeof(*VAR_15);
 unsigned int VAR_26;
 u32 VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = 0;
 bool VAR_30 = VAR_15->flags & VAR_5;

 if (!FUNC_9(VAR_13->mdev, VAR_15))
  return FUNC_0(-VAR_0);

 if (VAR_13->is_rep && VAR_30)
  return FUNC_0(-VAR_0);

 VAR_22 = FUNC_13(sizeof(*VAR_22), VAR_3);
 VAR_20 = FUNC_14(sizeof(*VAR_20), VAR_3);
 if (!VAR_20 || !VAR_22) {
  VAR_28 = -VAR_1;
  goto free;
 }

 FUNC_1(&VAR_20->list);
 if (VAR_16) {
  FUNC_15(&VAR_23[0], VAR_16, sizeof(*VAR_16));
  VAR_29++;
 }

 for (VAR_26 = 0; VAR_26 < VAR_15->num_of_specs; VAR_26++) {
  VAR_28 = FUNC_20(VAR_13->mdev, VAR_22,
          VAR_25, VAR_15, &VAR_21,
          VAR_27);
  if (VAR_28 < 0)
   goto free;

  VAR_27 = ((union ib_flow_spec *)VAR_25)->type;
  VAR_25 += ((union ib_flow_spec *)VAR_25)->size;
 }

 if (!FUNC_7(VAR_15))
  FUNC_21(VAR_13, VAR_22, VAR_17);

 if (VAR_13->is_rep) {
  struct mlx5_eswitch_rep *VAR_31;

  VAR_31 = VAR_13->port[VAR_15->port - 1].rep;
  if (!VAR_31) {
   VAR_28 = -VAR_0;
   goto free;
  }

  FUNC_18(VAR_13, VAR_22, VAR_31);
 }

 VAR_22->match_criteria_enable = FUNC_8(VAR_22->match_criteria);

 if (VAR_30 &&
     !FUNC_10(VAR_13->mdev, VAR_22, &VAR_21, VAR_30)) {
  VAR_28 = -VAR_0;
  goto free;
 }

 if (VAR_21.action & VAR_8) {
  struct mlx5_ib_mcounters *VAR_32;

  VAR_28 = FUNC_6(VAR_21.counters, VAR_18);
  if (VAR_28)
   goto free;

  VAR_32 = FUNC_22(VAR_21.counters);
  VAR_20->ibcounters = VAR_21.counters;
  VAR_23[VAR_29].type =
   VAR_12;
  VAR_23[VAR_29].counter_id =
   FUNC_17(VAR_32->hw_cntrs_hndl);
  VAR_29++;
 }

 if (VAR_21.action & VAR_9) {
  if (!(VAR_21.action & VAR_8)) {
   VAR_24 = ((void*)0);
   VAR_29 = 0;
  }
 } else {
  if (VAR_30)
   VAR_21.action |= VAR_7;
  else
   VAR_21.action |=
    VAR_29 ? VAR_10 :
     VAR_11;
 }

 if ((VAR_22->flow_context.flags & VAR_2) &&
     (VAR_15->type == VAR_4 ||
      VAR_15->type == VAR_6)) {
  FUNC_19(VAR_13, "Flow tag %u and attribute type %x isn't allowed in leftovers\n",
        VAR_22->flow_context.flow_tag, VAR_15->type);
  VAR_28 = -VAR_0;
  goto free;
 }
 VAR_20->rule = FUNC_16(VAR_19, VAR_22,
         &VAR_21,
         VAR_24, VAR_29);

 if (FUNC_2(VAR_20->rule)) {
  VAR_28 = FUNC_3(VAR_20->rule);
  goto free;
 }

 VAR_14->refcount++;
 VAR_20->prio = VAR_14;
 VAR_20->dev = VAR_13;

 VAR_14->flow_table = VAR_19;
free:
 if (VAR_28 && VAR_20) {
  if (VAR_20->ibcounters &&
      FUNC_4(&VAR_20->ibcounters->usecnt) == 1)
   FUNC_5(VAR_20->ibcounters);
  FUNC_11(VAR_20);
 }
 FUNC_12(VAR_22);
 return VAR_28 ? FUNC_0(VAR_28) : VAR_20;
}
