
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {int sptr; int rptr; } ;



__attribute__((used)) static inline int FUNC_0 (struct rpc_buffer *VAR_0) {
  int VAR_1 = (VAR_0->sptr - VAR_0->rptr) & 3;
  VAR_0->rptr += VAR_1;
  return 1;
}
