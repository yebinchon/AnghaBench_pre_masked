
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser_exec_state {scalar_t__ buf_type; scalar_t__ ret_ip_gma_bb; scalar_t__ ret_ip_gma_ring; scalar_t__ ring_start; scalar_t__ ring_size; int buf_addr_type; int saved_buf_addr_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct parser_exec_state*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct parser_exec_state *VAR_4)
{
 int VAR_5;

 if (VAR_4->buf_type == VAR_0) {
  VAR_4->buf_type = VAR_1;
  VAR_5 = FUNC_0(VAR_4, VAR_4->ret_ip_gma_bb);
  VAR_4->buf_addr_type = VAR_4->saved_buf_addr_type;
 } else {
  VAR_4->buf_type = VAR_3;
  VAR_4->buf_addr_type = VAR_2;
  if (VAR_4->ret_ip_gma_ring >= VAR_4->ring_start + VAR_4->ring_size)
   VAR_4->ret_ip_gma_ring -= VAR_4->ring_size;
  VAR_5 = FUNC_0(VAR_4, VAR_4->ret_ip_gma_ring);
 }
 return VAR_5;
}
