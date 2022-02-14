
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {scalar_t__ qp_type; scalar_t__ pd; } ;
struct rvt_qp {TYPE_2__ ibqp; int s_max_rd_atomic; } ;
struct rvt_operation_params {int length; int qpt_support; int flags; } ;
struct ib_ud_wr {int dummy; } ;
struct ib_send_wr {size_t opcode; scalar_t__ num_sge; TYPE_1__* sg_list; } ;
struct TYPE_10__ {scalar_t__ user; } ;
struct TYPE_9__ {TYPE_3__* ah; } ;
struct TYPE_8__ {scalar_t__ pd; } ;
struct TYPE_6__ {int length; int addr; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_1 (scalar_t__) ;
 TYPE_4__* FUNC_2 (struct ib_send_wr const*) ;

__attribute__((used)) static inline int FUNC_3(
 struct rvt_qp *VAR_7,
 const struct rvt_operation_params *VAR_8,
 const struct ib_send_wr *VAR_9)
{
 int VAR_10;

 if (VAR_9->opcode >= VAR_5 || !VAR_8[VAR_9->opcode].length)
  return -VAR_0;
 if (!(VAR_8[VAR_9->opcode].qpt_support & FUNC_0(VAR_7->ibqp.qp_type)))
  return -VAR_0;
 if ((VAR_8[VAR_9->opcode].flags & VAR_6) &&
     FUNC_1(VAR_7->ibqp.pd)->user)
  return -VAR_0;
 if (VAR_8[VAR_9->opcode].flags & VAR_4 &&
     (VAR_9->num_sge == 0 ||
      VAR_9->sg_list[0].length < sizeof(u64) ||
      VAR_9->sg_list[0].addr & (sizeof(u64) - 1)))
  return -VAR_0;
 if (VAR_8[VAR_9->opcode].flags & VAR_3 &&
     !VAR_7->s_max_rd_atomic)
  return -VAR_0;
 VAR_10 = VAR_8[VAR_9->opcode].length;

 if (VAR_7->ibqp.qp_type != VAR_2 &&
     VAR_7->ibqp.qp_type != VAR_1) {
  if (VAR_7->ibqp.pd != FUNC_2(VAR_9)->ah->pd)
   return -VAR_0;
  VAR_10 = sizeof(struct ib_ud_wr);
 }
 return VAR_10;
}
