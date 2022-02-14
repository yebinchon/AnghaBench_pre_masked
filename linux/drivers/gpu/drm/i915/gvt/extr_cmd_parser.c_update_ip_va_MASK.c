
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser_exec_state {unsigned long ring_head; unsigned long ring_tail; scalar_t__ buf_type; unsigned long ring_start; unsigned long ring_size; unsigned long ip_gma; scalar_t__ ret_bb_va; scalar_t__ ip_va; scalar_t__ rb_va; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct parser_exec_state *VAR_1)
{
 unsigned long VAR_2 = 0;

 if (FUNC_0(VAR_1->ring_head == VAR_1->ring_tail))
  return;

 if (VAR_1->buf_type == VAR_0) {
  unsigned long VAR_3 = VAR_1->ring_start + VAR_1->ring_size;

  if (VAR_1->ring_head > VAR_1->ring_tail) {
   if (VAR_1->ip_gma >= VAR_1->ring_head && VAR_1->ip_gma < VAR_3)
    VAR_2 = (VAR_1->ip_gma - VAR_1->ring_head);
   else if (VAR_1->ip_gma >= VAR_1->ring_start &&
     VAR_1->ip_gma <= VAR_1->ring_tail)
    VAR_2 = (VAR_3 - VAR_1->ring_head) +
     (VAR_1->ip_gma - VAR_1->ring_start);
  } else
   VAR_2 = (VAR_1->ip_gma - VAR_1->ring_head);

  VAR_1->ip_va = VAR_1->rb_va + VAR_2;
 } else {
  VAR_1->ip_va = VAR_1->ret_bb_va;
 }
}
