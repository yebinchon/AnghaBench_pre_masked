
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {scalar_t__ s_last; scalar_t__ s_acked; scalar_t__ s_cur; scalar_t__ s_tail; scalar_t__ s_head; } ;



__attribute__((used)) static int FUNC_0(struct rvt_qp *VAR_0)
{
 return
  VAR_0->s_last == VAR_0->s_acked &&
  VAR_0->s_acked == VAR_0->s_cur &&
  VAR_0->s_cur == VAR_0->s_tail &&
  VAR_0->s_tail == VAR_0->s_head;
}
