
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {int sptr; int wptr; int rptr; } ;



__attribute__((used)) static inline void FUNC_0 (struct rpc_buffer *VAR_0) {
  VAR_0->rptr = VAR_0->wptr = VAR_0->sptr;
}
