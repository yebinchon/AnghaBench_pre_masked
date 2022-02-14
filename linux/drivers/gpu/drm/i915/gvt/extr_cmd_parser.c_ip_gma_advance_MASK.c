
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser_exec_state {unsigned int ip_gma; scalar_t__ buf_type; scalar_t__ ring_start; scalar_t__ ring_size; unsigned int ip_va; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct parser_exec_state*) ;

__attribute__((used)) static inline int FUNC_1(struct parser_exec_state *VAR_1,
  unsigned int VAR_2)
{
 VAR_1->ip_gma += (VAR_2 << 2);

 if (VAR_1->buf_type == VAR_0) {
  if (VAR_1->ip_gma >= VAR_1->ring_start + VAR_1->ring_size)
   VAR_1->ip_gma -= VAR_1->ring_size;
  FUNC_0(VAR_1);
 } else {
  VAR_1->ip_va += (VAR_2 << 2);
 }

 return 0;
}
