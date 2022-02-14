
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
struct rpc_buffer {scalar_t__ wptr; } ;


 int FUNC_0 (struct rpc_buffer*,int) ;

__attribute__((used)) static inline void FUNC_1 (struct rpc_buffer *VAR_0, double VAR_1) {
  FUNC_0 (VAR_0, sizeof (VAR_1));
  *(double *)(VAR_0->wptr) = VAR_1;
  VAR_0->wptr += sizeof (VAR_1);
}
