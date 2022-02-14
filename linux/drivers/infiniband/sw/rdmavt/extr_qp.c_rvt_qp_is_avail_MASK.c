
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int qp_num; } ;
struct rvt_qp {int s_avail; scalar_t__ s_head; int s_size; int s_last; int s_acked; int s_cur; int s_tail; TYPE_2__ ibqp; int s_reserved_used; } ;
struct TYPE_3__ {scalar_t__ reserved_operations; } ;
struct rvt_dev_info {TYPE_1__ dparms; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct rvt_dev_info*,char*,int ,int,int,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline int FUNC_7(
 struct rvt_qp *VAR_1,
 struct rvt_dev_info *VAR_2,
 bool VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;


 FUNC_5();
 if (FUNC_6(VAR_3)) {

  VAR_6 = FUNC_1(&VAR_1->s_reserved_used);
  if (VAR_6 >= VAR_2->dparms.reserved_operations)
   return -VAR_0;
  return 0;
 }

 if (FUNC_2(VAR_1->s_avail))
  return 0;

 VAR_4 = FUNC_4(&VAR_1->s_last);
 if (VAR_1->s_head >= VAR_4)
  VAR_5 = VAR_1->s_size - (VAR_1->s_head - VAR_4);
 else
  VAR_5 = VAR_4 - VAR_1->s_head;

 VAR_6 = FUNC_1(&VAR_1->s_reserved_used);
 VAR_5 = VAR_5 - 1 -
  (VAR_2->dparms.reserved_operations - VAR_6);

 if ((s32)VAR_5 <= 0)
  return -VAR_0;
 VAR_1->s_avail = VAR_5;
 if (FUNC_0(VAR_1->s_avail >
      (VAR_1->s_size - 1 - VAR_2->dparms.reserved_operations)))
  FUNC_3(VAR_2,
      "More avail entries than QP RB size.\nQP: %u, size: %u, avail: %u\nhead: %u, tail: %u, cur: %u, acked: %u, last: %u",
      VAR_1->ibqp.qp_num, VAR_1->s_size, VAR_1->s_avail,
      VAR_1->s_head, VAR_1->s_tail, VAR_1->s_cur,
      VAR_1->s_acked, VAR_1->s_last);
 return 0;
}
