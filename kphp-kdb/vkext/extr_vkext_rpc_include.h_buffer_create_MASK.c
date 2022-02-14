
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {scalar_t__ sptr; scalar_t__ rptr; scalar_t__ wptr; scalar_t__ eptr; int magic; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct rpc_buffer* FUNC_1 (int) ;

__attribute__((used)) static struct rpc_buffer *FUNC_2 (int VAR_1) {
  struct rpc_buffer *VAR_2 = FUNC_1 (sizeof (struct rpc_buffer));
  VAR_2->magic = VAR_0;
  VAR_2->sptr = FUNC_0 (VAR_1);
  VAR_2->eptr = VAR_2->sptr + VAR_1;
  VAR_2->wptr = VAR_2->rptr = VAR_2->sptr;
  return VAR_2;
}
