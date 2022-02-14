
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_buffer {int wptr; } ;


 int FUNC_0 (struct rpc_buffer*,int) ;
 int FUNC_1 (int,void const*,int) ;

__attribute__((used)) static inline void FUNC_2 (struct rpc_buffer *VAR_0, const void *VAR_1, int VAR_2) {
  FUNC_0 (VAR_0, VAR_2);
  FUNC_1 (VAR_0->wptr, VAR_1, VAR_2);
  VAR_0->wptr += VAR_2;
}
