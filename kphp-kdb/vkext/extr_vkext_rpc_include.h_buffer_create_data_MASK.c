
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {void* eptr; void* wptr; void* sptr; void* rptr; int magic; } ;


 int VAR_0 ;
 struct rpc_buffer* FUNC_0 (int) ;

__attribute__((used)) static inline struct rpc_buffer *FUNC_1 (void *VAR_1, int VAR_2) {
  struct rpc_buffer *VAR_3 = FUNC_0 (sizeof (struct rpc_buffer));
  VAR_3->magic = VAR_0;
  VAR_3->rptr = VAR_3->sptr = VAR_1;
  VAR_3->wptr = VAR_3->eptr = VAR_1 + VAR_2;
  return VAR_3;
}
